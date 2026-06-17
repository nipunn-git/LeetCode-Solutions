class Solution {
    public ListNode swapPairs(ListNode head) {
        // Base case: if fewer than 2 nodes, return as is
        if (head == null || head.next == null) {
            return head;
        }

        ListNode newHead = head.next;
        head.next = swapPairs(newHead.next);
        newHead.next = head;

        return newHead;
    }
}