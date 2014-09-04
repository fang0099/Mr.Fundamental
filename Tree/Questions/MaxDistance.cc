#include "TreeNode.h"

int max(int a1,int a2)
{
    return (a1 > a2)?a1:a2;
}

int maxDistance(TreeNode* root, int& maxLeft, int& maxRight)
{
    if(root == NULL)
    {
        maxLeft = 0;
        maxRight = 0;
        return 0;
    }
    int maxLL,maxLR,maxRL,maxRR;
    int maxDistLeft, maxDistRight;
    if(root->left != NULL)
    {
        maxDistLeft = maxDistance(root->left, maxLL, maxLR);
        maxLeft = max(maxLL,maxLR) + 1;
    }
    else
    {
        maxDistLeft = 0;
        maxLeft = 0;
    }

    if(root->right != NULL)
    {
        maxDistRight = maxDistance(root->right, maxRL, maxRR);
        maxRight = max(maxRL,maxRR) + 1;
    }
    else
    {
        maxDistRight = 0;
        maxRight = 0;
    }
    return max(max(maxDistLeft, maxDistRight),maxLeft + maxRight);

}

int maxDistance(TreeNode* root)
{
    int maxLeft,maxRight;
    return maxDistance(root,maxLeft,maxRight);
}

int main()
{

    return 0;
}
