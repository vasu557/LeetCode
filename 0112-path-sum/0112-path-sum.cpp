/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool getPath(TreeNode* root,int x,int &sum,vector<int>&arr){
        if(root==nullptr) return false;
        arr.push_back(root->val);
        sum+=root->val;
        if(sum == x && !root->left && !root->right) return true;
        if(getPath(root->left,x,sum,arr) || getPath(root->right,x,sum,arr))
        return true;
        int z  = arr.back();
        arr.pop_back();
        sum=sum-z;
        return false;

    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return false;
        vector<int>arr;
        int sum=0;
        return getPath(root,targetSum,sum,arr);
    }
};