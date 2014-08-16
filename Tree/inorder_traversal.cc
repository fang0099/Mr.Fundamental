/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        
        vector<int> result;
        stack<TreeNode*> s;
        TreeNode *T = root;
        if(root == NULL)
            return result;
        
        while(T!=NULL||!s.empty())
        {
            while(T!=NULL)
            {
                s.push(T);
                T = T->left;
            }
            T = s.top();
            s.pop();
            result.push_back(T->val);
            T = T->right;
            
        }
        
        return result;
    }
};
