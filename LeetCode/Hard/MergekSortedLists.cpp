#include <vector>
#include <iostream>
#include <algorithm>
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> sortedArray;
        for(auto i : lists){
            while(i != nullptr){
                sortedArray.push_back(i->val);
                i = i->next;
            }
        }
        sort(sortedArray.begin(),sortedArray.end());
        ListNode *dummyNode = new ListNode(0,nullptr);
        ListNode *head = dummyNode;
        for(int i = 0 ; i < sortedArray.size();i++){
            dummyNode->next = new ListNode(sortedArray[i]);
            dummyNode = dummyNode->next; 
        }
        return head->next;
    }
};