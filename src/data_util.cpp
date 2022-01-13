#include <vector>
#include <string>
#include <exception>

namespace data_util {

    using namespace std;

    struct UnsupportedDataTypeException : public exception {
        const char *what() const noexcept override {
            return "This data type is not supported";
        }
    };

    template<typename T>
    vector<T> convertFromFile() { /* generic implementation  */
        throw UnsupportedDataTypeException();
    }

    template<>
    vector<string> convertFromFile<string>() { /* specific for T = animal */
        return vector<string>{};
    }

    template<>
    vector<int> convertFromFile<int>() { /* specific for T = animal */
        return vector<int>{};
    }
}
