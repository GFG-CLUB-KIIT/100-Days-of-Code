//Problem - Reverse a stack without using extra space 
void reverse()
    {
        struct node *prev = NULL;
        struct node *curr = NULL;
        struct node *temp = NULL;
        temp = prev = top;
        curr = curr->next;
        prev->next = NULL;
        while (curr) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        top = prev;
    }