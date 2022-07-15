#include <gtest/gtest.h>
#include <string>
#include <common_matrix.h>

TEST(CommonMatrix, IntMatrixTest) {
    using namespace std;
    string fileName = "common-matrix/int-matrix.txt";
    namespace vt = cpp_commons::common_matrix;
    auto intMatrix = vt::importFromFile<int>(fileName);
    ASSERT_NO_THROW(vt::print(intMatrix));
    ASSERT_EQ(intMatrix.size(), 15);
    ASSERT_EQ(intMatrix.at(0).size(), 20);
    cout << endl;
}