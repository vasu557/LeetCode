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
void getPath(TreeNode* root,vector<vector<int>>&vec,vector<int>&temp){
    if(root == nullptr) return;
    temp.push_back(root->val);
    if(root != nullptr && !root->left && !root->right)
    vec.push_back(temp);
    getPath(root->left,vec,temp);
    getPath(root->right,vec,temp);
    temp.pop_back();
}
    int sumRootToLeaf(TreeNode* root) {
        if(!root) return 0;
        vector<vector<int>>vec;
        vector<int>temp;
        getPath(root,vec,temp);
        int sum =0;
        for(auto &ans : vec){
            int n=ans.size();
            int po=1;
            int cur =0;
            for(int i=n-1;i>=0;i--){
                if(ans[i]==1)
                cur = cur+po;
                po = po*2;
            }   
            sum +=cur;
        }
        return sum;
    }
};