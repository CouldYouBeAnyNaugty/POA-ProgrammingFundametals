#include <iostream>

using namespace std;

struct Type{
    int ID;
    int Gen;
    int Count;
};

int main()
{
    ///declarations
    int CompCnt;
    int NotesCnt;
    cerr << "How many companies?? ";
    cin >> CompCnt;
    Type notes[10000];
    string CompNames[10000];
    string OutComp[10000];
    int cnt = 0;



    ///Inputs
    cerr << "Give me the names of Companies: " << endl;
    for (int i = 1; i<=CompCnt; i++)
    {
        cerr << i << ". Name: ";
        cin >> CompNames[i];
    }
    cerr << endl;
    cerr << "How many Notes?? ";
    cin >> NotesCnt;
    for (int i = 1; i<=NotesCnt; i++)
    {
        cerr << i << ". Note: " << endl;
        cerr << "   Company ID: ";
        cin >> notes[i].ID;
        cerr << "   Console Gen: ";
        cin >> notes[i].Gen;
        cerr << "   Console Count: ";
        cin >> notes[i].Count;
    }
    int indComp;
    ///Algorithm Implementation
    for (int i=1; i<=NotesCnt; i++)
    {
        if (notes[i].Gen == 7)  ///Multiples Item Selection
        {
            indComp = i;
            cerr << OutComp[i] << endl;;
            OutComp[cnt]= CompNames[indComp]; ///Copy Function
            cnt++;
        }
    }




    ///Outputs
    cerr << "Count and Names of Companies: " << endl;
    cout << cnt << " ";
    for (int i = 1; i<=cnt; i++)
    {
        cout << OutComp[i] << " ";
    }

    return 0;
}
