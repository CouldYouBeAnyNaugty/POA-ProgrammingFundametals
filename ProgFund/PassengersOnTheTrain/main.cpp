#include <iostream>



///Passengers on the train


using namespace std;

struct type
{
    int ON;
    int OFF;
};

int main()
{
    int N;
    cin >> N;
    type Pass_Data[N+1];
    int differces[N+1];
    int diffSum = 0;
    for (int i = 1;i<=N;i++)
    {
        cin >> Pass_Data[i].OFF >> Pass_Data[i].ON;
        diffSum = diffSum + (Pass_Data[i].ON - Pass_Data[i].OFF);
        differces[i] = diffSum;
    }

    ///Task One
    int total_Passen = 0;
    for (int i = 1; i<=N;i++)
    {
        total_Passen+=Pass_Data[i].OFF;
    }
    cout << "#" << endl;
    cout << total_Passen << endl;




    ///Task Two
    cout << "#" << endl;
    int NeedLess_Stop_count = 0;
    int NeedLess_Stops_index[N+1];
    for (int i = 1; i < N; i++)
    {
        if ((Pass_Data[i].OFF + Pass_Data[i].ON != 0) && differces[i] == 0)
        {
            NeedLess_Stop_count++;
            NeedLess_Stops_index[NeedLess_Stop_count] = i;
        }
    }
    cout << NeedLess_Stop_count << endl;




    ///Task Three
    cout << "#" << endl;
    int Pass_Max_Val = differces[0];
    for (int i = 1; i<= N;i ++)
    {
        if (Pass_Max_Val < differces[i])
        {
            Pass_Max_Val = differces[i];
        }
    }
    cout << Pass_Max_Val << endl;




    ///Task Four
    cout << "#" << endl;
    cout << NeedLess_Stop_count << endl;///this was solved in the second task, already
    for (int i = 1; i<= NeedLess_Stop_count ; i++)
    {
       cout << NeedLess_Stops_index[i] << " ";
    }
    cout << endl;
    ///Task five
    int MaxCount=0;
    int StartIndex;
    int EndIndex;
    cout << "#" << endl;
    for (int i = 1; i<=N;i++)
    {
        if (Pass_Data[i].OFF < Pass_Data[i].ON)
        {
            int itr = i+1;
            int cnt = 1;
            while (Pass_Data[itr].OFF < Pass_Data[itr].ON)
            {
                cnt++;
                itr++;
            }
            if (cnt > MaxCount)
            {
                MaxCount = cnt;
                StartIndex = i;
                EndIndex = itr-1;
            }
        }
    }
    cout << StartIndex << " " << EndIndex << endl;


    return 0;
}
