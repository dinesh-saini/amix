#include <array>
#include <gtest/gtest.h>
#include <cstddef>

using namespace std;

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(Array , range_based_iterate ) { // gTest macro
    array<int,5> a;
    int cnt = 0, sum = 0;
    for (auto &e : a) {
        e = cnt++;
    }
    for (auto &e : a) {
        sum += e;
    }

    EXPECT_EQ(cnt , 5) ; // gTest macro
    EXPECT_EQ(sum, 10); // gTest macro
}
