#ifndef CPP_COMMONS_COMMON_UTIL_H
#define CPP_COMMONS_COMMON_UTIL_H

#include <string>
#include <vector>
#include <functional>
#include <unsupported_data_type_exception.h>

namespace cpp_commons {

    namespace data_util {

        template<typename T>
        T convertData(const std::string &data);

    }

    namespace string_util {

        std::vector<std::string> split(const std::string &s, char delim);

    }

    namespace file_util {

        typedef std::function<void()> ExDemoFuncPtr;

        typedef std::function<ExDemoFuncPtr(int)> ExDemoFuncMapper;

        std::string readMenu(const std::string& menuFileName);

        void processMenu(const std::string& menuFileName, const ExDemoFuncMapper& exDemoFuncMapper);

        void processExercise(const ExDemoFuncPtr& exDemoFuncPtr);
    }

    namespace scan_util {

        short int scanShortInt();

        int scanInt();

        unsigned int scanUnsignedInt();

        long int scanLongInt();

        unsigned long int scanUnsignedLongInt();

        long long int scanLongLongInt();

        unsigned long long int scanUnsignedLongLongInt();

        float scantFloat();

        long double scanLongDouble();

    }

}

#endif
