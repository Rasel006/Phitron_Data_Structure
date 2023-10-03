//Problem Link: https://leetcode.com/problems/merge-nodes-in-between-zeros/

class Solution {
public:
    void insertAtTail(ListNode*& head, ListNode*& tail, int val)
    {
        ListNode* newNode = new ListNode(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    ListNode* mergeNodes(ListNode* head) {
        ListNode* nHead = NULL;
        ListNode* nTail = NULL;
        ListNode* tmp = head->next;
        int sum = 0;
        while(tmp ->next != NULL)
        {
            sum = sum + tmp->val;
            tmp = tmp->next;
            if(tmp->val == 0)
            {
                insertAtTail(nHead, nTail, sum);
                sum = 0;
            }
        }
        return nHead;
    }
};