
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * prev = head;
        int length = 0 ;
        while(prev != nullptr){
            prev = prev->next;
            length++;
        }
        prev = head;
        int pos = length - n;
        if(pos == 0){
            return head->next;
        }
        for(int i = 0 ; i < pos - 1 ; i++){
            prev = prev->next;    

        }
        ListNode* temp = prev->next;
        prev->next = temp->next;
        
        return head;
        
    }
};