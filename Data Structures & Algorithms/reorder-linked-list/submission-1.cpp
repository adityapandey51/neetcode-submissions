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
    void reorderList(ListNode* head) {
        if(!head ||!head->next || !head->next->next) return;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* second = slow->next;
        ListNode* prev = NULL;
        slow->next = NULL;

        while(second){
            ListNode* temp = second->next;
            second->next = prev;
            prev = second;
            second = temp;
        }

        ListNode* curr = head;

        while(prev){
            ListNode* temp1 = curr->next;
            ListNode* temp2 = prev->next;
            curr->next=prev;
            prev->next= temp1;
            curr = temp1;
            prev = temp2;
        }

        
    }
};
