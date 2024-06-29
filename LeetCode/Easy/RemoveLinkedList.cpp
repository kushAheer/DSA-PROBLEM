
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) return head;
        if(head->val == val && head->next == nullptr){
            return nullptr;
        } 
            
        ListNode *dummyData = new ListNode(0,head);
        ListNode *prev = dummyData;
        ListNode *cur = head;

        while(cur->next != nullptr && cur != nullptr){
            if(cur->val == val){
                prev->next = cur->next;
            }else{
                prev = prev->next;
            }
            cur = cur->next;
        }
        if(cur->val == val){
            prev->next = nullptr;
        }
        return dummyData->next;

        


    }
};