/**
 * Definição para Singly-Linked List (reutilizada).
 */
class ListNode {
    int val;
    ListNode next;

    ListNode(int x) {
        val = x;
        next = null;
    }
}

public class Solution {
    public boolean hasCycle(ListNode head) {
        // Seu código Slow/Fast Pointers O(N) Time e O(1) Space aqui.
        ListNode fast = head;
        ListNode slow = head;
        if (fast != null && fast.next != null)
            while (fast != null && fast.next != null && fast.next.next != null) {
                if (fast.next != null)
                    fast = fast.next.next;
                slow = slow.next;
                if (slow.equals(fast))
                    return true;
            }
        return false;
    }
}