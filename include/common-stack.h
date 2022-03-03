#ifndef CPP_COMMONS_COMMON_STACK_H
#define CPP_COMMONS_COMMON_STACK_H

#include <stack>
#include <string>
#include <exception>
#include <iostream>
#include <fstream>
#include <common-util.h>
#include <UnsupportedDataTypeException.h>
#include <common-var.h>

namespace cpp_commons {

    namespace common_collection {

        namespace common_stack {

            template<typename T>
            std::stack<T> convertFromString(const std::string &str) {
                using namespace std;
                stack<T> s{};
                auto start = 0U;
                auto end = str.find(COMMA);
                string token;
                T data;
                while (end != string::npos) {
                    token = str.substr(start, end - start);
                    data = common_util::convertData<T>(token);
                    s.push(data);
//                    cout << token << endl;
                    start = end + COMMA.length();
                    end = str.find(COMMA, start);
                }
                token = str.substr(start, end);
                data = common_util::convertData<T>(token);
                s.push(data);
//                cout << token << endl;
                return s;
            }

            template<typename T>
            std::stack<T> importFromFile(const std::string &fileName) {
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
                return stack<T>{};
            }

            template<typename T>
            void print(std::stack<T> s) {
                using namespace std;
                cout << "| ";
                stack<int> temp;
                while (s.empty() == false) {
                    temp.push(s.top());
                    s.pop();
                }
                while (!temp.empty()) {
                    int t = temp.top();
                    cout << t << TAB;
                    temp.pop();

                    // To restore contents of
                    // the original stack.
                    s.push(t);
                }
                cout << "<<<>>>";
            }

        }
    }
}

#endif
