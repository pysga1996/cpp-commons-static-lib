#include <gtest/gtest.h>
#include <string>
#include <common-map.h>

TEST(CommonMap, IntStringMapTest) {
    using namespace std;
    string fileName = "common-collection/common-map/int-string-map.txt";
    namespace vt = cpp_commons::common_collection::common_map;
    auto mapInStringt = vt::importFromFile<int, string>(fileName);
    ASSERT_NO_THROW(vt::print(mapInStringt));
    ASSERT_EQ(mapInStringt.size(), 5);
    cout << endl;
}