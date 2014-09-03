int DepthOfTree(TreeNode* root)
{
    if(NULL == root)
      return 0;
    int depthOfTreeLeft = DepthOfTree(root->left);
    int depthOfTreeRight = DepthOfTree(root->right);
    
    return (depthOfTreeLeft > depthOfTreeRight)?(depthOfTreeLeft+1):(depthOfTreeRight+1);
}
