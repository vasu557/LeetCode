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
    int maxLevelSum(TreeNode* root) {
        map<int,int>mp;
        int maxi = INT_MIN;
        int ans=1;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            int sum=0;
            for(int i=0;i<s;i++){
                TreeNode* cur = q.front();
                q.pop();

                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);

                sum+=cur->val;
            }
        mp[ans]=sum;
        ans++;
        }

        int res=-1;
        int maxi2 =INT_MIN;
        for(auto it : mp){
            if(it.second > maxi2){
                maxi2 = it.second;
                res=it.first;
            }
        }
        return res;

    }
};