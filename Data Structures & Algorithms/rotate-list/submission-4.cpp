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
        if(!head ||!head->next ||k==0) return head;
        int count = 0;
        ListNode* curr = head;
        while(curr){
            count++;
            curr=curr->next;
        }
        k = k%count;
        if(k==0) return head;
        count -=k;
        count--;
        curr = head;
        while(count--){
            curr = curr->next;
        }

        ListNode* temp = curr->next, *temp2= curr->next;
        curr->next = NULL;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=head;
        return temp2;
    }
};