/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    void markparents(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&parent,TreeNode* target){
        queue<TreeNode*>queue;
        queue.push(root);
        while(!queue.empty()){
            TreeNode* current = queue.front();
            queue.pop();
            if(current->left){
                parent[current->left] = current;
                queue.push(current->left);
            }
            if(current->right){
                parent[current->right] = current;
                queue.push(current->right);
            }
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>parent;
        markparents(root,parent,target);
        unordered_map<TreeNode*,bool>visited;
        queue<TreeNode*>queue;
        queue.push(target);
        visited[target]=true;
        int cur_level=0;
        while(!queue.empty()){
            int size =queue.size();
            if(cur_level++ == k) break; // if(cur_level == k) break; cur_level++;
            for(int i=0;i<size;i++){
                TreeNode* cur = queue.front();
                queue.pop();


                 if(cur->left && !visited[cur->left]){
                queue.push(cur->left);
                visited[cur->left] = true;
            }
            if(cur->right && !visited[cur->right]){
                queue.push(cur->right);
                visited[cur->right]=true;
            }
            if(parent[cur] && !visited[parent[cur]]){
                queue.push(parent[cur]);
                visited[parent[cur]]=true;
            }

        }
        }
        vector<int>ans;
        while(!queue.empty()){
            TreeNode* temp = queue.front();queue.pop();
            ans.push_back(temp->val);
        }
    return ans;
    }
};