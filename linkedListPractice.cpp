#include <iostream>

using namespace std;

class LinkedListNode{
      public:
        int data; //data stored in the node
        LinkedListNode* next; // pointer to the next item in the list

        LinkedListNode(int d, LinkedListNode* n){ //constructor for the node
            data = d;
            next = n;
        }
};

class LinkedList{
    public:
        LinkedListNode* head; // Head pointer
        LinkedList(){ //Constructor for an empty list
            head = nullptr; //Default empty list
        }
        void AddNode(int d){
            LinkedListNode* newNode = new LinkedListNode(d, head);
            head = newNode;
        }
        void outputList(){
            LinkedListNode* curr = head;
            while (curr != nullptr){
                cout<< curr->data<<endl;
                curr = curr->next;
            }
        }
};

class OrderedLinkedList : public LinkedList {
    void AddNode(int d){
        LinkedListNode* curr = head;
        if (curr == nullptr){
            LinkedListNode* newNode = new LinkedListNode(d, nullptr);
        }
        while(curr != nullptr){
            if (curr->next == nullptr){
                if (curr->data < d){
                    LinkedListNode* newNode = new LinkedListNode(d, nullptr);
                }
                else{
                    LinkedListNode* newNode = new LinkedListNode(d, curr);
                    
                }
            }
            else if (curr->data <= d && curr->next->data > d){
                LinkedListNode* newNode = new LinkedListNode(d, curr->next);
                break;
            }
        }
        
    }
};

int main(){
    LinkedList list;

    list.AddNode(5);
    list.AddNode(10);
    list.AddNode(12);
    
    list.outputList();
}