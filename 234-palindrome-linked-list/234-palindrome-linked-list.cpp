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
public:
    bool isPalindrome(ListNode* head) {
        int c=0;
        ListNode* curr=head;
        while(curr){
            curr=curr->next;
            c++;
        }
        curr=head;
        int a[c];
        int i=0;
        while(curr){
            a[i++]=curr->val;
            curr=curr->next;
        }
        i=0;
        int j=c-1;
        while(i<=j){
            if(a[i]!=a[j])return false;
            i++;
            j--;
        }
        return true;
        
    }
};