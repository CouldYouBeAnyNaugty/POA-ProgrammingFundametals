#include <iostream>


using namespace std;
///Given N locations(dealer name and car types), we can buy several cars in the city. Count how many dealers are there in the city.
///We used POA => Decision + Counting
struct type{
    string Dname;
    string Ctype;
};



int main()
{
    int N;
    cout << "Count ?? ";
    while (!(cin >> N)  || N < 2)
    {
        cout << "Error! Give me a number." << endl;
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Give me the length of the Sequence: ";
    }
    type locations[N+1];
    cout << "Dealer name and Car type: " << endl;
    for (int i = 1;i<=N; i++)
    {
        cout << i << ". ";
        cout << "   Dealer Name: ";
        cin >> locations[i].Dname;
        cout << "   Car Type: ";
        cin >> locations[i].Ctype;
    }

    int cnt = 0;
    for (int i = 1; i<=N; i++)
    {
        int j = 1;
        bool notExists = false;
        while (j < i && not(locations[i].Dname == locations[j].Dname))
        {
            j++;
        }
        notExists = (j >= i);
        if (notExists)
        {
            cnt++;
        }

    }



    ///OutPuts
    cout << "This is the count of the dealers in the city: " << cnt << endl;








    return 0;
}
