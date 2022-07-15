#ifndef CPP_COMMONS_COMMON_MATRIX_H
#define CPP_COMMONS_COMMON_MATRIX_H

#include <vector>
#include <string>
#include <exception>
#include <iostream>
#include <fstream>
#include <common_util.h>
#include <unsupported_data_type_exception.h>
#include <common_var.h>
#include <common_vector.h>

namespace cpp_commons {

    namespace common_matrix {

        template<typename T>
        std::vector<std::vector<T>> importFromFile(const std::string &fileName) {
            using namespace std;
            namespace cv = cpp_commons::common_collection::common_vector;
            std::vector<std::vector<T>> m;
            ifstream is(fileName);
            if (is.is_open()) {   //checking whether the file is open
                string tp;
                while (getline(is, tp)) { //read data from file object and put it into string.
//                        cout << tp << endl; //print the data of the string
                    std::vector<T> v = cv::convertFromString<T>(tp);
                    m.push_back(v);
                }
                is.close(); //close the file object.
            }
            return m;
        }

        template<typename T>
        void print(std::vector<std::vector<T>> m) {
            using namespace std;
            namespace cv = cpp_commons::common_collection::common_vector;
            for (auto it = m.begin(); it != m.end(); ++it){
                vector<T> v = it.operator*();
                for (int i = 0; i < v.size(); ++i) {
                    cout << v.at(i);
                    if (i < v.size() - 1) {
                        cout << ", ";
                    }
                }
                cout << endl;
            }
        }

    }
}

#endif //CPP_COMMONS_COMMON_MATRIX_H
