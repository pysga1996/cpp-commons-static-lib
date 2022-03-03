#ifndef CPP_COMMONS_COMMON_QUEUE_H
#define CPP_COMMONS_COMMON_QUEUE_H

#include <queue>
#include <string>
#include <exception>
#include <iostream>
#include <fstream>
#include <common-util.h>
#include <UnsupportedDataTypeException.h>
#include <common-var.h>

namespace cpp_commons {

    namespace common_collection {

        namespace common_queue {

            template<typename T>
            std::queue<T> convertFromString(const std::string &str) {
                using namespace std;
                queue<T> q{};
                auto start = 0U;
                auto end = str.find(COMMA);
                string token;
                T data;
                while (end != string::npos) {
                    token = str.substr(start, end - start);
                    data = common_util::convertData<T>(token);
                    q.push(data);
//                    cout << token << endl;
                    start = end + COMMA.length();
                    end = str.find(COMMA, start);
                }
                token = str.substr(start, end);
                data = common_util::convertData<T>(token);
                q.push(data);
//                cout << token << endl;
                return q;
            }

            template<typename T>
            std::queue<T> importFromFile(const std::string &fileName) {
                using namespace std;
                ifstream is(fileName);
                if (is.is_open()) {   //checking whether the file is open
                    string tp;
                    while (getline(is, tp)) { //read data from file object and put it into string.
//                        cout << tp << endl; //print the data of the string
                        return convertFromString<T>(tp);
                    }
                    is.close(); //close the file object.
                }
                return queue<T>{};
            }

            template<typename T>
            void print(std::queue<T> q) {
                using namespace std;
                queue<T> qClone(q);
                cout << "<<< " ;
                while (!qClone.empty()) {
                    std::cout << qClone.front() << TAB;
                    qClone.pop();
                }
                cout << "<<<";
            }

        }
    }
}

#endif
