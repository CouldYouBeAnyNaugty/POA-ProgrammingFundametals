#include <iostream>

/*Make a function push() that adds a data a number to an already created linked list*/




/*Linked list data structure*/
class Node{
    public:
    int Data;
    Node *Next;
};

Node *Head_elem;

void push(Node **HeadOfLinkedList, int new_data){
    /*Create some data on the heap*/
    Node* heap_data = new Node();
    /*Store the new_data (a parameter of the function) into the heap*/
    heap_data->Data = new_data;
    /*Link the heap data to the heap reference*/
    heap_data->Next = (*HeadOfLinkedList);
    /*link the Head_elem(which is a global variable) to the newly created data*/
    *(HeadOfLinkedList) = heap_data;
}


int main(){
}