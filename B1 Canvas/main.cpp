#include <iostream>

using namespace std;
struct temp
{
    int mint;
    int maxt;
};

int main()
{
    int N;
    cout << "N? " ;
    while (!(cin>>N))
    {
        cout << "Error! Give me a real number!" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
    temp Days[N];
    int NCnt;
    int Outdays[N];
    int maxdiff;
    bool error = false;
    for (int i =1; i<= N; i++)
    {

        cout << "Data" << i << ". " << endl;
        cout << "Max Temp: ";
        while (!(cin>>Days[i].maxt))
        {
            cout << "Error! Give me a number" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        cout << "Min Temp: ";
        while (!(cin>>Days[i].mint) || Days[i].mint > Days[i].maxt)
        {
            cout << "Error! Please enter a number that is smaller than the maximum temperature you entered earlier: " << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }

        ///Algorithm
        maxdiff = Days[1].maxt-Days[1].mint;
        NCnt=1;
        Outdays[1]=1;
        for (int i = 2; i<=N; i++)
        {
            if (Days[i].maxt-Days[i].mint ==  maxdiff)
            {
                NCnt++;
                Outdays[NCnt]=i;
            }
            if (Days[i].maxt-Days[i].mint > maxdiff)
            {
                NCnt = 1;
                Outdays[NCnt] = i;
                maxdiff = Days[i].maxt-Days[i].mint;
            }
        }


        ///outputs
        cout << NCnt << " ";
        for (int i = 1; i <= NCnt; i++)
        {
            cout << Outdays[i] << " ";
        }
        ///the end

    return 0;

}







