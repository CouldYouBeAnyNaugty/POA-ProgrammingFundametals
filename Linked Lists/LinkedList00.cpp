#include <iostream>
using namespace std;
/*Make a function push() that adds a data a number to an already created linked list at the end of the list*/


struct Node{
    int data; 
    Node *Next;
};

Node* Head; 

void init(int i){
    Node* first_elem = (Node*)malloc(sizeof(Node));
    first_elem->data = i;
    first_elem->Next = NULL;
    Head = first_elem;
}
void push_back(Node* l_list, int inp_data){
    if(Head == NULL){
        init(inp_data);
        return;
    }
    Node* ref_heap = (Node*)malloc(sizeof(Node));
    ref_heap->data = inp_data;
    ref_heap->Next = NULL;
    Node* itr = Head;
    while (itr != NULL){
        itr = itr->Next;
    }
    itr = ref_heap;
    
    
    
}

void print(){
    Node *itr = Head;
    cout << "This is your list: ";
    while(itr != NULL){
        cout << itr->data << " | ";
        itr = itr->Next;
    }
    cout << endl;
}

int main(){
    Head = NULL; /*Empty list*/
    push_back(Head, 2);
    
    print();
    push_back(Head, 2);
    print();
    push_back(Head, 4);
    print();
}