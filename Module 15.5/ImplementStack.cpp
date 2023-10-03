class Stack
{
    Node* head = NULL;
    int sz = 0;

public:
    Stack()
    {
        //Write your code here 
    }

    int getSize()
    {
        return sz;
    }

    bool isEmpty()
    {
       return sz == 0; 
    }

    void push(int data)
    {
        sz++;
        Node* newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void pop()
    {
        
        if(head == NULL) return;
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
    }

    int getTop()
    {
        if(head == NULL) return -1;
        return head->data;
    }
};