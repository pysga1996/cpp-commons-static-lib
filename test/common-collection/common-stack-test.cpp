#include <gtest/gtest.h>
#include <string>
#include <common-stack.h>

TEST(CommonStack, IntStackTest) {
    using namespace std;
    string fileName = "common-collection/common-stack/int-stack.txt";
    namespace vt = cpp_commons::common_collection::common_stack;
    auto intStack = vt::importFromFile<int>(fileName);
    ASSERT_NO_THROW(vt::print(intStack));
    ASSERT_EQ(intStack.size(), 15);
    cout << endl;
}