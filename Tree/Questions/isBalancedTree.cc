#include "TreeNode.h"

bool isBalanced(TreeNode* root,int &height)
{
    if(root == NULL)
    {
        height = 0;
        return 0;
    }
    int left,right;
    isBalanced(root->left,left);
    isBalanced(root->right,right);
    
    if(left - right > 1 || left - right <-1)
    {
        height = (left>right)?(left+1):(right+1);
        return false;
    }
    return true;
    
}

int main()
{
    TreeNode* root = makeTree(a,0,sizeof(a)/sizeof(int));
    int height;
    if(isBalanced(root,height) == true)
    {
        printf("is balanced\n");
    }
    else
    {
        printf("is not balanced\n");
    }
    return 0;
}
