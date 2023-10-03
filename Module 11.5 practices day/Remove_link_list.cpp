// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
//             if(head == NULL) return head;

//             ListNode* temp = head;
//             while(temp != NULL && head != NULL){
//                 if(head->val == val){
//                     ListNode* del = head;
//                     head = head->next;
//                     temp = temp->next;
//                     delete del;
//                 }
//                 else if (temp->next != NULL && temp->next->val == val){
//                     ListNode* del = temp->next;
//                     temp->next = temp->next->next;
//                     delete del;
//             }
//                 else{
//                     temp = temp->next;
//                 }
//             }
//             return head;
//     }
// };
class Solution {
public:
    ListNode* removeElements(ListNode*& head, int val) {

        if(head == NULL) return head;
        if(head->val == val)
        {
            while(true)
            {
                if(head->val != val) break;
                head = head->next;
                if(head == NULL) return head;
            }
        }
        ListNode* tmp = head;
        while(tmp!= NULL)
        {
            if(tmp->next == NULL) break;
            if(tmp->next->val == val)
            {
                ListNode* deleteNode = tmp->next;
                tmp->next = tmp->next->next;
                delete deleteNode;
                if(tmp->next == NULL)
                {
                    break;
                }
                if(tmp->next->val == val)
                {
                    continue;
                }
            }
            tmp = tmp->next;
        }

        return head;

    }
};