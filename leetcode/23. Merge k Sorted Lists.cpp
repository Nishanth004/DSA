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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(!lists.size())
            return NULL;
        priority_queue<pair<int, ListNode*>, vector<pair<int, ListNode*>>, greater<pair<int, ListNode*>>>pq;
        for(auto list:lists)
        {
            if(list)
                pq.push({list->val, list});
        }
        ListNode* dummy=new ListNode(0);
        ListNode* start=dummy;
        while(!pq.empty())
        {
            dummy->next=pq.top().second;
            ListNode * temp=pq.top().second;
            pq.pop();
            dummy=dummy->next;
            if(temp->next)
                pq.push({temp->next->val, temp->next});
        }
        return start->next;
    }
};
