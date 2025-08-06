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
    bool isPalindrome(ListNode* head) {
        vector<int>nums;
        while(head != NULL){
            nums.push_back(head->val);
            head=  head->next;
        }
        int n =nums.size();
        for(int i=0;i<n/2;i++){
            if(nums[i] != nums[n-1-i])
            return false;
        }
        return true;
    }
};



































// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         if(head == nullptr || head->next == nullptr){
//             return true;
//         }
//         int num=0;
//         while(head != NULL){
//             num = num * 10 + head->val;
//             head = head->next;
//         }
//         int temp = num;
//         int rev =0;
//         while(temp > 0){
//             int rem = temp % 10;
//             rev = rev*10+rem;
//             temp = temp/10;
//         }
//         return rev == num ? true : false;
//     }
// };