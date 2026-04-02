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

    ListNode* reverse(ListNode* head){
        if(!head || !head->next) return head;

        ListNode* prev = NULL, *curr = head;

        while(curr){
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        return prev;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy= new ListNode(0);
        ListNode* tail = dummy;
        int carry = 0;
        while(l1 && l2){
            int sum = l1->val+l2->val+carry;
            ListNode* temp = new ListNode(sum%10);
            carry = sum/10;
            tail->next = temp;
            tail = tail->next;
            l1 = l1->next;
            l2=l2->next;
        }

        while(l1){
            int sum = l1->val+carry;
            ListNode* temp = new ListNode(sum%10);
            carry = sum/10;
            tail->next = temp;
            tail = tail->next;
            l1 = l1->next;
        }
        while(l2){
            int sum = l2->val+carry;
            ListNode* temp = new ListNode(sum%10);
            carry = sum/10;
            tail->next = temp;
            tail = tail->next;
            l2=l2->next;
        }
        while(carry){
            ListNode* temp = new ListNode(carry%10);
            carry = carry/10;
            tail->next = temp;
            tail = tail->next;
        }

        return dummy->next;
    }
};
