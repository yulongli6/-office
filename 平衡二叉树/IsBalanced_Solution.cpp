class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        if(pRoot == NULL)
            return true;
        return abs(TreeDepth(pRoot->left) - TreeDepth(pRoot->right)) <= 1 &&
            IsBalanced_Solution(pRoot->left) &&
            IsBalanced_Solution(pRoot->right);

    }

    int TreeDepth(TreeNode* pRoot)
    {
        if(pRoot == NULL)return 0;

        int leftDepth = TreeDepth(pRoot->left);
        int rightDepth = TreeDepth(pRoot->right);

        return max(leftDepth, rightDepth) + 1;

    }

};


class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        return getDepth(pRoot) != -1;

    }
private:
    int getDepth(TreeNode* pRoot) 
    {
        if (pRoot == NULL) return 0;
        int left = getDepth(pRoot->left);
        if (left == -1) return -1;
        int right = getDepth(pRoot->right);
        if (right == -1) return -1;
        return abs(left - right) > 1 ? -1 : 1 + max(left, right);

    }

};
