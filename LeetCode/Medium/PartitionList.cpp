 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *smaller = new ListNode(0,nullptr);
        ListNode *tempSmaller = smaller;
        ListNode *greater = new ListNode(0,nullptr);
        ListNode *tempGreater = greater;

        while(head != nullptr){
            if(head->val < x){
                smaller->next = new ListNode(head->val);
                smaller = smaller->next;
            }else{
                greater->next = new ListNode(head->val);
                greater = greater->next;
            }
            head = head->next;
        }
        smaller->next = tempGreater->next;
        head = tempSmaller;
        return head->next;
        
        
    }
};