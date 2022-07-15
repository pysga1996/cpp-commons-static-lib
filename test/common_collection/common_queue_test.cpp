#include <gtest/gtest.h>
#include <string>
#include <common_queue.h>

TEST(CommonQueue, IntQueueTest) {
    using namespace std;
    string fileName = "common-collection/common-queue/int-queue.txt";
    namespace vt = cpp_commons::common_collection::common_queue;
    auto intQueue = vt::importFromFile<int>(fileName);
    ASSERT_NO_THROW(vt::print(intQueue));
    ASSERT_EQ(intQueue.size(), 10);
    cout << endl;
}