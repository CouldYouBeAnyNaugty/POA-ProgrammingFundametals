#include <iostream>


//lets calculate factorial of a number using SEQUENCE CALCULATION;
//The worst of possible ways to find factorial of a number!!!! xD

using namespace std;

int main (void)
{
    int N;
    
    string tmp;
    bool error = false;
    do
    {
        cout << "Give me a number: " ;
        cin >> tmp;
        N=atoi(tmp.c_str());
        error=(N<=0);
        if (error)
        {
            cout<<" Error! N should be greater than zero" <<endl;
        }
    }while (error);
   
    int list[N];
    for (int i = 1; i<=N; i++)
    {
        list[i]=i;
    }
    
    cout << endl;
    
    cout << "This is the list of numbers we multiplied to get the factorial: " << endl;
    
    for (int i = 1; i<=N; i++)
    {
        cout << " " << list[i] << " | " ;
    }
    
    int prd = 1;
    for (int i = 1; i<=N; i++)
    {
        prd *= list[i];
    }
        
    cout << endl;
    cout << endl;
    
    cout << "This is the factorial of " << N << "  : " << prd << endl; 
    
    
    
    
}