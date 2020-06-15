#include <iostream>


///Given a list of years of friends, count how many of them are of the same age.
///We used POA => Decision + Counting

using namespace std;
int main()
{
    int N;
    cout << "How many friends do you have?? ";
    while (!(cin >> N)  || N < 2)
    {
        cout << "Error! Give me a number." << endl;
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Give me the length of the Sequence: ";
    }
    int years[N+1];
    cout << "Give me the list of Years: " << endl;
    for (int i = 1;i<=N; i++)
    {
        cout << i << ". ";
        while (!(cin >> years[i]))
        {
            cout << "Error! Give me a number." << endl;
            cin.clear();
            cin.ignore(1000,'\n');
            cout << i << ". ";
        }
    }

    int cnt = 0;
    for (int i = 1; i<=N; i++)
    {
        int j = i;
        int k = 1;
        bool notExists = false;
        bool foundYear= false;
        while (k < j && not(years[k] == years[j]))
        {
            k++;
        }
        notExists = (k == j); ///for the first time it's true

        if (notExists)
        {
            while (j <= N && not(years[i] == years[j+1]))
            {
                j++;
            }
            foundYear = (j < N);
            if (foundYear)
            {
                cnt++;
            }
        }
    }



    ///OutPuts
    cout << "This is the count of the my friends who are of the same age: " << cnt << endl;




    return 0;
}
