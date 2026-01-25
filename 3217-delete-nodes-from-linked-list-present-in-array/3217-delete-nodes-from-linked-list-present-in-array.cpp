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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(head == nullptr) return head;
        unordered_set<int>st(nums.begin(),nums.end());
        while(head && st.count(head->val)){
            head = head->next;
            //delete temp;
        }
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp){
            if(st.count(temp->val)){
                temp = temp->next;
                 if(prev)
                    prev->next = temp;
                else
                    head = temp;

            //delete -no need to delete
            }
            else{
            prev = temp;
            temp = temp->next;
            }
        }
        return head;
    }
};