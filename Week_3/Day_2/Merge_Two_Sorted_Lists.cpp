class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
       ListNode* head=new ListNode(-101);
       ListNode *curr=head;
       while(head1 && head2)
       {
        if(head1->val<=head2->val)
        {
            curr->next=head1;
            head1=head1->next;
            curr=curr->next;
            curr->next=NULL;
        }
        else
        {
            curr->next=head2;
            head2=head2->next;
            curr=curr->next;
            curr->next=NULL;
        }
       }
       if(head1)
       curr->next=head1;
       else
       curr->next=head2;

       curr=head;
       head=head->next;
       delete curr;

       return head;
    }
};
