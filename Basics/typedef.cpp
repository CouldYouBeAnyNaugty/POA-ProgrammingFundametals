#include <iostream>

//This is how we difine structs in cpp


using namespace std;

//this is the definition of the struct
typedef struct ///struct: type of copmound data type 
{
    int x;  //int : field type    //x : field identifier
    int y;  
    double d; //double : field type //d : field identifier
    double c;
    string first;
    string second; //string : field type   //second: field identifier
}
WhateverName; //type identifier 

int main(void)
{
    //declaration of the the struct
    
    WhateverName Arr[100];
    int N; 
    cout << "Give me number which will count the number of elements in the Array:  " ;
    cin >> N;
    
    for (int i = 1; i<=N; i++)
    {
        cout << "first elements of the struct: " ;
        cin >> Arr[i].x; 
        cout << "second elements of the struct: " ;
        cin >> Arr[i].y;
    }
    
    for (int i = 1; i<=N; i++)
    {
        cout << Arr[i].x << " | " << Arr[i].y << " | "; 
    }
    
    
}