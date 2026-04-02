/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    void arrange(Node* root, vector<int> &ans){
        if(!root) return;

        for(int i = 0; i < root->children.size(); i++){
                arrange(root->children[i], ans);
        }
        ans.push_back(root->val);
    }
public:
    vector<int> postorder(Node* root) {
        vector<int> ans;
        if(!root) return ans;

        arrange(root,ans);
        return ans;

    }
};