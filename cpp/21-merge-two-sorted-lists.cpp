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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode ans(0), *a = &ans;
        
        while(l1 && l2){
            if(l1->val <= l2->val){
                a->next = new ListNode(l1->val);
                l1 = l1->next;
            }
            else if(l2->val < l1->val){
                a->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            a = a->next;
        }
        
        a->next = l1 ? l1 : l2;
        
        return ans.next;
    }
};