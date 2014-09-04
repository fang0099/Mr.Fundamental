#ifndef TREENODE_H
#define TREENODE_H
#include <stdio.h>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};

static int a[] = {1,2,3,4,5,8,6,7};
static int b[] = {5,-1,2,3,1,4,5,6,7,-1};

TreeNode* makeTree(int a[], int i,int length)
{
    if(a == NULL || length <=0)
      return NULL;
    TreeNode* root = new TreeNode(a[i]);
    if(2*i+1 < length && a[2*i+1]!=-1)
      root->left = makeTree(a,2*i+1,length);
    if(2*i+2 <length && a[2*i+2]!=-1)
      root->right = makeTree(a,2*i+2,length);

    return root;
}
#endif
