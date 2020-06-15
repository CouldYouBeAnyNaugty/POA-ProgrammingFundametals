#include <iostream>
#include <algorithm>
using namespace std;

struct type {
    int Id;
    string flower;
};


int main()
{
    int K;
    cin >> K;
    int D;
    cin >> D;
    int Id[D+1];
    type data[D+1];
    for (int i = 1 ;i<=D; i++ )
    {
        cin >> data[i].Id;
        cin >> data[i].flower;
    }

    ///Task 01;
    int cnt = 0;
    for (int i = 1; i <= D; i++)
    {
        int k = 1;
        while (k < i && not(data[i].flower == data[k].flower))
        {
            k++;
        }
        bool exist = (k == i);
        if (exist)
        {
            cnt++;
        }
    }
    cout << "#" << endl;
    cout << cnt << endl;






    ///Task 02
    cout << "#" << endl;
    for (int i = 1; i <= D; i++)
    {
        int k = 1;
        while (k < i && not(data[i].Id == data[k].Id))
        {
            k++;
        }
        bool exist = (k == i);
        if (exist)
        {
            cout << data[i].Id << " ";
            int idcnt= 1;
            for (int j = i+1; j<= D; j++)
            {
                if (data[i].Id == data[j].Id)
                {
                    idcnt++;
                }
            }
            cout << idcnt << endl;
        }

    }





    ///Task 03
    cout << "#" << endl;
    int maxCount = 0;
    string nameThirdQ;
    for (int i = 1; i<= D; i++)
    {
        int thirdCnt = 1;
        int k = 1;
        while (k < i && not(data[i].flower == data[k].flower))
        {
            k++;
        }
        bool exist = (k == i);
        if (exist)
        {
            for (int j = i+1; j<= D; j++)
            {
                if (data[i].flower == data[j].flower)
                {
                    thirdCnt++;
                }
            }
        }

        if (maxCount < thirdCnt)
        {
            maxCount = thirdCnt;
            nameThirdQ = data[i].flower;
        }

    }
    cout << nameThirdQ << endl;





    ///Task 04
    cout << "#" << endl;
    int num = -1;
    int All_decisoin[D+1];
    for (int i = 1; i <= K; i++)
    {
        int k = 1;
        while (k <= D && not(i == data[k].Id))
        {
            k++;
        }
        bool itsFine = (k > D);
        if (itsFine)
        {
           // cerr << "Yes" << endl;
            All_decisoin[i] = 1;
            num = i;
        }
        else
        {
            //cerr << "No" << endl;
            All_decisoin[i] = 0;
        }
    }
    cout << num << endl;

    ///Task 05
    cout << "#" << endl;
    string individualArr[D+1];
    int GroupCnt = 0;
    int hamaraCount = 0;
    for (int i = 1; i <= D; i++)
    {
        int ArrCount = 0;
        int k = 1;
        while (k < i && not(data[i].Id == data[k].Id))
        {
            k++;
        }
        bool notexistPreviously = (k == i);
        if (notexistPreviously)
        {
            hamaraCount++;
            for (int j = 0 ; j <= D; j++)
            {
                if (data[j].Id == data[i].Id  )
                {
                    ArrCount++;
                    individualArr[ArrCount] = data[j].flower;
                }
            }

            for(int itr = 1; itr<=ArrCount; itr++)
            {
                cerr << individualArr[itr] << endl;
            }
        cerr << hamaraCount << endl;
        }
    }


    return 0;
}
//data[i].flower == data[j].flower
