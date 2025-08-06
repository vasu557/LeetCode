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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>st1;
        stack<int>st2;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        while(temp1 != NULL || temp2 != NULL){
            if(temp1) st1.push(temp1->val);
            if(temp2) st2.push(temp2->val);
            if(temp1) temp1 = temp1->next;
            if(temp2) temp2 = temp2->next;
        }
        int carry=0;
        ListNode* after = nullptr;
        ListNode* cur= NULL;
        while(!st1.empty() || !st2.empty()){
            int sum=carry;
            if(!st1.empty()){
                sum+=st1.top();
                st1.pop();
            }
            if(!st2.empty()){
                sum+=st2.top();
                st2.pop();
            }
            ListNode* newNode = new ListNode(sum%10);
            cur = newNode;
            cur->next = after;
            after = cur;
            carry = sum/10;
        }
        if(carry) {
            ListNode* newNode = new ListNode(carry);
            cur = newNode;
            cur->next = after;
            after  = cur;
        }
    return cur;
    }
};