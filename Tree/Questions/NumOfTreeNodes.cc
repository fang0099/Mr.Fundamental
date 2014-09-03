/**
 * Question 1:
 *  Count the number of nodes in a binary tree.
 */
int numOfNodes(TreeNode *root)
{
    if(root == NULL)
      return;
    return numOfNodes(root->left) + numOfNodes(root->right) + 1;
}
