#include <gtest/gtest.h>
#include <string>
#include <common-stack.h>

TEST(CommonStack, IntStackTest) {
    using namespace std;
    string fileName = "common-collection/common-stack/int-stack.txt";
    namespace vt = cpp_commons::common_collection::common_stack;
    auto stackInt = vt::importFromFile<int>(fileName);
    ASSERT_NO_THROW(vt::print(stackInt));
    ASSERT_EQ(stackInt.size(), 12);
    cout << endl;
}

TEST(CommonStack, StringStackTest) {
    using namespace std;
    string fileName = "common-collection/common-stack/string-stack.txt";
    namespace vt = cpp_commons::common_collection::common_stack;
    auto stackString = vt::importFromFile<string>(fileName);
    ASSERT_NO_THROW(vt::print(stackString));
    ASSERT_EQ(stackString.size(), 12);
    cout << endl;
}
