class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        
        while (current) {
            ListNode* temp_next = current->next;
            current->next = prev;
            prev = current;
            current = temp_next;
        }
        
        return prev;
    }
};