#include "TreeNode.h"

void inorder_traversal(TreeNode* root)
{
    if(root!=NULL)
    {
        inorder_traversal(root->left);
        printf("%d ",root->val);
        inorder_traversal(root->right);
    }
}

void mirrorTree(TreeNode* root)
{
    if(root == NULL)
      return;
    TreeNode* temp;

    mirrorTree(root->left);
    mirrorTree(root->right);

    temp = root->right;
    root->right = root->left;
    root->left = temp;
}

int main()
{
    TreeNode* root = makeTree(a,0,sizeof(a)/sizeof(int));
    mirrorTree(root);
    inorder_traversal(root);    

    return 0;
}
