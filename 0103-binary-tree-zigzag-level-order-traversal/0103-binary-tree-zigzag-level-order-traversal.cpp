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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == nullptr) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>ins;
            int n=q.size();
           for(int i=0;i<n;i++){
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left != nullptr) q.push(temp->left);
            if(temp->right != nullptr) q.push(temp->right);
            ins.push_back(temp->val);
           }
           ans.push_back(ins);
        }
        for(int i=0;i<ans.size();i++){
            if(i%2 == 1){
                reverse(ans[i].begin(),ans[i].end());
            }
        }
    return ans;
    }
};