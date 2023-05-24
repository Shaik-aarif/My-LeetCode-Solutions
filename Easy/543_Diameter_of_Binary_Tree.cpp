/*
543. Diameter of Binary Tree
Easy
11.4K
708
Companies
Given the root of a binary tree, return the length of the diameter of the tree.

The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

The length of a path between two nodes is represented by the number of edges between them.
*/

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
public:
    int diameterOfBinaryTree(TreeNode* root) {
    int ans = 0 ;
    dbt(root , ans);
    return ans;
    }
private:
    int dbt(TreeNode* root , int &ans){

        if(!root)return 0;

        int l = dbt(root->left , ans);
        int r = dbt(root->right ,ans);

        ans = max(ans , (l+r));
        return 1+max(l,r);

    }


};