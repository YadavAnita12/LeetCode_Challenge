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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> lst;
        if(!root) return lst;

        stack<TreeNode*> stk;
        stk.push(root);

        while(!stk.empty())
        {
            lst.push_back(stk.top()->val);

            TreeNode* tmp=stk.top();
            stk.pop();
            if(tmp->right) stk.push(tmp->right);
            if(tmp->left) stk.push(tmp->left);

        }
        return lst;

        
    }
};