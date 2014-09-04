#include "TreeNode.h"
#include <stdexcept>

TreeNode* ReBuildTree(int preorder[], int inorder[], int length)
{
    if(preorder == NULL || inorder == NULL || length <=0 )
      return NULL;
    TreeNode* root = new TreeNode(preorder[0]);
    int pos = -1;
    for(int i = 0; i < length; ++i)
    {
        if(inorder[i] == preorder[0])
        {
            pos = i;
            break;
        }
    }
    if(pos == -1)
      throw std::runtime_error("invalid input");
    root->left = ReBuildTree(preorder+1,inorder, pos);
    root->right = ReBuildTree(preorder+1+pos,inorder+pos+1, length - pos - 1);

    return root;
}

int main()
{
    return 0;
}
