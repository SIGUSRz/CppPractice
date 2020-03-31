#include "catch.hpp"
#include "util.hpp"
#include "Two_Sum.hpp"

TEST_CASE("Two Sum") {
    Two_Sum solution;
    SECTION("Sample") {
        vector<int> numbers{2, 7, 11, 15};
        int target = 9;
        vector<int> ans{0, 1};
        REQUIRE(compareVectors(solution.twoSum(numbers, target), ans));
    }
}