#include "TreeNode.h"

int sumNumbers(TreeNode* root, int val)
{
    if(root == NULL)
      return 0;
    val = val*10 + root->val;
    if(root->right == NULL && root->left == NULL)
    {
        return val;
    }
    return sumNumbers(root->left, val)+sumNumbers(root->right, val);
}

int main()
{
    return 0;
}
