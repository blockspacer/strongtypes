#include "strong_types.h"

#include "gtest/gtest.h"
#include <string>

TEST(NumericOperations, arithmetics) {
    STRONG_TYPE(meter, int);

    meter a{5};
    meter b{4};
    char c{3};
    long d{100};

    EXPECT_EQ(meter{9}, a + b);
    EXPECT_EQ(meter{15}, a * c);
    EXPECT_EQ(meter{400}, d * b);
}

TEST(Operations, concatenation) {
    STRONG_TYPE(name, std::string);

    name a{"foo"};
    name b{"bar"};

    EXPECT_EQ(name{"foobar"}, a + b);
    EXPECT_EQ(name{"foofoobar"}, 2 * a + b);
}
