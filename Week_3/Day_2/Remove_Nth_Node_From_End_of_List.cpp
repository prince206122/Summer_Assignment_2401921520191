class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        int count=0;
        while(temp)
        {
            temp=temp->next;
            count++;
        }
        count-=n;
        if(count==0)
        {
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        ListNode *prev=NULL,*curr=head;
        while(count--)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        delete curr;

        return head;
    }
};
