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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
    ListNode* res=new ListNode(-1);
        ListNode* get=res;
      ListNode* q1=l1;
      ListNode* q2=l2;
      while(q1&&q2){
          if(q1->val>=q2->val){
              ListNode* ans=new ListNode(q2->val);
              res->next=ans;
              q2=q2->next;
              res=res->next;
          }
          else{
              ListNode* ans=new ListNode(q1->val);
                res->next=ans;
              q1=q1->next;
                  res=res->next;
          }  
      }
        while(q1){
            ListNode* ans=new ListNode(q1->val);
              res->next=ans;
             q1=q1->next;
                res=res->next;
        }
        while(q2){
              ListNode* ans=new ListNode(q2->val);
              res->next=ans;
             q2=q2->next;
                res=res->next;
        }
        return get->next;
    }
};