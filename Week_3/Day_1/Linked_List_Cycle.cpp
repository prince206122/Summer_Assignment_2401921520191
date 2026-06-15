class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow=head,*fast=head;
        if(!head || !head->next)
        return 0;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
            return 1;
        }
        return 0;

    }
};
