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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return NULL;
        ListNode* temp = head;
        int count=0;
        while(temp){
            count+=1;
            temp = temp->next;
        }
        ListNode* prev = NULL;
        temp =head;
        int k = count/2 + 1;
        count=0;
        while(temp){
            count+=1;
            if(count == k){
                ListNode* temp2 = temp;
                temp = temp->next;
                prev->next = temp2->next;
                temp2->next = nullptr;
                delete temp2;
                break;
            }
            else{
            prev =temp;
            temp = temp->next;
            }
        }
    return head;
    }
};