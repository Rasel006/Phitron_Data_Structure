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
    void Inset_Tail(ListNode* &newHead,ListNode* &newTail,int val){
        ListNode* newNode = new ListNode(val);
        if(newHead == NULL){
            newHead = newNode;
            newTail = newNode;
        }
        else{
            newTail->next = newNode;
            newTail = newNode;
        }
    }
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
    bool isPalindrome(ListNode* head) {
       ListNode* newHead = NULL;
       ListNode* newTail = NULL;
       ListNode* temp = head;
       while(temp != NULL){
           Inset_Tail(newHead,newTail,temp->val);
           temp = temp->next;
       }
        Reverse_Singly(newHead, newHead);
        temp = head;
        ListNode* temp2 = newHead;
        while(temp != NULL){
            if(temp->val != temp2->val){
                return false;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
        
        return true;
       
    }
};