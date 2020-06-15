#include <iostream>

//We know the monthly income and expenses of a person, lets calculate the how much his assets
//at the end of the year

//Sequence Calculation




typedef struct 
{
    int in, out;
}
inc;


using namespace std;

int main (void)
{
    int N;
    string tmp;
    bool error = false;
    do 
    {
        cout << "Give me N:  " ; 
        cin >> tmp;
        N=atoi(tmp.c_str());
        error=(N<=0);
        if (error)
        {
            cout << "    ERROR! N should be an integer and greater than zero. " << endl;
        }
    }while (error);
    
    inc expenses[N];
    for (int i=1; i<=N; i++)
    {
        do 
        {
            error=false;
            cout << " Data " << i << ": " << endl; 
            cout << " Income: ";
            string tmp01;
            cin >> tmp01;
            expenses[i].in=atoi(tmp01.c_str());
            error=(expenses[i].in<=0);
            if (error)
            {
                cout << "    ERROR! negative income??? " << endl;
            }
        }while (error);
        
        do
        {
            cout << " Expenses: ";
            cin >> tmp; 
            expenses[i].out=atoi(tmp.c_str());
            error=(expenses[i].out<=0);
            if (error)
            {
                cout<<"     ERROR! Negative expenses??? " << endl;
            }
        }while (error);
    }
    
    int sum = 0;
    for (int i=1; i<=N; i++)
    {
        int diff = expenses[i].in - expenses[i].out;
        sum = sum + (diff);  
    }
    
    cout << "OUTPUTS" << endl;
    
    cout << "Ths growth is : " << sum  << endl; 
    
    
}