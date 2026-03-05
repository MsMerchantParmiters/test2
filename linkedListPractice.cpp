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

int main(){
    LinkedList list;

    list.AddNode(5);
    list.AddNode(10);
    list.AddNode(12);
    
    list.outputList();
}