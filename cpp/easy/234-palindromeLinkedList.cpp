class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* temp = nullptr;
        ListNode* current = slow;
        
        while (current) {
            ListNode* temp_next = current->next;
            current->next = temp;
            temp = current;
            current = temp_next;
        }
        
        while (temp) {
            if (temp->val != head->val) {
                return false;
            } else {
                temp = temp->next;
                head = head->next;
            }
        }
        return true;
        
    }
};