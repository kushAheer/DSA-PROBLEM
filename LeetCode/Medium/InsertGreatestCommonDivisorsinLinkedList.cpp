#include<iostream>
using namespace std;
#include<algorithm>
#include<numeric>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;

        ListNode *prev = head;
        ListNode *cur = prev->next;
        while(cur != nullptr){
            int gcdValue = gcd(prev->val,cur->val);
            ListNode *newNode = new ListNode(gcdValue);
            prev->next = newNode;
            newNode->next = cur;
            prev = cur;
            cur = cur->next;
        }
        return head;
    }
};