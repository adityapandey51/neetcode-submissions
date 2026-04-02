/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
    TreeNode* buildOne(vector<int> &preorder, vector<int> &inorder, int instart, int inend, int index, unordered_map<int,int> &posMap){
        if(instart > inend) return NULL;

        TreeNode* root = new TreeNode(preorder[index]);
        int pos = posMap[preorder[index]];
        root->left = buildOne(preorder,inorder, instart, pos-1, index+1, posMap);
        root->right = buildOne(preorder,inorder, pos+1,inend, index+(pos-instart)+1,posMap);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        unordered_map<int,int> posMap;
        for(int i = 0 ;i < inorder.size();i++){
            posMap[inorder[i]] = i;
        }
        int instart = 0;
        int inend = inorder.size()-1;
        int index = 0;
        TreeNode* tree = buildOne(preorder, inorder, instart, inend, index, posMap);
        return tree;
    }
};
