class Solution {
public: 

    ListNode* reverse(ListNode* prev, ListNode* curr, ListNode* temp)
    {

        if(curr==temp)
        {
            return prev;
        }

        ListNode* forward = curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        return reverse(prev, curr, temp);
        
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
    
    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* temp=head;
    for(int i=0;i<k;i++)
    {
        if(temp==NULL)
        {
            return head;
        }
        temp=temp->next;
    }
  

    ListNode* newhead = reverse(prev,curr,temp);

    head->next= reverseKGroup(temp,k);
        
        return newhead;
    }
};
