class Solution {
public:

    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        bool ret = false;
        if(pRoot1 && pRoot2)
        {
            if(pRoot1->val == pRoot2->val)
                ret = isEqual(pRoot1, pRoot2);
            if(!ret)
                ret = HasSubtree(pRoot1->left, pRoot2);
            if(!ret)
                ret = HasSubtree(pRoot1->right, pRoot2);

        }
        return ret;

    }

    bool isEqual(TreeNode* root1, TreeNode* root2)
    {
        if(root2 == nullptr)
            return true;
        if(root1 == nullptr)
            return false;
        if(root1->val != root2->val)
            return false;
        return isEqual(root1->left, root2->left)&&isEqual(root1->right, root2->right);

    }

};
