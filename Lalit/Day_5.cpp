// https://leetcode.com/problems/swapping-nodes-in-a-linked-list/

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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp = head;
        
        int c=0;
        while(temp!=NULL)
        {
            c++;
            if(temp->next)
            {
                temp = temp->next;
            }
            else
            {
                break;
            }
        }
        
        if(c==1)
        {
            return head;
        }
        
        if(c==k)
        {
            int va = head->val;
            head->val = temp->val;
            temp->val = va;
            return head;
        }
        
        temp = head;
        int left = k, right = c-k+1;
        
        ListNode *hold = NULL;
        
        int le=1;
        while(le<left)
        {
            temp = temp->next;
            le++;
        }
        
        hold = temp;
        
        le=1, temp=head;
        while(le<right)
        {
            temp = temp->next;
            le++;
        }
        
        int tt = hold->val;
        hold->val = temp->val;
        temp->val = tt;
        
        return head;
    }
};