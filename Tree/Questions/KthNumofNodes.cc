#include "TreeNode.h"

int KthNodesNum(TreeNode* root, int k)
{
    if(root == NULL || k < 1)
      return 0;
    if(k == 1)
      return 1;
    int left = KthNodesNum(root->left,k - 1);
    int right = KthNodesNum(root->right, k - 1);

    return left + right;
}

int main()
{
    TreeNode* root = makeTree(a,0,sizeof(a)/sizeof(int));
    printf("%d\n",KthNodesNum(root,4));

    return 0;
}
