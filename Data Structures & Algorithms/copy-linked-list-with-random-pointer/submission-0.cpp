/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       Node* temp=head;
       Node* ans=new Node(0);
       Node* curr=ans;
       while(temp){
           curr->next=new Node(temp->val);
            curr=curr->next;
            temp=temp->next;
       } 
       temp=head;
       curr=ans->next;
       map<Node*,Node*> mp;

       while(temp){
          mp[temp]=curr;
          temp=temp->next;
          curr=curr->next; 
       }

       curr=ans->next;
       temp=head;
        while(curr){
            curr->random=mp[temp->random];
            curr=curr->next;
            temp=temp->next;
        }

       return ans->next;
    }
};