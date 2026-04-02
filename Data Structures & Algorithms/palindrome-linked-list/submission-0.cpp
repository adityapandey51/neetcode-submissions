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
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL) return true;

        int count = 0;
        ListNode* temp = head;

        while(temp){
            count++;
            temp = temp->next;
        }

        count /= 2;
        ListNode* prev = NULL, *curr = head;
        
        while(count--){
            prev = curr;
            curr = curr->next;
        }

        prev-> next = NULL;
        prev = NULL;

        while(curr){
            ListNode *future = curr->next;
            curr->next = prev;
            prev = curr;
            curr = future;
        }

        ListNode *head1 = head;
        while(head1){
            if(head1->val != prev->val) return false;
            head1 = head1->next;
            prev = prev->next;
        }
        return true;
    }
};