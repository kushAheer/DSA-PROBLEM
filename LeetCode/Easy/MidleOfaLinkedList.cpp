

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode * middle = head;
        int len = 0 ;
        while(middle != nullptr){
            middle = middle->next;
            len++;
        }   
        int mid = len/2;
        for(int i = 0 ; i < mid ; i++){
            head = head->next;
        }
        return head;
    }
};