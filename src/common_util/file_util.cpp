#include <string>
#include <fstream>
#include <iostream>
#include <common_util.h>

#define EXIT_CODE 0
#define CONTINUE_CODE 1

namespace cpp_commons {

    namespace file_util {

        using namespace std;
        using namespace scan_util;

        string readMenu(const string &menuFileName) {
            string content;
            string tempStr;
            ifstream menuFile(menuFileName);
            while (getline(menuFile, tempStr)) {
                content.append(tempStr).append("\n");
            }
            menuFile.close();
            return content;
        }

        void processMenu(const string& menuFileName, const ExDemoFuncMapper &exDemoFuncMapper) {
            int command;
            string menu = readMenu(menuFileName);
            do {
                cout << menu;
                command = scanInt();
                ExDemoFuncPtr funcPtr = exDemoFuncMapper(command);
                if (funcPtr != nullptr) {
                    processExercise(funcPtr);
                }
            } while (command != EXIT_CODE);
        }

        void processExercise(const ExDemoFuncPtr &exDemoFuncPtr) {
            int command;
            cout << ">>> Start >>>" << endl;
            do {
                exDemoFuncPtr();
                cout << "Enter 1 to continue, or any other characters to get back to the main menu:" << endl;
                command = scanInt();
            } while (command == CONTINUE_CODE);
            cout << "<<< End <<<" << endl << endl << endl;
        }
    }
}