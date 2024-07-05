#include <math.h>
#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *reverse(ListNode *head){
        ListNode *before = nullptr;
        ListNode *cur = head;
        ListNode *after = head->next;

        while(after != nullptr){
            after = cur->next;
            cur->next = before;
            before = cur;
            cur = after;
        }
        return before;


    }
    int pairSum(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head->val;
        if(head->next->next == nullptr){
            int sum = head->val + head->next->val;
            return sum;
        }
        ListNode *mid = head;
        ListNode *temp = head;
        while(temp != nullptr){
            mid = mid->next;
            temp = temp->next->next;
        }
        temp = head;
        int sum = 0;
        int maxSum = -1;
        mid = reverse(mid);
        while(mid != nullptr){
            sum = temp->val + mid->val;
            maxSum = max(sum,maxSum);
            temp = temp->next;
            mid = mid->next;
        }
        return maxSum;
    }
};