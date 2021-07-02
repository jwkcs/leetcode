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
    ListNode* swapPairs(ListNode* head) {
        ListNode** pp = &head, *p1, *p2;
        
        while((p1 = *pp) && (p2 = p1->next)){
            p1->next = p2->next;
            p2->next = p1;
            *pp = p2;
            pp = &(p1->next);
        }
        return head;
    }
};