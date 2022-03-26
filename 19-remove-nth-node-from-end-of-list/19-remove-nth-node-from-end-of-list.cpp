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
        ListNode*temp=NULL,*prev=NULL;
        temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(cnt==1)
            return NULL;
        cnt=cnt-n;
        
        int target=0;
        temp=head,prev=temp;
         if(target==cnt){
                
                head=head->next;
               
            }
        while(target!=cnt){
            target++;
            prev=temp;
            temp=temp->next;
            
            if(target==cnt){
                
                prev->next=temp->next;
                break;
            }
           
        }
        return head;
    }
};