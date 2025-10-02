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
    void getPath(TreeNode* root,vector<double>&vec){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>cur;
            double sum=0;
            for(int i=0;i<n;i++){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                cur.push_back(temp->val);
                sum += (double) (temp->val);
            }
            vec.push_back(sum/ (double)cur.size());
        }
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>vec;
        if(root == nullptr) return vec;
        getPath(root,vec);
        return vec;
    }
};