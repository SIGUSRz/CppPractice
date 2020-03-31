#include "Add_Two_Numbers.hpp"

ListNode *Add_Two_Numbers::addTwoNumbers(ListNode *l1, ListNode *l2) {
    int result = 0, carry = 0;
    ListNode *root = nullptr;
    ListNode *ptr = root;
    while (l1 || l2) {
        result = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        carry = result > 9;
        result %= 10;
        if (ptr) {
            ptr->next = new ListNode(result);
            ptr = ptr->next;
        } else {
            root = new ListNode(result);
            ptr = root;
        }
        l1 = l1 ? l1->next : nullptr;
        l2 = l2 ? l2->next : nullptr;
    }
    if (carry) {
        ptr->next = new ListNode(carry);
    }
    return root;
}