class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        prev = ListNode(0)
        current = prev
        if list1 is None: return list2
        if list2 is None: return list1
        
        while list1 and list2:
            if list1.val <= list2.val:
                current.next = list1
                list1 = list1.next
            else:
                current.next = list2
                list2 = list2.next
            current = current.next
        
        current.next = list1 if list1 is not None else list2
        return prev.next