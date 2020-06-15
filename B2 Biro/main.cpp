#include <iostream>

///CandyShop : 84 points on Biro


using namespace std;

struct type {
    int Fi;
    int Ti;
    int Price;
};



int main()
{
    int N;
    cin >> N;
    int M;
    cin >> M;
    int K;
    cin >> K;
    type D[N+1];
    int Prices[N+1]={};
    int factories[N+1]={};
    int MaxPrice = 0;
    int types[N+1] = {0};
    for (int i = 1; i <= N;i++)
    {
        cin >> D[i].Fi;
        cin >> D[i].Ti;
        cin >> D[i].Price;
        types[D[i].Ti]++;
        factories[D[i].Fi]++;
}


    ///first Task
    int cheapestCandy = D[1].Price;
    int cheapTypeInd = D[1].Ti;
    int cheapFactInd = D[1].Fi;
    for (int i = 1; i<= N; i++)
    {
        if (cheapestCandy > D[i].Price)
        {
            cheapestCandy = D[i].Price;
            cheapFactInd = D[i].Fi;
            cheapTypeInd = D[i].Ti;

        }
    }
    cout << cheapFactInd << " " << cheapTypeInd << endl;

    ///second Task
    int diffType = D[1].Fi;
    int MaxDiffType = D[1].Fi;
    int DiffCnts[N+1] = {0};
    for (int i = 1; i <= N; i++)
    {
        int j = i+1;
        while (j <= N &&  (D[i].Fi != D[j].Fi) )
        {
            j++;
        }
        bool exist = (j < N);
        if (exist)
        {
            DiffCnts[D[i].Fi]++;
        }
    }
    int IndMx = DiffCnts[1];
    int DiffVal = 1;
    for (int i = 1;i<=N;i++)
    {
        if (DiffCnts[i] > IndMx)
        {
            DiffVal = i;
            IndMx = DiffCnts[i];
        }

    }
    cout << DiffVal << endl;

    ///forthTaskAlgorithm
    int CntType= 0;
    for (int i = 1; i<=N; i++)
    {
        if (types[i] != 0)
        {
            CntType++;
        }
    }


    ///third Task
    cout << CntType << " ";
    int cnt;
    for (int i = 1; i <= M; i++)
    {
        MaxPrice = D[i].Price;
        for (int j = 1; j <= N; j++)
        {
            if ((i == D[j].Fi) && MaxPrice <= D[j].Price)
            {
                cnt ++;
                MaxPrice = D[j].Price;
            }
        }
        if (not (types[i] == 0 || factories[i] == 0))
        {
            cout << i << " " << MaxPrice << " ";
        }
        MaxPrice = 0;
    }
    cout << endl;


    ///fourth Task outPut;

    cout << CntType << endl;


    ///Fifth Task
    int CntFac= 0;
    int OnlyOneCompType[N+1];

    for (int i = 1; i<=N; i++)
    {
        if (types[i] == 1)
        {
            CntFac++;
            OnlyOneCompType[CntFac]= i;
        }
    }


    cout << CntFac << " ";
    for (int i = 1; i <= CntFac; i++ )
    {
        cout << OnlyOneCompType[i] << " ";
    }


    return 0;
}
