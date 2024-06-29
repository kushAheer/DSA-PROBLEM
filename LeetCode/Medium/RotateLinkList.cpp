
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr)
            return head;
        
        ListNode* tail = head;
        ListNode* prev = head;
        int len = 0;
        while (tail->next != nullptr) {
            tail = tail->next;
            len++;
        }
        len = len + 1;
        if (k % len == 0)
            return head;
        k = k % len;
        int jump = len - k;
        for (int i = 0; i < jump - 1; i++) {
            prev = prev->next;
        }

        ListNode* ans = prev->next;
        prev->next = nullptr;
        tail->next = head;

        return ans;
    }
};