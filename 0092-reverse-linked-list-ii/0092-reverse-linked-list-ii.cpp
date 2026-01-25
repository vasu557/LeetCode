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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == nullptr) return head;
        vector<int>vec;
        ListNode* temp2 = head;
        while(temp2){
            vec.push_back(temp2->val);
            temp2 = temp2->next;
        }
        reverse(vec.begin()+left-1,vec.begin()+right);
         ListNode* node = new ListNode(vec[0]);
         ListNode* temp = node;
         for(int i=1;i<vec.size();i++){
            ListNode* cur = new ListNode(vec[i]);
            temp->next = cur;
            temp = cur;
         }
         return node;

    }
};