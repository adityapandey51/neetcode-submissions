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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head || (!head->next && head->val == val)){
            return NULL;
        }

        if(!head->next && head->val != val) return head;

        while(head->val==val && head->next){
            ListNode* temp=head;
            head = head->next;
            delete temp;
        } 

        if(!head || (!head->next && head->val == val)){
            delete head;
            return NULL;
        }

        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr){
            if(curr->val == val){
                prev->next=curr->next;
                ListNode* temp=curr;
                curr= curr->next;
                delete temp;
            }else{
                prev=curr;
                curr=curr->next;
            }
        }
        return head;

        

        
    }
};