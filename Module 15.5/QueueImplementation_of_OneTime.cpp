#include <bits/stdc++.h> 
class Node
{
    public:
        int val;
        Node* next;

        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};
class Queue {

    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

public:
    Queue() {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        return sz == 0;
    }

    void enqueue(int val) {
        sz++;
        Node* newNode = new Node(val);
        if(tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }

    int dequeue() {
        if(head == NULL) return -1;
        sz--;
        int val = head->val;
        Node* tmp = head;
        head = head->next;
        if(head == NULL)
        {
            tail = NULL;
        }
        delete tmp;
        return val;
        
    }

    int front() {
        if(head == NULL) return -1;
        return head->val;
    }
};