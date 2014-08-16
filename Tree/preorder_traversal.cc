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
    vector<int> preorderTraversal(TreeNode *root) {
        
        vector<int> result;
        if(root == NULL)
            return result;
            
        stack<TreeNode*> s;
        TreeNode *p = root;
        
        while(p!=NULL || !s.empty())
        {
            while(p!=NULL)
            {
                result.push_back(p->val);
                s.push(p);
                p = p->left;
            }
            p = s.top();
            s.pop();
            p = p->right;
        }
        
        return result;
    }
};
