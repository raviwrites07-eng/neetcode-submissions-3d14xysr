# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
       slow =head
       fast=head
       # index=0
       while fast and fast.next is not None :
        slow=slow.next
        #index= index+1
        fast=fast.next.next
        if slow==fast :
            return True
        
       return False;     

