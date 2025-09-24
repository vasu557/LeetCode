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
    void getPath(TreeNode* root,int x,vector<vector<int>>&vec,int &sum,vector<int>&temp){
        if(!root) return;
        sum+=root->val;
        temp.push_back(root->val);
        if(sum ==x && !root->left && !root->right){
            vec.push_back(temp);
        }
        getPath(root->left,x,vec,sum,temp);
        getPath(root->right,x,vec,sum,temp);
        int z = temp.back();
        sum-=z;
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>vec;
        vector<int>temp;
        if(root == nullptr) return vec;
        int sum=0;
        getPath(root,targetSum,vec,sum,temp);
        return vec;
    }
};