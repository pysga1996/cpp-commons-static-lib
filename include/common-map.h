#ifndef CPP_COMMONS_COMMON_MAP_H
#define CPP_COMMONS_COMMON_MAP_H

#include <map>
#include <string>
#include <exception>
#include <iostream>
#include <fstream>
#include <memory>
#include <common-util.h>
#include <UnsupportedDataTypeException.h>
#include <common-var.h>

namespace cpp_commons {

    namespace common_collection {

        namespace common_map {

            template<typename T1, typename T2>
            struct MapEntry {
                T1 key;
                T2 value;

                MapEntry(T1 key, T2 value) : key(key), value(value) {}
            };

            template<typename T1, typename T2>
            std::unique_ptr<MapEntry<T1, T2>> convertFromString(const std::string &str) {
                using namespace std;
                auto start = 0U;
                auto end = str.find(COLON);
                string token;
                T1 key;
                T2 value;
                if (end != string::npos) {
                    token = str.substr(start, end - start);
                    key = common_util::convertData<T1>(token);
                    start = end + COLON.length();
                    end = str.find(COLON, start);
                    token = str.substr(start, end - start);
                    value = common_util::convertData<T2>(token);
                    return make_unique<MapEntry<T1, T2>>(key, value);
                }
                return NULL;
            }

            template<typename T1, typename T2>
            std::map<T1, T2> importFromFile(const std::string &fileName) {
                using namespace std;
                map<T1, T2> m;
                ifstream is(fileName);
                if (is.is_open()) {   //checking whether the file is open
                    string tp;
                    while (getline(is, tp)) { //read data from file object and put it into string.
//                        cout << tp << endl; //print the data of the string
                        unique_ptr<MapEntry<T1, T2>> mePtr = convertFromString<T1, T2>(tp);
                        if (mePtr != nullptr) {
                            m[mePtr.get()->key] = mePtr.get()->value;
                        }
                    }
                    is.close(); //close the file object.
                }
                return m;
            }

            template<typename T1, typename T2>
            void print(std::map<T1, T2> m) {
                using namespace std;
                cout << "{\n";
                typename map<T1, T2>::iterator beforeEnd = prev(m.end(), 1);
                for (auto it = m.begin(); it != m.end(); ++it) {
                    cout << "\t" << it->first << ": " << it->second << endl;
                }
                cout << "}";
            }

        }
    }
}


#endif
