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

int length(Node * l_list){
    int cnt = 0;
    while(l_list != NULL){
        cnt++;
        l_list = l_list->Next;
    }
    return cnt;
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
    while (itr->Next != NULL){ /*This technique is called "Look-ahead"*/
        itr = itr->Next; /*This says that itr should point towards the next pointer in the list(as in itr is storing the address of the next pointer in the list)*/
    }
    itr->Next = ref_heap; /*AND, when we reach the end point, which we can locate by NULLity, we store there the address of the newly allocated memory*/  
}


void push_front(Node *l_list, int inp_Data){
    Node* newHead = new Node(); /*new is easier than malloc/calloc*/
    newHead->data = inp_Data;
    newHead->Next = l_list;
    Head = newHead;
}

void push_nth(Node *l_list, int inp_Data, int N){
    Node* NewNode = new Node();
    NewNode->data = inp_Data;
    if(Head == NULL && N != 1){
        cout << "Your list is Empty and the operation is not possible, try again!" << endl;
        return;
    }else{

        Head = NewNode;
        NewNode->Next = NULL;
    }
    if(N > length(l_list)){
        cout << "Your Number is exceeds the length of the given list. This Operation is not possible." << endl;
        return;
    }
    Node* ptr = Head;
    for(int i = 0; i<N-2; i++){
        ptr = ptr->Next;
    }
    NewNode->Next = ptr->Next;
    ptr->Next = NewNode;
    /*Note: We are just inserting! (the remaining will be the same)*/
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
    int N, val;
    cout << "Enter the number of elements of the list: " ;
    cin >> N;
    for (int i = 0; i < N; i++){
        cout << "Num " << i+1 << ". ";
        cin >> val;
        push_back(Head, val);
        print();
    }
    /*The numbers are being added at the end*/
    Head = NULL; /*Empty list, again*/
    cout << "Enter the number of elements of the list: " ;
    cin >> N;
    for (int i = 0; i < N; i++){
        cout << "Num " << i+1 << ". ";
        cin >> val;
        push_front(Head, val);
        print();
    }
    /*The number are being added at the fron*/
    cout << "This is the length of the list: " << length(Head) << endl;
    /*The length must be equal to N for each executaion*/
    Head = NULL; 
    cout << "Enter the value you want to inset at Nth poistion: ";
    cin >> val;
    cout << "Enter the poistion of insertion: ";
    cin >> N;
    push_nth(Head,val, N);
    print();
}