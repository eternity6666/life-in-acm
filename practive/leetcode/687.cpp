struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

class Solution{
public:
    int longestUnivaluePath(TreeNode* root)
    {
        if(!root) return 0;
        int max;
        dfs(root, max);
        return max;
    }

    int dfs(TreeNode *root, int *max)
    {
        int l = 0, r = 0;
        if(root->left && root->left->val == root->val)
            r = dfs(root->left, max);
        else

    }
};
