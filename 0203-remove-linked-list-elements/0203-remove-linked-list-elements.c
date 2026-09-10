/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
struct ListNode dummy;
    dummy.next = head;

    for (struct ListNode* curr = &dummy; curr->next != NULL; )
    {
        if (curr->next->val == val) 
        {
            struct ListNode* toDelete = curr->next;
            curr->next = curr->next->next;
            free(toDelete);
        } 
        else 
        {
            curr = curr->next;
        }
    }

    return dummy.next;
}