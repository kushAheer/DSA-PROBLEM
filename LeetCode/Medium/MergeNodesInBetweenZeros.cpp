struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *dummyNode = new ListNode(-1,nullptr);
        ListNode *ans = dummyNode;
        bool start = false;
        int sum = 0;
        while(head != nullptr && head->next != nullptr){
            if(head->val != 0){
                start = true;
                while(head->val != 0){
                    sum = sum + head->val;
                    head = head->next;
                }
                dummyNode->next = new ListNode(sum);
                dummyNode = dummyNode->next;
            }else{
                sum = 0;
                head = head->next;    
            }
        }
        return ans->next;
        
    }
};