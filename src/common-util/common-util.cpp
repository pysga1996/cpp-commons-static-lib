#include <string>
#include <common-util.h>

namespace cpp_commons {

    namespace common_util {

        template<typename T>
        T convertData(const std::string &data) {
            throw UnsupportedDataTypeException();
        }

        template<>
        int convertData(const std::string &data) {
            return stoi(data);
        }

        template<>
        long convertData(const std::string &data) {
            return stol(data);
        }

        template<>
        long long convertData(const std::string &data) {
            return stoll(data);
        }

        template<>
        float convertData(const std::string &data) {
            return stof(data);
        }

        template<>
        double convertData(const std::string &data) {
            return stod(data);
        }

        template<>
        long double convertData(const std::string &data) {
            return stold(data);
        }

        template<>
        std::string convertData(const std::string &data) {
            return data;
        }
    }
}
