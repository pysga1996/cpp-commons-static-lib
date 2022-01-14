#include <gtest/gtest.h>
#include <string>
#include <common-list.h>

TEST(CommonList, IntListTest) {
    using namespace std;
    string fileName = "common-collection/common-list/int-list.txt";
    namespace vt = cpp_commons::common_collection::common_list;
    auto listInt = vt::importFromFile<int>(fileName);
    ASSERT_NO_THROW(vt::print(listInt));
    ASSERT_EQ(listInt.size(), 12);
    cout << endl;
}

TEST(CommonList, StringListTest) {
    using namespace std;
    string fileName = "common-collection/common-list/string-list.txt";
    namespace vt = cpp_commons::common_collection::common_list;
    auto listInt = vt::importFromFile<string>(fileName);
    ASSERT_NO_THROW(vt::print(listInt));
    ASSERT_EQ(listInt.size(), 12);
    cout << endl;
}
