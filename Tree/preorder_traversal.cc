/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//recursively
void preorderTraversal(TreeNode *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

//iteratively
void preorderTraversal(TreeNode *root)
{
    if(root == NULL)
      return;

    stack<TreeNode*> s;
    TreeNode *curr = root;

    while(curr!=NULL || !s.empty())
    {
        while(curr!=NULL)
        {
            printf("%d ",curr->val);
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        curr = curr->right;
    }

}
