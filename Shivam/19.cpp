// doubly linked list
#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node* prev;
};
int length(node* head)
{
    if(!head) return 0;
    return 1+length(head->next);
}
void print(node* head)
{
    cout<<"NULL <--> ";
    while(head)
    {
        cout<<head->data<<" <--> ";
        head = head->next;
    }
    cout<<"NULL\n";
}
int main()
{
    char ch;
    node* head = NULL;
    node* tail = NULL;
    node* n1 = new node;
    cout<<"enter node data: ";
    cin>>n1->data;
    n1->prev = NULL;
    n1->next = NULL;
    head = n1;
    tail = n1;
    cout<<"do you want to enter more data: (y/n) ";
    cin>>ch;
    while(ch=='y')
    {
        node* n = new node;
        cout<<"enter node data: ";
        cin>>n->data;
        n->next = NULL;
        tail->next = n;
        n->prev = tail;
        tail = n;
        cout<<"do you want to enter more data: (y/n) ";
        cin>>ch;
    }
    print(head);
    int len = length(head);
    cout<<"do you want to insert any node in between: (y/n) ";
    cin>>ch;
    while(ch=='y')
    {
        int i;
        cout<<"at what position, please specify the index: ";
        cin>>i;
        node* n = new node;
        cout<<"enter node data: ";
        cin>>n->data;
        if(i==0)
        {
            n->prev = NULL;
            head->prev = n;
            n->next = head;
            head = n;
        }
        else if(i==len)
        {
            tail->next = n;
            n->prev = tail;
            n->next = NULL;
            tail = n;
        }
        else
        {
            node* temp = head;
            int check = 1;
            while(check<i)
            {
                temp = temp->next;
                check++;
            }
            node* up = temp->next;
            n->prev = temp;
            temp->next = n;
            up->prev = n;
            n->next = up;
        }
        print(head);
        cout<<"do you want to insert any node in between: (y/n) ";
        cin>>ch;
        len = length(head);
    }
    return 0;
}