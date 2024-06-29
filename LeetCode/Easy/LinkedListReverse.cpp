
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode *before = nullptr;
        ListNode *cur = head;
        ListNode *after = head->next;
        ListNode *tail = head;
        
        
        while(after != nullptr){
            after = cur->next;
            cur->next = before;
            before = cur;
            cur = after;
        }
    
        return before;
        
    }
};