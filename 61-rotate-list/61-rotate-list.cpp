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
        ListNode*temp,*prev=NULL;
        int cnt=0;
        if(head==NULL ||head->next==NULL || k==0)
            return head;
        temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(k%cnt==0)
            return head;
        k=k%cnt;
        temp=head;
        cnt-=k;
        int count=0;
        while(temp!=NULL){
            count++;   
         if(count==cnt+1){
            prev=temp;
        }
        if(temp->next==NULL){
            temp->next=head;
            break;
            }
            temp=temp->next;
        }
        count=0;
        temp=head;
         while(temp!=NULL){
            count++;   
         if(count==cnt){
            temp->next=NULL;
             break;
        }
            temp=temp->next;
        }
        head=prev;
        return head;
    
    }
};