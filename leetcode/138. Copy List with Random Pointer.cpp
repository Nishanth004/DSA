/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
            return head;
        unordered_map<Node*, Node*>map;
        Node* list2=new Node(0);
        Node* list1=head;
        Node* start=list2;
        while(list1)
        {
            Node* temp=new Node(list1->val);
            list2->next=temp;
            list2=temp;
            map[list1]=list2;
            list1=list1->next;
        }
        list1=head;
        list2=start->next;
        while(list1)
        {
            list2->random=map[list1->random];
            list1=list1->next;
            list2=list2->next;
        }
        return start->next;
    }
};
