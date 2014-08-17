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
    vector<int> postorderTraversal(TreeNode *root) {
        
        vector<int> result;
        if(root == NULL)
            return result;
            
        stack<TreeNode*> s;ls
        
        TreeNode *curr = root;
        TreeNode *previsited = NULL;
        
        while(curr!=NULL || !s.empty())
        {
            while(curr!=NULL)
            {
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            
            if(curr->right == NULL || curr->right == previsited)
            {
                result.push_back(curr->val);
                previsited = curr;
                s.pop();
                curr = NULL;
            }
            else
                curr = curr->right;
        }
        
        return result;
    }
};
