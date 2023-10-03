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
//     int find_size(ListNode* head){
//         ListNode* temp = head;
//         int count = 0;
//         while(temp != NULL){
//             count++;
//             temp = temp->next;
//         }
//         return count;
//     }
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         if(head == NULL) return head;

//         int size = find_size(head);

//         if(size == 1 || (size - n) == 0){
//             ListNode* del = head;
//             head = head->next;
//             delete del;
//             return head;
//         }

//         ListNode* temp = head;

//         for(int i = 1; i < size - n; i++){
//             temp = temp->next;
//         }

//         ListNode* del = temp->next;
//         temp->next = del->next;
//         delete  del;
        
//         return head;
//     }
// };
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
    ListNode* removeNthFromEnd(ListNode*& head, int n) {
        
        if(head == NULL) return head;
        int x = getSize(head) - n;
        if(x == 0)
        {
            head = head->next;
            return head;
        }
        else
        {
            ListNode* tmp = head;
            for(int i = 1; i <= x - 1; i++)
            {
                tmp = tmp->next;
            }
            ListNode* deleteNode = tmp->next;
            tmp->next = tmp->next->next;
            delete deleteNode;
        } 
        return head;
    }
};