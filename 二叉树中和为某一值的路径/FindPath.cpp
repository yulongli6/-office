class Solution {
public:
    void findAllPath
        (TreeNode* root,int expectNumber,int currentSum,vector<vector<int> >& allpath,vector<int>& path){

            //记录当前访问的结点
            path.push_back(root->val);
            //记录访问到当前节点 所有结点的和
            currentSum+=root->val;

            //判断是否为叶子结点 true-是
            bool isLeaf=root->left==NULL && root->right==NULL;

            //如果为叶子结点， 判断路径的和是否满足要求，满足，保存该路径
            if(currentSum==expectNumber && isLeaf)
                allpath.push_back(path);

            if(root->left!=NULL)
                findAllPath(root->left,expectNumber,currentSum,allpath,path);
            if(root->right!=NULL)
                findAllPath(root->right,expectNumber,currentSum,allpath,path);

            //如果是叶子结点又不满足要求，退回到父结点，删除当前节点
            path.pop_back();


        }

    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {

        vector<vector<int> > allpath;
        vector<int> path;
        //边界条件
        if(root==NULL)
            return allpath;
        int currentSum=0;
        findAllPath(root,expectNumber,currentSum,allpath,path);
        return allpath;

    }

};
