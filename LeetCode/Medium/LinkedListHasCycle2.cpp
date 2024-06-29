struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        if(head == nullptr || head->next == nullptr)return nullptr;        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = head->next;
        while(fast != nullptr && slow != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            
            slow = slow->next;
            if(fast == slow){
                break;
            }
        }        
        if(slow!=fast)return nullptr;
        slow = head;
        if(slow == fast)return slow;
        while(slow!=fast && slow->next !=nullptr){
            slow = slow->next;
            fast = fast->next;
            if(slow == fast){
                return slow;
            }
        }

    
        return nullptr;
    }
};