#include <iostream>

using namespace std;

struct myType{
    int Number;
    int AnotherNumber;
};

int main(){
    myType first = {1, 2};
    cout << "first: " << first.Number << " " << first.AnotherNumber << endl;
    myType* SomeMemory = (myType*)malloc(sizeof(myType));
    //cout << *SomeMemory << endl; /*This is not going to work! Because we cannot dereference a pointer that stores two different values:::::: We are gonna dereference both of them idividually*/
    cout << SomeMemory << endl; /*This is gonna print the addresss to which the pointer points*/
    /*Dereferencing them individully is*/
    SomeMemory->Number = 1;
    SomeMemory->AnotherNumber = 100;
    cout << SomeMemory->Number << " " << SomeMemory->AnotherNumber << endl;
}