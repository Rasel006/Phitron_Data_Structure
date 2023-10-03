class MyLinkedList {
public:
    class Node{
        public:
            int val;
            Node* next;
            Node(int val){
                this->val = val;
                this->next = NULL;
            }
    };

    Node* head = NULL;
    Node* tail = NULL;
    MyLinkedList(){
        
    }

    int get(int index){
        if(index < 0 || index >= getSize()){
            return -1;
        }
        Node* temp = head;
        for(int i = 0; i < index; i++){
            temp = temp->next;
        }
        return temp->val;
    }

    void addAtHead(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void addAtTail(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void addAtIndex(int index, int val){
        if(index <= 0){
            addAtHead(val);
            return;
        }

        int size = getSize();
        if(index > size){
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i = 0; i < index - 1; i++){
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        if(index == size){
            addAtTail(val);
        }
    }

    void deleteAtIndex(int index){
        if(index < 0 || index >= getSize()){
            return;
        }

        if(index == 0){
            Node* deleteNode = head;
            head = head->next;
            delete deleteNode;
            if(head == NULL){
                tail = NULL;
            }
            return;
        }

        Node* temp = head;
        for(int i = 0; i < index - 1; i++){
            temp = temp->next;
        }

        Node* deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
        if(temp->next == NULL){
            tail = temp;
        }
    }

    int getSize(){
        int size = 0;
        Node* temp = head;
        while(temp != NULL){
            size++;
            temp = temp->next;
        }
        return size;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */