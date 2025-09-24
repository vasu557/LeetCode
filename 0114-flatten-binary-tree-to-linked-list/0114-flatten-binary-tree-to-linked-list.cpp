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
    void getPath(TreeNode* root,vector<TreeNode*>&vec){
        if(!root) return;
        vec.push_back(root);
        getPath(root->left,vec);
        getPath(root->right,vec);

    }
public:
    void flatten(TreeNode* root) {
        if(root == nullptr) return;
        vector<TreeNode*>vec;
        getPath(root,vec);
        for(int i=0;i<vec.size()-1;i++){
            vec[i]->left = nullptr;
            vec[i]->right = vec[i+1];
        }
        vec.back()->left = nullptr;
        vec.back()->right = nullptr;
    }
};