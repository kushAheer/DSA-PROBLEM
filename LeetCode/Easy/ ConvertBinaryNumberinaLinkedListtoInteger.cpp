
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode *current = head;
        int len = 0;
        while(current != nullptr){
            len++;
            current = current->next;
        }
        current = head;
        int num = 0 ;
        for(int i = 0 ; i < len ; i++){
            num = num * 2 + current->val;
            current = current->next;
        }
        return num;
    }
};