# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        fast = slow = head
        
        for _ in range(n):
            fast = fast.next
            
        if fast:
            while fast.next:
                fast = fast.next
                slow = slow.next
        else:
            return head.next
        
        slow.next = slow.next.next
            
        return head