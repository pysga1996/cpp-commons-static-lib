#include <gtest/gtest.h>
#include <string>
#include <common_set.h>

TEST(CommonSet, IntSetTest) {
    using namespace std;
    string fileName = "common-collection/common-set/int-set.txt";
    namespace vt = cpp_commons::common_collection::common_set;
    auto listInt = vt::importFromFile<int>(fileName);
    ASSERT_NO_THROW(vt::print(listInt));
    ASSERT_EQ(listInt.size(), 12);
    cout << endl;
}

TEST(CommonSet, StringSetTest) {
    using namespace std;
    string fileName = "common-collection/common-set/string-set.txt";
    namespace vt = cpp_commons::common_collection::common_set;
    auto listInt = vt::importFromFile<string>(fileName);
    ASSERT_NO_THROW(vt::print(listInt));
    ASSERT_EQ(listInt.size(), 12);
    cout << endl;
}