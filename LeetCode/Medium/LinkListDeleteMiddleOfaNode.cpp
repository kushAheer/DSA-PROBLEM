struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == nullptr || head == nullptr)return nullptr;
        ListNode *prev = head;
        int len = 0 ;
        while(prev != nullptr){
            len++;
            prev = prev->next;
        }
        prev = head;
        int mid = len/2;
        for(int i = 0 ; i < mid -1 ; i++){
            prev = prev->next;
        }
        if(prev->next->next != nullptr){
            prev->next = prev->next->next;
        }else{
            prev->next = nullptr;
        }
        return head;
    }
};