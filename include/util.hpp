#ifndef CPPPRACTICE_UTIL_HPP
#define CPPPRACTICE_UTIL_HPP

#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct BinaryTreeNode {
    int val;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
    BinaryTreeNode *parent;

    BinaryTreeNode(int x) : val(x), left(NULL), right(NULL), parent(NULL) {}
};

template<typename T>
static bool compareVectors(vector<T> v1, vector<T> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    int length = static_cast<int>(v1.size());
    for (int i = 0; i < length; i++) {
        auto itr = find(v2.begin(), v2.end(), v1.front());
        if (itr == v2.end()) {
            return false;
        } else {
            v2.erase(itr);
            v1.erase(v1.begin());
        }
    }
    return v2.empty();
}

static ListNode *buildLinkedList(vector<int> &v) {
    auto *root = new ListNode(v[0]);
    ListNode *ptr = root;
    for (int i = 1; i < v.size(); i++) {
        auto *node = new ListNode(v[i]);
        ptr->next = node;
        ptr = node;
    }
    return root;
}

static bool compareLinkedList(ListNode *l1, ListNode *l2) {
    while (l1 != nullptr && l2 != nullptr) {
        if (l1->val != l2->val) {
            return false;
        }
        l1 = l1->next;
        l2 = l2->next;
    }
    return (l1 == nullptr && l2 == nullptr);
}

static string printLinkedList(ListNode *root) {
    if (!root) {
        return "";
    }
    stringstream buffer;
    ListNode *ptr = root;
    buffer << ptr->val;
    ptr = ptr->next;
    while (ptr) {
        buffer << " -> " << ptr->val;
        ptr = ptr->next;
    }
    return buffer.str();
}

static BinaryTreeNode *getNextInOrder(BinaryTreeNode *node) {
    if (node == nullptr) {
        return nullptr;
    }
    BinaryTreeNode *pt = nullptr;
    if (node->right != nullptr) {
        pt = node->right;
        while (pt->left != nullptr) {
            pt = pt->left;
        }
    } else if (node->parent != nullptr) {
        BinaryTreeNode *cpt = node;
        pt = node->parent;
        while (pt != nullptr && cpt == pt->right) {
            cpt = pt;
            pt = pt->parent;
        }
    }
    return pt;
}

#endif //CPPPRACTICE_UTIL_HPP
