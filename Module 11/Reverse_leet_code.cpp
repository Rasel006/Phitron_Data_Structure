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
    void Reverse_Singly(ListNode* &head,ListNode* curent){
        // Basecase 
        if(curent->next == NULL){
            head = curent;
            return;
        }
        Reverse_Singly(head, curent->next);
        curent->next->next = curent;
        curent->next = NULL;
        return;
    }
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return head;
       Reverse_Singly(head, head);
       return head; 
    }
};