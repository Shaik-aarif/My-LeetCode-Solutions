/*
Given the root of a Binary Search Tree (BST), return the minimum absolute difference between the values of any two different nodes in the tree.
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
private:
     void preorder(TreeNode* root , vector<int>&ans){
        if(root == NULL){
            return ;
        }
        ans.push_back(root->val);
        preorder(root->left , ans);
        preorder(root->right, ans);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        vector<int>ans;
        preorder(root , ans);
        
        int res = INT_MAX;
        sort(ans.begin() , ans.end());

        for(int i = 1 ; i< ans.size() ; i++){
            int dif = abs(ans[i]-ans[i-1]);
            res = min(res , dif);
        }
        return res;
    }
};