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
        int carry = 0;
        int sum = 0;
        ListNode* ans = new ListNode();
        ListNode* tmp = ans;
        
        while (l1 != nullptr || l2 != nullptr || carry){
            sum = 0;
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            } 
            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            
            ListNode* node = new ListNode(sum % 10);
            tmp->next = node;
            tmp = tmp->next;
            
            if(carry) carry = 0;
            if(sum >= 10)   carry = sum / 10;
        }
        
        return ans->next;
    }
};