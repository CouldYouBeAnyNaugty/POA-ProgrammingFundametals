#include <iostream>


///Given a list of integers, Give me the index of the smallest Even number and the Greatest Odd number.
///The Precondition: There must be at least two numbers in the sequence and there exist a number even in the list
///and a number odd in the list.

///We used POA => Maximum Selection + Minimum Selection + Selection

using namespace std;
int main()
{
    int N;
    cout << "Give me the length of the Sequence: ";
    while (!(cin >> N)  || N < 2)
    {
        cout << "Error! Give me a number." << endl;
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Give me the length of the Sequence: ";
    }
    int Sequence[N+1];
    int MaxEven;
    int MaxOdd;
    int EmaxVal;
    int OmaxVal;
    bool isEven;
    cout << "Give me the sequence of integer numbers space separated. " << endl;
    for (int i = 1;i<=N; i++)
    {
        cout << i << ". ";
        while (!(cin >> Sequence[i]))
        {
            cout << "Error! Give me a number." << endl;
            cin.clear();
            cin.ignore(1000,'\n');
            cout << i << ". ";
        }
    }

    int i = 1;
    if (Sequence[1] % 2 == 0)
    {
        ///fix this as the even
        MaxEven=1;
        ///Use POA Selectoin for the first odd
        while ( Sequence[i] % 2 == 0 )
        {
            i++;
        }
        MaxOdd=i;
    }
    else
    {
        ///fix this one as the odd
        MaxOdd=1;
        ///Use POA Selectoin for the first EmaxVal
        i = 1;
        while (Sequence[i] % 2 != 0)
        {
            i++;
        }
        MaxEven=i;

    }
    i=0;
    cout <<"first Even Index: " << MaxEven << endl;
    cout << "first Odd index: " << MaxOdd << endl;

    EmaxVal=Sequence[MaxEven];
    OmaxVal=Sequence[MaxOdd];
    for (int i=1;i<=N; i++)
    {
        if (Sequence[i] % 2 == 0)
        {
            if (EmaxVal>Sequence[i])
            {
                MaxEven=i;
                EmaxVal=Sequence[MaxEven];

            }
        }
        else
        {
            if (OmaxVal < Sequence[i])
            {
                MaxOdd=i;
                EmaxVal=Sequence[MaxOdd];
            }
        }
    }

    ///OutPuts
    cout << "Min Even number Index is: " << MaxEven << endl << "Min Even Value is: " << Sequence[MaxEven] << endl;
    cout << "Max Odd number Index is: " << MaxOdd << endl << "Max Odd Value is: " << Sequence[MaxOdd];





    return 0;
}
