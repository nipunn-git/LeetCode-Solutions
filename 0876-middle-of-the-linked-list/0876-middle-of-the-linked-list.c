/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* temp=head;
    struct ListNode* next;
    int count=0;

    while(temp != NULL)
    {
        temp=temp->next;
        count++;
    }

    int ans=count/2;

    temp=head;
    for(int i=0; i<ans; i++)
    {
        temp=temp->next;
    }
    return temp;
}