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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p = head;
        vector<ListNode*> nodes;
        int size = 0;
        
        while(p){
            nodes.push_back(p);
            p = p->next;
        }
        
        size = nodes.size();
        if(size > n){
            p = nodes[size - n - 1];
            p->next = p->next->next;
            p = nodes[size - n];
            delete(p);
        }
        else{
            p = head;
            head = head->next;
            delete(p);
        }

        return head;
    }
};