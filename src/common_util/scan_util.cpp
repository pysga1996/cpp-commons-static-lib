#include <iostream>
#include <limits>
#include <common_util.h>

namespace cpp_commons {

    namespace scan_util {

        using namespace std;

        short int scanShortInt() {
            return (short int) scanInt();
        }

        int scanInt() {
            int x;
            while (true) {
                cin >> x;
                if (!std::cin.fail()) break;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Bad entry. Enter a NUMBER: ";
            }
            return x;
        }

        unsigned int scanUnsignedInt() {
            unsigned int x;
            while (true) {
                cin >> x;
                if (!std::cin.fail()) break;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Bad entry. Enter a NUMBER: ";
            }
            return x;
        }

        long int scanLongInt() {
            long int x;
            while (true) {
                cin >> x;
                if (!std::cin.fail()) break;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Bad entry. Enter a NUMBER: ";
            }
            return x;
        }

        unsigned long int scanUnsignedLongInt() {
            unsigned long int x;
            while (true) {
                cin >> x;
                if (!std::cin.fail()) break;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Bad entry. Enter a NUMBER: ";
            }
            return x;
        }

        long long int scanLongLongInt() {
            long long int x;
            while (true) {
                cin >> x;
                if (!std::cin.fail()) break;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Bad entry. Enter a NUMBER: ";
            }
            return x;
        }

        unsigned long long int scanUnsignedLongLongInt() {
            unsigned long long int x;
            while (true) {
                cin >> x;
                if (!std::cin.fail()) break;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Bad entry. Enter a NUMBER: ";
            }
            return x;
        }

        float scantFloat() {
            float x;
            while (true) {
                cin >> x;
                if (!std::cin.fail()) break;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Bad entry. Enter a NUMBER: ";
            }
            return x;
        }

        long double scanLongDouble() {
            long double x;
            while (true) {
                cin >> x;
                if (!std::cin.fail()) break;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Bad entry. Enter a NUMBER: ";
            }
            return x;
        }

    }

}