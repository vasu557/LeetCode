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
    void preorder(TreeNode* root,vector<vector<int>>&vec,vector<int>&temp){
        if(root == nullptr){
            return ;
        }
        
        temp.push_back(root->val);
        if(root->left == nullptr && root->right == nullptr){
            vec.push_back(temp);
        }
        preorder(root->left,vec,temp);
        preorder(root->right,vec,temp);

        temp.pop_back();

    }
    int sumRootToLeaf(TreeNode* root) {
        if(root == nullptr) return 0;
        int sum =0;
        vector<vector<int>>vec;
        vector<int>temp;
        preorder(root,vec,temp);
        for(int i=0;i<vec.size();i++){
            int n=vec[i].size();
            int po=1;
            int cur=0;
            for(int j=n-1;j>=0;j--){
                if(vec[i][j] == 1)
                cur+=po;

                po*=2;
            }
            sum+=cur;
        }
        return sum;
    }
};