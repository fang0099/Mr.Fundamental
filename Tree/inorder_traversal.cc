/**
 * Definition for binary tree
 * struct TreeNode {
 *	   int val;
 *	   TreeNode *left;
 *	   TreeNode *right;
 *	   TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void inorderTraversal(TreeNode *root) 
{
	if(root == NULL)
	  return;
	TreeNode *curr = root;
	stack<TreeNode*> s;

	while(curr!=NULL||!s.empty())
	{
		while(curr!=NULL)
		{
			s.push(curr);
			curr = curr->left;
		}
		curr = s.top();
		s.pop();
		printf("%d ",curr->val);
		curr = curr->right;

	}

} 
