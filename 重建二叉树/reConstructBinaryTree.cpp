class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        size_t size = pre.size();
        if(size <= 0)
            return nullptr;
        int root_val = pre[0];
        int i ;
        int r = 0;
        for(i = 0; i < size; ++i)
        {
            if(vin[i] == root_val)
            {
                r = i;
                break;

            }

        }
        vector<int> left_pre;        
        vector<int> left_vin;

        vector<int> right_pre;
        vector<int> right_vin;

        for(i = 1; i <= r;i++)
            left_pre.push_back(pre[i]);
        for(i = 0;i<r;++i)
            left_vin.push_back(vin[i]);
        for(i = r + 1; i < size; ++i)
            right_pre.push_back(pre[i]);
        for(i = r + 1; i < size; ++i)
            right_vin.push_back(vin[i]);

        TreeNode* root = new TreeNode(root_val);
        root->left = reConstructBinaryTree(left_pre,left_vin);
        root->right =reConstructBinaryTree(right_pre,right_vin);
        return root;

    }

};
