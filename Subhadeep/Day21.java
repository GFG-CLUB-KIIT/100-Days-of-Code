import java.util.*;

class Main {
    public static class ListNode {
        int val = 0;
        ListNode next = null;

        ListNode(int val) {
            this.val = val;
        }
    }
    static ListNode reverse(ListNode head){
        if(head==null || head.next==null){
            return head;
        }
        ListNode current=reverse(head.next);
        head.next.next=head;
        head.next=null;
        return current;
    }
    public static void unfold(ListNode head) {
        ListNode slow=head;
        ListNode fast=head.next;
        ListNode t=fast;
        while(fast!=null && fast.next!=null){
            slow.next=fast.next;
            slow=fast.next;
            ListNode temp=slow.next;
            fast.next=slow.next;
            fast=temp;
        }
        
        ListNode new_head=reverse(t);
        ListNode temp=head;
        while(temp.next!=null){
            temp=temp.next;
        }
        temp.next=new_head;
    }

    static void printList(ListNode node) {
        while (node != null) {
            System.out.print(node.val + " ");
            node = node.next;
        }
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        ListNode dummy = new ListNode(-1);
        ListNode prev = dummy;
        while (n-- > 0) {
            prev.next = new ListNode(scn.nextInt());
            prev = prev.next;
        }

        ListNode head = dummy.next;
        unfold(head);
        printList(head);
    }
}