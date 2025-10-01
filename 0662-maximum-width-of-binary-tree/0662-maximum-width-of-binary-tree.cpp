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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        queue<pair<TreeNode*,long long>>q;
        int ans=0;
        q.push({root,0});
        while(!q.empty()){
            int n = q.size();
            long long first,last;
            long long mini = q.front().second;
            for(int i=0;i<n;i++){
            long long cur = q.front().second - mini;
            TreeNode* temp = q.front().first;
            q.pop();
            if(i==0) first = cur;
            if(i == n-1) last = cur;
            if(temp->left) q.push({temp->left,(cur*2)+1});
            if(temp->right) q.push({temp->right,2*cur+2});
            }
            ans = max(ans,(int)(last-first+1));
        }
    return ans;
    }
};