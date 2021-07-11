class Solution
{
    static Node reverse(Node head){
        if(head==null || head.next==null){
            return head;
        }
        Node current=reverse(head.next);
        head.next.next=head;
        head.next=null;
        return current;
    }
    public static Node addOne(Node head) 
    { 
        Node reversed_lst=reverse(head);
        Node temp=reversed_lst;
        while(temp!=null){
            if(temp.next==null && temp.data==9){
                temp.data=0;
                Node new_node=new Node(1);
                new_node.next=null;
                temp.next=new_node;
                break;
            }
            if(temp.data==9){
                temp.data=0;
            }
            else{
                temp.data+=1;
                break;
            }
            temp=temp.next;
        }
        return reverse(reversed_lst);
        //code here.
    }
}
