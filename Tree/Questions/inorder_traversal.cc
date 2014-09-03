#include "TreeNode.h"
#include <stack>
using namespace std;

void inorder_traversal(TreeNode* root)
{
    if(root!=NULL)
    {
        inorder_traversal(root->left);
        printf("%d ",root->val);
        inorder_traversal(root->right);
    }
}

void inorder_traversal_iter(TreeNode* root)
{
    if(NULL == root)
      return;
    stack<TreeNode*> s;
    TreeNode* curr = root;

    while(curr!=NULL || !s.empty())
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        printf("%d ", curr->val);
        s.pop();
        curr = curr->right;
    }
}

int main()
{
    TreeNode *root = makeTree(a,0,sizeof(a)/sizeof(int));
    inorder_traversal(root);
    printf("\n");
    inorder_traversal_iter(root);
    printf("\n");

    return 0;
}
