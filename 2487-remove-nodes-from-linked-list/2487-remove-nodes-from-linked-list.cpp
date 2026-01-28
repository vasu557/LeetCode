/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        if(head == nullptr) return head;
        vector<int>vec;
        vector<int>ans;
        ListNode* temp = head;
        while(temp){
            vec.push_back(temp->val);
            temp = temp->next;
        }
        stack<int>st;
        int n=vec.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && vec[i] >= st.top()){
                st.pop();
            }
            int temp = vec[i];
            if(!st.empty()) 
              vec[i] = -1;
            st.push(temp);
        }
        for(int i=0;i<n;i++){
            if(vec[i]!= -1){
               ans.push_back(vec[i]); 
            }
        }
        ListNode* node = new ListNode(ans[0]);
        temp = node;
        for(int i=1;i<ans.size();i++){
            ListNode* cur = new ListNode(ans[i]);
            temp->next = cur;
            temp = cur;
        }

        return node;  
    }
};