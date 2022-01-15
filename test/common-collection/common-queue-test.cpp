#include <gtest/gtest.h>
#include <string>
#include <common-queue.h>

TEST(CommonQueue, IntStackTest) {
    using namespace std;
    string fileName = "common-collection/common-queue/int-queue.txt";
    namespace vt = cpp_commons::common_collection::common_queue;
    auto queueInt = vt::importFromFile<int>(fileName);
    ASSERT_NO_THROW(vt::print(queueInt));
    ASSERT_EQ(queueInt.size(), 12);
    cout << endl;
}

TEST(CommonQueue, StringStackTest) {
    using namespace std;
    string fileName = "common-collection/common-queue/string-queue.txt";
    namespace vt = cpp_commons::common_collection::common_queue;
    auto queueString = vt::importFromFile<string>(fileName);
    ASSERT_NO_THROW(vt::print(queueString));
    ASSERT_EQ(queueString.size(), 12);
    cout << endl;
}
