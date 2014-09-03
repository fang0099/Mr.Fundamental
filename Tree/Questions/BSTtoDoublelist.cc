#include "TreeNode.h"
#include <stack>
using namespace std;

void PrintList(TreeNode* root)
{
    TreeNode* curr = root;
    while(curr!=NULL)
    {
        printf("%d ",curr->val);
        curr = curr->right;
    }
}


TreeNode* inorder_traversal_conv(TreeNode* root)
{
    if(root == NULL)
      return NULL;
    stack<TreeNode*> s;
    TreeNode* curr = root;
    TreeNode* previsitted = NULL;
    TreeNode* head;

    while(curr!=NULL || !s.empty())
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        if(previsitted !=NULL)
        {
            previsitted->right = curr;
            curr->left = previsitted;
        }
        else
        {
            head = curr;
        }
        previsitted = curr;
        s.pop();
        curr = curr->right;
    }

    return head;
}

int main()
{
    TreeNode* root = makeTree(a,0,sizeof(a)/sizeof(int));
    TreeNode* head = inorder_traversal_conv(root);
    PrintList(head);

    return 0;
}
