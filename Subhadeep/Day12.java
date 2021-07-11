class Solution
{
    //Function to remove duplicates from unsorted linked list.
    public Node removeDuplicates(Node head) 
    {
        Set<Integer> s=new HashSet<>();
        Node temp=head.next;
        Node prev=head;
        s.add(prev.data);
        while(temp!=null){
            if(s.contains(temp.data)){
                prev.next=temp.next;
                temp=prev.next;
                
            }else{
                s.add(temp.data);
                temp=temp.next;
                prev=prev.next;
            }
            
            
        }
        return head;
         // Your code here
    }
}