class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *current=head,*previous=NULL,*future=NULL;
        while(current)
        {
            future=current->next;
            current->next=previous;
            previous=current;
            current=future;
        }
        head=previous;
        return head;

    }
};
