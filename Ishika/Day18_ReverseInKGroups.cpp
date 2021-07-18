/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addFirst(ListNode* head, ListNode* node){
        if(head == NULL){
            head = node;
            head->next = NULL;
            return head;
        }
        node->next = head;
        head = node;
        return head;
    }
    
    int Size(ListNode* head){
        int size= 0;
        while(head){
            size++;
            head = head->next;
        }
        return size;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int size = Size(head);
        ListNode* prevhead = NULL;
        ListNode* prevtail = NULL;
        ListNode* currhead = NULL;
        ListNode* currtail = NULL;
        ListNode* ptr = head;
        int count =0;
        while(ptr!=NULL){
            cout << size<<endl;
            if(size >= k){
                count = k;
                while(count && ptr!=NULL){
                    ListNode* temp = ptr;
                    ptr = ptr->next;
                    temp->next = NULL;
                    currhead = addFirst(currhead, temp);
                    count--;
                }
                if(prevhead==NULL){
                    prevhead = currhead;
                    currhead = NULL;
                }
                else{
                    if(prevtail == NULL) prevtail = prevhead;
                    while(prevtail->next != NULL){
                        prevtail= prevtail->next;
                    }
                    prevtail->next = currhead;
                    currhead = NULL;
                }
                size-=k;
            }
            else{
                if(prevtail == NULL) prevtail = prevhead;
                    while(prevtail->next != NULL){
                        prevtail= prevtail->next;
                    }
                prevtail->next = ptr;
                break;
            }
        }
        return prevhead;
    }
};