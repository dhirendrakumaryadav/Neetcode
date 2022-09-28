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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* node=head;
        if(head==NULL||head->next==NULL)return NULL;
        int j=n;
        int t=0;
        while(node){
            node=node->next;
            t++;
        }
         if(t==n)return head->next;
        node=head;
        n=t-n-1;
        while(n--){
            node=node->next;
        } 
        
        node->next=node->next->next;
        
    
        return head;
    }
};