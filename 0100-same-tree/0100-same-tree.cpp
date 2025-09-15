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
    void preorder(TreeNode* p,vector<int>&vec){
        if(p == nullptr){
            vec.push_back(INT_MIN);
            return;
        }
        vec.push_back(p->val);
        preorder(p->left,vec);
        preorder(p->right,vec);
    } 
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>vec1,vec2;
        if(p == nullptr || q == nullptr) return p==q;
        preorder(p,vec1);
        preorder(q,vec2);
        return vec1 == vec2;
    }
};