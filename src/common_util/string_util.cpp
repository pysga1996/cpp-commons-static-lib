#include <string>
#include <vector>
#include <sstream>

namespace cpp_commons {

    namespace string_util {

        using namespace std;

        vector<string> split(const string &s, char delim) {
            stringstream ss(s);
            string item;
            vector<string> elems;
            while (getline(ss, item, delim)) {
                elems.push_back(move(item));
            }
            return elems;
        }

    }
}