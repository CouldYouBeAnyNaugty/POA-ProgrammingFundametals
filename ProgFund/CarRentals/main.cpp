#include <iostream>

///Some questions could be solved inside the other implementation, but for the sake of clarity, I didn't do that.
///Like third and forth,
///second and fifth
///pretty much the same.


using namespace std;
struct Type {
    string PlateNum;
    int FirstDay;
    int LastDay;
};


int main()
{

    ///declarations
    int N;
    cin >> N;
    Type CarRentals[N+1];
    int Rentals[N+1]={};
    int RentalsCount = 0;
    int mxCount = 0;
    int firstCount = 1;






    ///Inputs
    for (int i = 1;i<=N; i++)
    {
        cin >> CarRentals[i].PlateNum;
        cin >> CarRentals[i].FirstDay;
        cin >> CarRentals[i].LastDay;
        ///Task One Algorithm Implementation
        Rentals[i]=(CarRentals[i].LastDay - CarRentals[i].FirstDay) + 1;
        RentalsCount += Rentals[i];
        if (CarRentals[i].LastDay >= mxCount)
        {
            mxCount = CarRentals[i].LastDay;
        }
        if (CarRentals[i].FirstDay <= firstCount)
        {
            firstCount = CarRentals[i].FirstDay;
        }
    }





    ///Task Two algorithm implementation
    int MaxSum = 0;
    string MaxCar;
    for (int i = 1; i<=N; i++)
    {
        int SumForEach = 0;
        int k = 0;
        while (k < i && not(CarRentals[k].PlateNum == CarRentals[i].PlateNum))
        {
            k++;
        }
        bool notexists = (k == i);
        if (notexists)
        {
            //cerr << "NO" << " ";
            for (int j = i; j<=N; j++)
            {
                if (CarRentals[i].PlateNum == CarRentals[j].PlateNum)
                {
                    SumForEach += Rentals[j];
                }
            }
            //cerr << SumForEach << endl;
            if ( SumForEach > MaxSum)
            {
                MaxSum = SumForEach;
                MaxCar = CarRentals[i].PlateNum;
            }
        }
    }



    ///Task one Output
    cout << "#" << endl;
    cout << RentalsCount << endl;


    ///Task Two Output
    cout << "#" << endl;
    cout << MaxCar << endl;
    cout << "#" << endl;



    ///Task Three Algorithm Implementation
    int Alldays[RentalsCount]={0};
    for (int i = 1; i <= N; i++)
    {
        for (int j = CarRentals[i].FirstDay; j<= CarRentals[i].LastDay; j++)
        {
            Alldays[j]++;
        }

    }
    int initialMaxInd = 0;
    int InitialMaxVal = Alldays[1];
    for (int i = 1; i<= mxCount; i++)
    {
        if (InitialMaxVal < Alldays[i])
        {
            InitialMaxVal = Alldays[i];
            initialMaxInd = i;
        }
    }


    ///Task Three Outputs
    cout << initialMaxInd << endl;




    int higherthanAllthePrev = Alldays[1];
    int indexOftheHigher[mxCount];
    int DaysCount = 0;
    for (int i = 2; i<= mxCount; i++)
    {
        if (Alldays[i] > higherthanAllthePrev)
        {
            higherthanAllthePrev = Alldays[i];
            DaysCount++;
            indexOftheHigher[DaysCount] = i;
        }
    }








    ///Forth Task Outputs
    cout << "#" << endl;
    for (int i = 1; i<= DaysCount; i++)
    {
        cout << indexOftheHigher[i]<< " ";
    }
    cout << endl;







    ///fifth Task Algorithm Implementation
    cout << "#" << endl;
    for (int i = 1; i<=N; i++)
    {
        int CarsCnt = 0;
        int SumForEach = 0;
        int k = 0;
        while (k < i && not(CarRentals[k].PlateNum == CarRentals[i].PlateNum))
        {
            k++;
        }
        bool notexists = (k == i);
        if (notexists)
        {
            for (int j = i; j<=N; j++)
            {
                if (CarRentals[i].PlateNum == CarRentals[j].PlateNum)
                {
                    CarsCnt += 1;
                    SumForEach += Rentals[j];
                }
            }
            ///Task five Outputs
            cout <<  CarRentals[i].PlateNum << " " << CarsCnt << " "  << SumForEach << endl;
        }
    }


///I am the worst programmer ever

    return 0;
}
