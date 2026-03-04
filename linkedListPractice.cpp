#include <iostream>

using namespace std;

class LinkedListNode{
      public:
        int data; //data stored in the node
        LinkedListNode* next;

        LinkedListNode(int d, LinkedListNode* n){
            data = d;
            next = n;
        }
};

class LinkedList{
    public:
        LinkedListNode* head;
        LinkedList(){ //Constructor for an empty list
            head = nullptr;
        }
        void AddNode(int d){
            LinkedListNode newNode =  LinkedListNode(d, head);
            head = &newNode;
        }
        void outputList(){
            LinkedListNode* curr = head;
            while (curr != nullptr){
                cout << curr->data << endl;
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