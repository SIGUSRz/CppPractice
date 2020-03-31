#include "catch.hpp"
#include "util.hpp"
#include "Add_Two_Numbers.hpp"

TEST_CASE("Add Two Numbers") {
    Add_Two_Numbers solution;
    SECTION("Sample") {
        vector<int> a1{2, 4, 3};
        ListNode *l1 = buildLinkedList(a1);
        vector<int> a2{5, 6, 4};
        ListNode *l2 = buildLinkedList(a2);
        vector<int> ans{7, 0, 8};
        ListNode *answer = buildLinkedList(ans);
        ListNode *result = solution.addTwoNumbers(l1, l2);
        REQUIRE(compareLinkedList(answer, result));
    }
}