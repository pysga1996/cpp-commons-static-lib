#include <gtest/gtest.h>
#include <string>
#include <common-vector.h>

TEST(CommonVector, IntVectorTest) {
    using namespace std;
    string fileName = "common-collection/common-vector/int-vector.txt";
    namespace vt = cpp_commons::common_collection::common_vector;
    auto vectorInt = vt::importFromFile<int>(fileName);
    ASSERT_NO_THROW(vt::print(vectorInt));
    ASSERT_EQ(vectorInt.size(), 12);
    cout << endl;
}

TEST(CommonVector, StringVectorTest) {
    using namespace std;
    string fileName = "common-collection/common-vector/string-vector.txt";
    namespace vt = cpp_commons::common_collection::common_vector;
    auto vectorStr = vt::importFromFile<string>(fileName);
    ASSERT_NO_THROW(vt::print(vectorStr));
    ASSERT_EQ(vectorStr.size(), 12);
    cout << endl;
}