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
void getPath(TreeNode* root,vector<string>&vec,vector<vector<string>>&mai){
    if(!root) return;
    vec.push_back(to_string(root->val));
    if(root && !root->left && !root->right){
        mai.push_back(vec);
    }
    getPath(root->left,vec,mai);
    getPath(root->right,vec,mai);
    vec.pop_back();
}
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<vector<string>>mai;
        vector<string>vec;
        if(root == nullptr) return vec;
        getPath(root,vec,mai);
        vector<string>ans;
        for(auto &temp :mai){
            string s = "";
            for(int i=0;i<temp.size();i++){
                s += temp[i];
                if(i != temp.size()-1) s += "->";
                
            }
            ans.push_back(s);
        }
        return ans;
    }
};