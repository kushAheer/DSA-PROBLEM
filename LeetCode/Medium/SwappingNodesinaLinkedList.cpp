
struct ListNode{
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *swapNodes(ListNode *head, int k)
    {
        if (head == nullptr || k <= 0)
            return head;

        ListNode *first = nullptr;
        ListNode *second = nullptr;
        ListNode *current = head;

        int length = 0;

        while (current != nullptr)
        {
            length++;
            if (length == k)
            {
                first = current;
            }
            current = current->next;
        }

        if (k > length)
            return head;

        current = head;
        for (int i = 1; i <= length - k; i++)
        {
            current = current->next;
        }
        second = current;

        if (first && second)
        {
            int temp = first->val;
            first->val = second->val;
            second->val = temp;
        }

        return head;
    }
};