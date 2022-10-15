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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0)return head;
        if(head==NULL)return NULL;
        if(k!=0&&!head->next)return head;
        auto temp=head;
        int n=0;
        while(temp->next){
            n++;
            temp=temp->next;
        }
        n=n+1;
        k=k%n;
        if(k==0)return head;
        n=n-k-1;
        auto node=head;
        while(n--){
            node=node->next;
        }
        auto curr=node->next;
        node->next=NULL;
        temp->next=head;
        return curr;
        
    }
};