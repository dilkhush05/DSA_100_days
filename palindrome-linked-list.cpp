/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    bool CheckPalindrome(vector<int> arr){
        int l = arr.size();
        int s = 0;
        int e = l-1;
        while(s<=e){
            if(arr[s]!=arr[e]){
                return false;
            }
            s++;
            e--;
        }
    return true;
    }
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp -> next;

        }
        return CheckPalindrome(arr);

    }
};