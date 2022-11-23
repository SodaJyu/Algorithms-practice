class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* current = new ListNode();
        ListNode* prev = current;
        prev->next = current;
        while (list1 && list2) {
            if (list1->val > list2->val) {
                current->next = list2;
                list2 = list2->next;
                
            } else {
                current->next = list1;
                list1=list1->next;
            }
            current = current->next;
        }
        if (list2 == nullptr) {
            current->next = list1;
        } else {
            current->next = list2;
        }
        return prev->next;
    }
};