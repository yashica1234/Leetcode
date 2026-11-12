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
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp=head;
        int len=1;
        while(temp->next!=NULL){
            temp=temp->next;
            len++;
        }
        k=k%len; //calc and reduce rotations
        if(k==0){
            return head;
        }
         //make it circular
         temp->next=head;
        int steps=len-k;
        ListNode* newlast=head;
        for(int i=1;i<steps;i++){
            newlast=newlast->next;
        }
        ListNode* newhead=newlast->next;
        newlast->next=NULL;

        return newhead;

        
    }
};