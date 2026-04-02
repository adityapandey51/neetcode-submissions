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
    ListNode* deleteNodes(ListNode* head, int m, int n) {
        if(!head || !head->next) return head;

        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr){
            int x = m;
            while(x-- && curr){
                prev = curr;
                curr= curr->next;
            }

            int y = n;
            while(y-- && curr){
                prev->next = curr->next;
                ListNode* temp = curr;
                curr = curr->next;
                delete temp;
            }

        }

        return head;
    }
};
