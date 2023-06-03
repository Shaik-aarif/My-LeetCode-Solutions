/*
Given the root of a binary tree, calculate the vertical order traversal of the binary tree.

For each node at position (row, col), its left and right children will be at positions (row + 1, col - 1) and (row + 1, col + 1) respectively. The root of the tree is at (0, 0).

The vertical order traversal of a binary tree is a list of top-to-bottom orderings for each column index starting from the leftmost column and ending on the rightmost column. There may be multiple nodes in the same row and same column. In such a case, sort these nodes by their values.

Return the vertical order traversal of the binary tree
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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int , map<int,multiset<int>>> nodes;
        queue<pair<TreeNode* , pair<int,int>>> q;

        q.push({root,{0,0}});

        while(!q.empty()){
            auto ele = q.front();
            q.pop();
            TreeNode* node = ele.first;
            int x = ele.second.first;
            int y = ele.second.second;

            nodes[x][y].insert(node->val);
            if(node->left){
                q.push({node->left , {x-1 , y+1}});
            }
            if(node->right){
                q.push({node->right , {x+1 , y+1}});
            }
        }

        vector<vector<int>>ans;

        for(auto x :nodes){
            vector<int>col;
            for(auto y : x.second){
                col.insert(col.end(), y.second.begin() , y.second.end());
            }
            ans.push_back(col);
        }

        return ans;
    }
};