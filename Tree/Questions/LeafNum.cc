#include "TreeNode.h"
#include <stack>
using namespace std;

int leafNum(TreeNode* root)
{
    if(root == NULL)
      return 0;
    stack<TreeNode*> s;
    TreeNode* curr = root;
    int count = 0;

    while(curr!=NULL || !s.empty())
    {
        while(curr!=NULL)
        {
            if(curr->right == NULL && curr->left == NULL)
            {
                count++;
            }
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        curr = curr->right;
    }

    return count;
}

int main()
{
    TreeNode* root = makeTree(a,0,sizeof(a)/sizeof(int));
    printf("%d\n",leafNum(root));
    return 0;
}
