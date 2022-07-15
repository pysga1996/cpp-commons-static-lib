#include "unsupported_data_type_exception.h"

namespace cpp_commons {

    const char *UnsupportedDataTypeException::what() const noexcept {
        return "This data type is not supported";
    }
}