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
void function(TreeNode* root, vector<vector<int>>&vec){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>temp;
            for(int i=0;i<n;i++){
                TreeNode* cur = q.front();
                q.pop();
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
                temp.push_back(cur->val);
            }
            vec.push_back(temp);
        }
}
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        if(root == nullptr) return ans;
       vector<vector<int>>vec;
       function(root,vec); 
       for(auto &temp : vec){
        int val = INT_MIN;
        for(auto it : temp){
            val = max(val,it);
        }
        ans.push_back(val);
       }
       return  ans;
    }
};