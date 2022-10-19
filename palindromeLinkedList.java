class Solution {
    public boolean isPalindrome(ListNode head) {
        // send a slow pointer to middle, fast pointer to the end. reverse the second half of the list and then compare first and second halves.
        ListNode slow = head;
        ListNode fast = head;
        
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        
        slow = reverse(slow);
        fast = head;
        
        while(slow != null) {
            if (slow.val != fast.val) {
                return false;
            }
            slow = slow.next;
            fast = fast.next;
        }
        return true;
        
        
    }
    public ListNode reverse(ListNode root) {
        ListNode prev = null;
        while (root != null) {
            ListNode next = root.next;
            root.next = prev;
            prev = root;
            root = next;
        }
        return prev;
    }
}
