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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head ||!head->next) return head;
        ListNode* prev = NULL;
        ListNode* curr= head;

        ListNode* future;
        int x= left-1;
        while(x--){
            prev=curr;
            curr=curr->next;
        }
        if(prev){
            prev->next = NULL;
        }

        ListNode* prev2=NULL;
        int c= right-left+1;
        while(c--){
            future=curr->next;
            curr->next=prev2;
            prev2=curr;
            curr=future;
        }
        if(prev){
            prev->next=prev2;
        }else{
            head = prev2;
        }

        ListNode* temp=prev2;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=curr;
        return head;
    }
};