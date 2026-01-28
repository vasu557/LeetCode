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
    vector<int> nextLargerNodes(ListNode* head) {
        if(head==nullptr )
        return {};
        vector<int>vec;
        ListNode* temp = head;
        while(temp){
            vec.push_back(temp->val);
            temp = temp->next;
        }
        int n=vec.size();
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && vec[i]>=st.top()){
                st.pop();
            }
            int temp = vec[i];
            if(st.empty()) vec[i]=0;
            else
            vec[i]=st.top();
            st.push(temp);
        }
        return vec;
    }
};