#include "TreeNode.h"
#include <list>
using namespace std;

bool getPath(TreeNode* root, TreeNode* key, list<TreeNode*>& path)
{
    if(root == NULL || key == NULL)
      return false;
    bool is_found;
    if(root == key)
      return true;
    
    is_found = getPath(root->left,key,path);
    if(is_found)
      return true;
    is_found = getPath(root->right,key,path);
    if(is_found)
      return true;
    path.pop_back();

    return false;
}

int twoNodesDistance(TreeNode* root, TreeNode* node1, TreeNode* node2)
{
    if(root == NULL || node1 == NULL || node2 == NULL)
      return 0;
    list<TreeNode*> path1;
    list<TreeNode*> path2;

    TreeNode* last = NULL;
    if(getPath(root,node1, path1)&&getPath(root,node2,path2))
    {
        list<TreeNode*>::iterator iter1 = path1.begin();
        list<TreeNode*>::iterator iter2 = path2.begin();

        int size = 0;
        while(iter1 == iter2 && iter1!=path1.end() && iter2!=path2.end())
        {
            size++;
            iter1++;
            iter2++;
            last = *iter1;
        }       
        size--;
        if(size < 0)
          return 0;
        else
        {
            return path1.size()+path2.size()-size*2;
        }
    }
    return 0;
}

int main()
{
    return 0;
}
