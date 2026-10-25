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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(head==NULL|| head->next==NULL) return true;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* newhead=reverseList(slow->next);
        ListNode* first=head;
        ListNode* sec=newhead;
        while(sec!=NULL){
            if(first->val!=sec->val) return false;
            first=first->next;
            sec=sec->next;
        }
        return true;
        
    }
};