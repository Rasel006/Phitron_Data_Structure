//Problem Link: https://leetcode.com/problems/swapping-nodes-in-a-linked-list/

class Solution {
public:
    int getSize(ListNode* head)
    {
        ListNode* tmp = head;
        int cnt = 0;
        while(tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        if(head == NULL) return head;
        int sz = getSize(head);
        if(sz == 1) return head;

        int f = sz - k;
        ListNode* tmp = head;
        for(int i = 1; i <= k - 1; i++)
        {
            tmp = tmp -> next;
        }
        ListNode* x = tmp;
        tmp = head;
        for(int i = 1; i <= f; i++)
        {
            tmp = tmp -> next;
        }
        ListNode* y = tmp;

        swap(x->val, y->val);

        return head;
    }
};