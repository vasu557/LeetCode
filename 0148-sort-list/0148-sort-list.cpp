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
    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next==nullptr) return head;
        vector<int>vec;
        ListNode* temp = head;
        while(temp){
            vec.push_back(temp->val);
            temp = temp->next;
        }
        sort(vec.begin(),vec.end());
        ListNode* node = new ListNode(vec[0]);
        temp = node;
        for(int i=1;i<vec.size();i++){
            ListNode* cur = new ListNode(vec[i]);
            temp->next = cur;
            temp =cur;
        }
        return node;
    }
};