#include <iostream>
using namespace std;

struct Node{
    int data; 
    Node *Next;
};

Node* Head, *Tail; 
void print(){
    Node *itr = Head;
    if(itr == NULL){
        cout << "EMPTY LIST" <<endl;
        return;
    }
    while(itr != NULL){
        cout << itr->data << " | ";
        itr = itr->Next;
    }
    cout << endl;
}



/*Initializing*/
void init(int i){
    Node* first_elem = (Node*)malloc(sizeof(Node));
    first_elem->data = i;
    first_elem->Next = NULL;
    Head = first_elem;
}

/*Push from front*/
void push_front(Node *l_list, int inp_Data){
    Node* newHead = new Node(); /*new is easier than malloc/calloc*/
    newHead->data = inp_Data;
    newHead->Next = l_list;
    Head = newHead;
}

/*Reversing a linked list using iteration*/
void reverse(Node * l_list){
    if(l_list == NULL){
        cout << "[Error!] Your list is empty!";
        return;
    }
    Node *current, *up_com, *Prev;
    Prev = NULL;
    current = Head;
    while (current!=NULL){
        up_com = current->Next; /*We store the next node in a temporary variable to keep track of*/
        current->Next = Prev; /*We locate pointer of the current node to the previous node(which initially is NULL)*/
        Prev = current; /*Stores the address of the current in the previoius one*/
        current = up_com; /*Sotres the address of the upcoming one*/
    }
    Head = Prev;
    
}

/*
 * Steps to check if a given linked list is a palindorme or not
 * 1) Get the middle of the linked list.
 * 2) Reverse the second half of the linked list.
 * 3) Check if the first half and second half are identical.
 * 4) Construct the original linked list by reversing the second half again and attaching it back to the first half
 */


///=> This is not a good solution, obviously! 

/*Another way*/
/*
 * 1) Iterate through the whole list and put each an every node into the stack
 * 2) Then iterate again trough the list (this time poping an element from the stack) and comparing it with each node
 * 3) If every element is of the list is equal every element of the sack (LIFO=> :) ) then the list is a palindrome
 */



int main(){
    Head = NULL;
    int N, val;
    cout << "Enter the number of elements to insert in the list: ";
    /*Don't confuse it with the order of inputs; we are entering the nodes in front! Counter intuitive though!*/
    cin >> N;
    for(int i = 0; i < N; i++){
        cout << i+1 << ". ";
        cin >> val;
        push_front(Head,val);
    }

    cout << "This is the Entered List list:\t ";
    print();
    reverse(Head);
    if(Head != NULL) {cout << "This is the Reversed List list:\t "; print();}
}