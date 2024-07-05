#include<vector>
#include<algorithm>
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
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)return head;
        vector<int> arr;
        ListNode *dummyNode = new ListNode(0);
        ListNode *ans = dummyNode;
        while(head != nullptr){
            arr.push_back(head->val);
            head = head->next;
        }
        sort(arr.begin(),arr.end());
        for(int i = 0 ; i < arr.size() ; i++){
            dummyNode->next = new ListNode(arr[i]);
            dummyNode = dummyNode->next;
        }
        return ans->next;
    }
};