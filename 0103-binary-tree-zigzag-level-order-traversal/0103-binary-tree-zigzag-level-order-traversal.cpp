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
        bool lft = true;
        while(!q.empty()){
            int n=q.size();
            vector<int>ins(n);
            for(int i=0;i<n;i++){
                TreeNode* temp = q.front();
                q.pop();
                int index = lft ? i : (n-1-i);
                ins[index] = temp->val;
                if(temp->left != nullptr) q.push(temp->left);
                if(temp->right != nullptr) q.push(temp->right);
            }
            lft = !lft;
            ans.push_back(ins);
        }
        return ans;
    }
};