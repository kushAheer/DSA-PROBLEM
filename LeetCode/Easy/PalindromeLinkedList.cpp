#include<iostream>
#include<vector>
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



    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        if(head == nullptr || head->next == nullptr) return true;
        
        while(head != nullptr){
            arr.push_back(head->val);
            head = head->next;
        }
        bool flag = false;
        for(int left = 0 , right = arr.size() -1;left<=right;left++,right--){
            if(arr[left] == arr[right]){
                flag = true;
            }else{
                return false;
            }
        }
        return flag;
       
        

    }
};