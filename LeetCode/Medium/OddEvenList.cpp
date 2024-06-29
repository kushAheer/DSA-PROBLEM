struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode *oddIndex = new ListNode(0,nullptr);
        ListNode *evenIndex = new ListNode(0,nullptr);
        ListNode *temp = evenIndex;
        ListNode *ans = oddIndex;
        int count = 1;
        while(head != nullptr){
            if(count%2 != 0){
                oddIndex->next = new ListNode(head->val);
                oddIndex = oddIndex->next;

            }else{
                evenIndex->next = new ListNode(head->val);
                evenIndex = evenIndex->next;
            }
            head = head->next;
            count++;
        }
        oddIndex->next = temp->next;
        return ans->next;

    }
};