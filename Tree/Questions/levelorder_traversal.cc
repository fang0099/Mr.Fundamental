#include "TreeNode.h"
#include <queue>
using namespace std;

void levelorder_traversal(TreeNode* root)
{
    if(root == NULL)
      return;
    queue<TreeNode*> q;
    TreeNode* curr = root;
    q.push(curr);
    while(!q.empty())
    {
        curr = q.front();
        q.pop();
        printf("%d ",curr->val);
        if(curr->left != NULL)
          q.push(curr->left);
        if(curr->right != NULL)
          q.push(curr->right);
    }
}

int main()
{
    TreeNode *root = makeTree(a,0,sizeof(a)/sizeof(int));
    levelorder_traversal(root);

    return 0;
}
