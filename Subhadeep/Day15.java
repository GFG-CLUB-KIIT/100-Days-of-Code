class GfG
{
    public int length(Node head){
        Node temp=head;
        int i=0;
        while(temp!=null){
            i++;
            temp=temp.next;
        }
        return i;
    }
    //Function to find the data of nth node from the end of a linked list.
    int getNthFromLast(Node head, int n)
    {
        Node slow=head;
        Node fast=head;
        int len=length(head);
        if(n>len){
            return -1;
        }
        int i=0;
        while(i<n && fast!=null){
            fast=fast.next;
            i++;
        }
        while(slow!=null && fast!=null){
            slow=slow.next;
            fast=fast.next;
        }
        return slow.data;
    	// Your code here	
    }
}