/**
 * Definição para Singly-Linked List.
 */
class ListNode {
    int val;
    ListNode next;

    ListNode(int val) {
        this.val = val;
    }

}

class Solution {
    public ListNode reverseList(ListNode head) {

        ListNode curr = head;
        ListNode ant = null;
        ListNode next = new ListNode(0);

        while (curr != null) {
            next = curr.next;
            curr.next = ant;
            ant = curr;
            curr = next;
        }
        return ant;
    }
}