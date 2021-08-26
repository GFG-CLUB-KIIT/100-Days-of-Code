/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeElements(ListNode head, int val) {
       if(head==null) return head;
         ListNode temp=head;
        ListNode prev=head;
        while(temp!=null)
        {
            if(temp.val==val){
                if(temp.next==null){
                    prev.next=null;
                    break;
                }
                temp.val=temp.next.val;
                   temp.next=temp.next.next;
                
            }else{
                prev=temp;
                temp=temp.next;
            } 
        }
        if(head.next==null && head.val==val){
            return null;
        }
        return head;
    }
}