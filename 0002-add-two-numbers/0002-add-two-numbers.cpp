class Solution {
public:
    ListNode* addTwoNumbers(ListNode* &linkedList1,
                            ListNode* &linkedList2) {

        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        int carry = 0;

        while (linkedList1 != nullptr ||
               linkedList2 != nullptr || carry) {

            int sum = carry;

            if (linkedList1 != nullptr) {
                sum += linkedList1->val;
                linkedList1 = linkedList1->next;
            }

            if (linkedList2 != nullptr) {
                sum += linkedList2->val;
                linkedList2 = linkedList2->next;
            }

            carry = sum / 10;

            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        }

        return dummy->next;
    }
};