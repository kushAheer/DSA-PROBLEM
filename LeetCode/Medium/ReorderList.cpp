#include<iostream>
#include<vector>

#include<algorithm>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    void reorderList(ListNode* head) {
        
        vector<ListNode*> arr;
        ListNode *temp = head;
        
        while(temp != nullptr){
            arr.push_back(temp);
            temp = temp->next;
        }
        int i = 0;
        int j = arr.size()-1;
        while(i<j){
            head->next = arr[i];
            head = head->next;
            head->next = arr[j];
            head = head->next;
            i++;
            j--;
        }
        if(arr.size() % 2 == 1 && i == j){
            head->next = arr[i];
            head = head->next;
        }
        head->next = nullptr;
        
    }
};