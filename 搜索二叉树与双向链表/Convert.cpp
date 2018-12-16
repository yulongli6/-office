class Solution {
public:

    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if(pRootOfTree == NULL)
            return NULL;
        TreeNode* pre = NULL;
        _Convert(pRootOfTree, pre);
        TreeNode* ret = pRootOfTree;
        while(ret->left)
            ret = ret->left;
        return ret;

    }
    void _Convert(TreeNode* pRootOfTree, TreeNode*& pre)
    {
        if(pRootOfTree == NULL)
            return;
        _Convert(pRootOfTree->left, pre); 
        if(pre != NULL)
            pre->right = pRootOfTree;
        pRootOfTree->left = pre;
        pre = pRootOfTree;
        _Convert(pRootOfTree->right, pre);

    }

};
