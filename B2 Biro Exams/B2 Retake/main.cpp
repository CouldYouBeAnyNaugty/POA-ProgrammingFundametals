#include <iostream>

using namespace std;
struct type
{
    string country;
    string colour;
    int value;
};

struct t2
{
    string Uinque_country;
    string Unique_colour;
    int Uniqu_val;
};



int main()
{
    int N;
    cin >> N;
    type data[N+1];
    t2 data2[N+1];
    for (int i = 1; i<= N;i++)
    {
        cin >> data[i].country;
        cin >> data[i].colour;
        cin >> data[i].value;
    }



    ///Task One
    string The_bank_Note_country = data[1].country;
    string The_bank_Note_colour=data[1].colour;
    int The_bank_Note_Value = data[1].value;
    int minimum_Of_all = data[1].value;
    for (int i = 1;i<= N;i++)
    {
        if (The_bank_Note_Value < data[i].value)
        {
            The_bank_Note_Value= data[i].value;
            The_bank_Note_country=data[i].country;
            The_bank_Note_colour=data[i].colour;
        }
        ///This part belongs to Last task
        if (minimum_Of_all > data[i].value)
        {
            minimum_Of_all = data[i].value;
        }
    }
    cerr << minimum_Of_all << endl;
    cout << "#" << endl;
    cout << The_bank_Note_country << " " << The_bank_Note_colour << endl;

    ///Task 2
    cout << "#" << endl;
    string name = "NONE";
    ///bool DoesNotExist;
    for (int i = 1; i<= N; i++)
    {
        int Unique_Count = 1;
        int k = 1;
        while (k < i && not(data[i].country == data[k].country))
        {
            k++;
        }
        bool DoesNot_exist_previously= (k==i);
        if (DoesNot_exist_previously)
        {
            for (int j = i+1; j<=N;j++)
            {
                if(data[i].country == data[j].country)
                {
                    Unique_Count++;
                }
            }
            if (Unique_Count == 1)
            {
                name = data[i].country;
                break;
            }
        }
    }
    cout << name  << endl;


    ///Task 3
    cout << "#" << endl;
    int Country_count = 0;
    string Countries_names[N+1];
    for (int i = 1;i<=N;i++)
    {
        int k = 1;
        while (k<i && not(data[i].country == data[k].country))
        {
           k++;
        }
        if (k==i)
        {
            Country_count++;
            Countries_names[Country_count] = data[i].country;
        }
    }
    cout << Country_count << endl;
    for (int i = 1; i<=Country_count; i++)
    {
        cout << Countries_names[i] << endl;
    }

    cerr << "Task 03" << endl;
    ///Task 4
    cout << "#" << endl;
    string Colour_Appeard_Most;
    int maxCoulour_count = 0;
    for (int i = 1; i<= N;i++)
    {
        int Colour_Count = 1;
        int k = 1;
        while (k<i && not(data[i].colour == data[k].colour))
        {
            k++;
        }
        if(i==k)
        {
            for (int j = i; j<=N; j++ )
            {
                if (data[i].colour == data[j].colour)
                {
                   Colour_Count++;
                }
            }
        }
        if (maxCoulour_count < Colour_Count)
        {
            maxCoulour_count = Colour_Count;
            Colour_Appeard_Most = data[i].colour;
        }
    }
    cout << Colour_Appeard_Most << endl;
    ///Task 5
    cout << "#" << endl;


    ///I couldn't solve this problem | it required matrices, and I f**king suck there
    int nayaCount = 0;
    for (int i = 1; i<=N; i++)
    {
        int k = 1;
        while (k < i && not (data[i].country == data[k].country))
        {
            k++;
        }
        if (k==i)
        {
            nayaCount++;
            data2[nayaCount].Uinque_country = data[i].country;
            data2[nayaCount].Unique_colour = data[i].colour;
            data2[nayaCount].Uniqu_val = data[i].value;
        }
    }
    string name_1 = "NONE";
    for (int i = 1; i<= nayaCount; i++)
    {
        cerr << data2[i].Uinque_country << endl;
        int aikJaisayColourKiCount= 0;
        int aikJaisayColoursKiValue[N+1];
        int maxVal = data2[i].Uniqu_val;
        string maxColour = data2[i].Unique_colour;
        cerr << maxColour << endl;
        string For_Each_Country = data2[i].Uinque_country;
        for (int j = 1; j<= N; j++)
        {

            //int j = 1;
            if (maxColour == data[j].colour && For_Each_Country != data[j].country)
            {
                aikJaisayColourKiCount += 1;
                aikJaisayColoursKiValue[aikJaisayColourKiCount] = data[j].value;
            }

        }
            cout << aikJaisayColourKiCount << endl;
            for (int itr = 1; itr <= aikJaisayColourKiCount ; itr++)
            {
                cout << aikJaisayColoursKiValue[itr] ++;
            }
            cout << endl;

    }



    return 0;
}
