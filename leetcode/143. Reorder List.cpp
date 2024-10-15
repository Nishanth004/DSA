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
    ListNode * reverse(ListNode *head)
    {
        ListNode *prev=NULL, *curr=head, *nxt=head->next;
        while(curr)
        {
            curr->next=prev;
            prev=curr;
            curr=nxt;
            if(nxt)
            nxt=nxt->next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        ListNode *slow=head, *fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *second=reverse(slow->next);
        slow->next=NULL;
        ListNode *first=head;
        while(second)
        {
            ListNode *dummy1=first->next, *dummy2=second->next;
            first->next=second;
            second->next=dummy1;
            first=dummy1;
            second=dummy2;
        }
    }
};
