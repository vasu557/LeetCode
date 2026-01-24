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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return head;
        unordered_set<int>st;
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp != nullptr){
            if(st.find(temp->val) != st.end()){
                ListNode* del = temp;
                prev->next = temp->next;
                temp = temp->next;
                delete del;
            }
            else{
            st.insert(temp->val);
            prev = temp;
            temp = temp->next;
            }
        }
        return head;
    }
};