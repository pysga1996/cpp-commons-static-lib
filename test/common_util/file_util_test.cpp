#include <gtest/gtest.h>
#include <string>
#include <common_util.h>

TEST(FileUtil, ReadMenuTest) {
    using namespace std;
    string fileName = "common_util/menu_test.txt";
    namespace fu = cpp_commons::file_util;
//    string content = fu::readMenu(fileName);
    string content;
    ASSERT_NO_THROW(content = fu::readMenu(fileName));
    ASSERT_EQ(content, "Line 1\nLine 2\nLine 3\n");
    cout << content << endl;
}