/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void postorderTraversal(TreeNode *root)
{   
	if(root == NULL)
	  return;

	stack<TreeNode*> s;

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
			printf("%d ",curr->val);
			previsited = curr;
			s.pop();
			curr = NULL;
		}
		else
		  curr = curr->right;
	}

}
