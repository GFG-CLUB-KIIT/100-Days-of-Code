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
    static ListNode middleNode(ListNode head){
        ListNode slow=head;
        ListNode fast=head;
        while(fast!=null && fast.next.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        return slow;
    }
    public static void fold(ListNode head) {
        ListNode mid=middleNode(head);
        ListNode t=mid.next;
        mid.next=null;
        ListNode new_head=reverse(t);
        ListNode temp=head;
        ListNode temp1=new_head;
        while(temp1!=null){
            ListNode cur=temp.next; 
            ListNode z=temp1.next;
            temp.next=temp1;
            temp1.next=cur;
            temp=cur;
            temp1=z;
        }
        
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
        fold(head);
        printList(head);
    }
}