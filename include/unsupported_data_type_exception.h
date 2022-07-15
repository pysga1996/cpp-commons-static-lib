#ifndef CPP_COMMONS_UNSUPPORTED_DATA_TYPE_EXCEPTION_H
#define CPP_COMMONS_UNSUPPORTED_DATA_TYPE_EXCEPTION_H

#include <exception>

namespace cpp_commons {

    class UnsupportedDataTypeException : public std::exception {
        const char *what() const noexcept override;
    };
}


#endif //CPP_COMMONS_UNSUPPORTED_DATA_TYPE_EXCEPTION_H
