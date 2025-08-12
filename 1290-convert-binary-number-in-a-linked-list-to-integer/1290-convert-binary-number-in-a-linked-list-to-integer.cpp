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
    int getDecimalValue(ListNode* head) {
        if(head == NULL) return 0;
        stack<int>st;
        ListNode* temp=head;
        while(temp != nullptr){
            st.push(temp->val);
            temp=temp->next;
        }
        int sum=0;
        int i=0;
        while(!st.empty()){
            if(st.top() == 1){
                sum+=pow(2,i);
            }
            i++;
            st.pop();
        }
        return sum;
    }
};