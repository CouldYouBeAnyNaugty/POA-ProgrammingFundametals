#include <iostream>
using namespace std;
const int nMax = 100;
const int nMin = 1;
const int popMax = 200000;
const int parMax = 10000;

struct setlm
{
    string name;
    int Popl;
    int partic;
};




void outupts(int &index)
{
    clog << "The index of the first registration at which the sum of participants reached (or went over) the expected 10000 people: " <<index << endl;
}

int main()
{
    clog << "------>[Challenge Day]<------" << endl;
    ///Declarations
    int N;
    setlm settlements[nMax+1];
    int sum = 0;
    int index = -1;


    ///inputs
    clog << "N? : ";
    while (!(cin >> N) || N > nMax || N < nMin)
    {
        clog << "Error! Give me an integer number between " << nMin << " and " << nMax << " : " <<endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
    for (int i = 1; i<=N; i++)
    {
        clog << "  " << i << ". Settlement: " << endl;
        clog << "     " << "Name: ";
        cin >> settlements[i].name;
        clog << "     " << "Population: ";
        while (!(cin >> settlements[i].Popl) || settlements[i].Popl < nMin || settlements[i].Popl > popMax)
        {
            clog << "     Error! Give me an integer number between " << nMin << " and " << popMax << " : " <<endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        clog << "     " << "Participants: ";
        while (!(cin >> settlements[i].partic) || settlements[i].partic < nMin || settlements[i].partic > parMax)
        {
            clog << "     Error! Give me an integer number between " << nMin << " and " << parMax << " : " <<endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }

    ///Algorithm implementation
    /*
    for (int i = 1; i<= N; i++)
    {
        sum = sum + settlements[i].partic;
        if (sum > parMax)
        {
            index = i;
            break;
        }
    }
    */
    int i = 1;
    while (i <= N)
    {
        sum = sum+settlements[i].partic;
        if (sum >= parMax)
        {
            index = i;
        }
        else
        {
            i++;
        }
    }


    ///outputs
    outupts(index);
    return 0;
}
