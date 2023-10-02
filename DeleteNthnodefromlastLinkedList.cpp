class Solution {
public:
 /* int size(ListNode* head)
   {
     ListNode *dummy=NULL;
        int size=0;
        dummy=head;
        while(dummy!=NULL)
        {
           
           dummy= dummy->next;;
            size++;
        }
        return size;
   }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    int difference=size(head)-n;
    
    ListNode *prev=new ListNode();
    prev->next=head;
    if(difference==0){
        return head->next;
    }
    while(difference!=0)
    {
        prev=prev->next;
        difference--;
    }
        prev->next=prev->next->next;
return head;   
    } */

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode *start=new ListNode();
    start->next=head;
    ListNode *fast=start;
    ListNode *slow=start;
    while(n!=0)
    {
        fast=fast->next;
        n--;
    }
    while(fast->next!=NULL)
    {
        fast=fast->next;
        slow=slow->next;

    }
    slow->next=slow->next->next;
    return start->next;
    } 
};
