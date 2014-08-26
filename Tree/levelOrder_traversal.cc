/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void levelorderTraversal(TreeNode* root)
{ 
    if(root == NULL)
      return;
    queue<TreeNode*> q;
    q.push(root);
    TreeNode* curr = NULL;

    while(!q.empty())
    {
        curr = q.front();
        printf("%d ",curr->val);
        q.pop();
        if(curr->left!=NULL)
          q.push(curr->left);
        if(curr->right!=NULL)
          q.push(curr->right);
    }

}

