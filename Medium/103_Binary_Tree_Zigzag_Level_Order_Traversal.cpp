/*
Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root == NULL){
            return ans;
        }
        q.push(root);
        bool LeftToRight = true;
        while(!q.empty()){
            int size = q.size();
            vector<int>level(size);
            for(int i = 0 ; i<size ; i++){
            TreeNode* node = q.front();
            q.pop();
            int index = LeftToRight ? i : (size-i-1);

            level[index] = node->val;
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }

            }
            LeftToRight = !LeftToRight;
            ans.push_back(level);
        }

        return ans;
    }
};