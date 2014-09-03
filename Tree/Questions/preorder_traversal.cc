#include "TreeNode.h"
#include <stack>
using namespace std;

void preorder_traversal(TreeNode* root)
{
    if(root!=NULL)
    {
        printf("%d ",root->val);
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}

void preorder_traversal_iter(TreeNode* root)
{
    if(NULL == root)
      return;
    stack<TreeNode*> s;
    TreeNode* curr = root;

    while(curr!=NULL || !s.empty())
    {
        while(curr!=NULL)
        {
            printf("%d ", curr->val);
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        curr = curr->right;
    }
}

int main()
{
    TreeNode *root = makeTree(a,0,sizeof(a)/sizeof(int));
    preorder_traversal(root);
    printf("\n");
    preorder_traversal_iter(root);
    printf("\n");

    return 0;
}
