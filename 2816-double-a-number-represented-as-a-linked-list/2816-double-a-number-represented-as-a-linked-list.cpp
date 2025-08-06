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
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp = head;
        stack<int>st;
        while(temp != NULL){
            st.push(temp->val);
            temp = temp->next;
        }
        ListNode* after = NULL;
        int carry=0;
        while(!st.empty()){
            int sum = carry;
            sum+=(st.top() * 2 );
            st.pop();
            ListNode* newNode = new ListNode(sum%10);
            newNode->next = after;
            after = newNode;
            carry = sum/10;
        }
        if(carry){
            ListNode* newNode = new ListNode(carry);
            newNode->next = after;
            after = newNode;
        }
    return after;
    }
};