#include "TreeNode.h"
#include <stack>
using namespace std;

void postorder_traversal(TreeNode* root)
{
    if(root!=NULL)
    {
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        printf("%d ",root->val);
    }
}

void postorder_traversal_iter(TreeNode* root)
{
    if(NULL == root)
      return;
    stack<TreeNode*> s;
    TreeNode* curr = root;
    TreeNode* previsitted = NULL;

    while(curr!=NULL || !s.empty())
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        if(curr->right == NULL || curr->right == previsitted)
        {
            printf("%d ",curr->val);
            s.pop();
            previsitted = curr;
            curr = NULL;
        }
        else
        {
            curr = curr->right;
        }
    }
}

int main()
{
    TreeNode *root = makeTree(a,0,sizeof(a)/sizeof(int));
    postorder_traversal(root);
    printf("\n");
    postorder_traversal_iter(root);
    printf("\n");

    return 0;
}
