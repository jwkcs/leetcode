# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: TreeNode) -> bool:
        q = []
        q.append(root)
        q.append(root)
        
        while q:
            n1 = q.pop()
            n2 = q.pop()
            if not n1 and not n2:
                continue
            elif not n1 or not n2:
                return False
            elif n1.val != n2.val:
                return False
            q.append(n1.left)
            q.append(n2.right)
            q.append(n1.right)
            q.append(n2.left)
        
        return True