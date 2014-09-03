/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void Z_order_traversal(TreeNode* root)
{
    if(root == NULL)
      return;
    TreeNode* curr = root;
    stack<TreeNode*> s1,s2;
    s1.push(curr);

    while(!s1.empty()||!s2.empty())
    {
        while(!s1.empty())
        {
            curr = s1.top();
            cout<<curr->val<<endl;
            s1.pop();
            if(curr->left!=NULL)
              s2.push(curr->left);
            if(curr->right!=NULL)
              s2.push(curr->right);

        }
        while(!s2.empty())
        {
            curr = s2.top();
            s2.pop();
            cout<<curr->val<<endl;
            if(curr->right!=NULL)
              s1.push(curr->right);
            if(curr->left!=NULL)
              s1.push(curr->left);
        }
    }

}
