#include "TreeNode.h"

bool isSameStruct(TreeNode* root1,TreeNode* root2)
{
    if(root1 == NULL && root2 == NULL)
    {
        return true;
    }
    else if((root1 == NULL && root2 !=NULL) || (root1 !=NULL && root2 == NULL))
    {
        return false;
    }

    return isSameStruct(root1->left, root2->left)&&isSameStruct(root1->right, root2->right);
}

int main()
{
    TreeNode* root1 = makeTree(a,0,sizeof(a)/sizeof(int));
    TreeNode* root2 = makeTree(b,0,sizeof(b)/sizeof(int));
   
    if(isSameStruct(root1,root2))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}
