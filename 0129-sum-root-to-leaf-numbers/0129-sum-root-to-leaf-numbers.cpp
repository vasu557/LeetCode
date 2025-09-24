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
    void getPath(TreeNode* root,vector<vector<int>>&vec,vector<int>&temp){
        if(!root) return ;
        temp.push_back(root->val);
        if(root != nullptr && !root->left && !root->right){
            vec.push_back(temp);
        }
        getPath(root->left,vec,temp);
        getPath(root->right,vec,temp);
        temp.pop_back();

    }
public:
    int sumNumbers(TreeNode* root) {
        vector<vector<int>>vec;
        vector<int>temp;
        vector<int>temp2;
        int sum=0;
        if(root == nullptr) return 0;
        getPath(root,vec,temp);
        for(auto &ans : vec){
            int val =0;
            for(int x : ans){
                val = val * 10 +x;
            }
            temp2.push_back(val);
        }
    for(auto it : temp2){
        sum+=it;
    }
    return sum;
    }
};