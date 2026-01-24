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
    ListNode* partition(ListNode* head, int x) {
        if(head == nullptr ) return head;
        ListNode* temp = head;
        vector<int>v1,v2;
        while(temp){
            if(temp->val < x){
                v1.push_back(temp->val);
            }
            else{
                v2.push_back(temp->val);
            }
            temp = temp->next;
        }
        for(int i=0;i<v2.size();i++){
            v1.push_back(v2[i]);
        }
        ListNode* node = new ListNode(v1[0]);
        ListNode* cur = node;
        for(int i=1;i<v1.size();i++){
            ListNode* temp2 = new ListNode(v1[i]);
            cur->next = temp2;
            cur = temp2;
        }
        return node;
    }
};