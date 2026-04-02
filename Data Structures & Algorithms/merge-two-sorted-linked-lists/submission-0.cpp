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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;

        ListNode* dummy =  new ListNode(0);
        ListNode* tail = dummy;
        ListNode* head1= list1, *head2 = list2;

        while(head1 && head2){
            if(head1->val <= head2->val){
                tail->next = head1;
                tail = tail->next;
                head1 = head1->next;
                tail->next = NULL;
            }else{
                tail->next = head2;
                tail = tail->next;
                head2 = head2->next;
                tail->next = NULL;
            }
        }
        if(head1){
            tail->next = head1;
        }
        if(head2){
            tail->next = head2;
        }

        return dummy->next;
    }
};
