class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        prev = ListNode(0)
        prev.next = head
        fast = prev
        slow = prev
        
        for i in range(n):
            fast = fast.next
        
        while fast and fast.next != None:
            slow = slow.next
            fast = fast.next
            
        slow.next = slow.next.next
        
        return prev.next