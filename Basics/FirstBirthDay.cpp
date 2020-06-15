#include <iostream>
#include <string>


///We have dates from N people, lets calculate who has the first birthday??
using namespace std;

typedef struct
{
    int day, month; 
}
type1;


int main (void)
{
    int N;
    bool error=false;
    string tmp;
    do {
        cout << "N=? :";
        cin >> tmp;
        N=atoi(tmp.c_str());
        error=(N<=0);
        if (error) {
            cout << " ERROR! N must not be a string. " <<  endl;
        }
    } while (error);
    
    type1 D[N];
    
    for (int i=1; i<=N; i++)
    {
        error = false;
        cout << "   Data: " << i << endl;
        do 
        { 
            cout << i <<". Month: " ;
            cin >> tmp;
            D[i].month=atoi(tmp.c_str());
            error = ((D[i].month <= 0) || (D[i].month > 12));
            if (error)
            {
                cout << "   Error! The months are not in the range. " << endl;
            }
        } while (error);
        do 
        { 
            error = false;
            cout << i << ". Day : " ;
            cin >>tmp;
            D[i].day=atoi(tmp.c_str());
            error = (D[i].day <= 0 || D[i].day > 31);
            if (error)
            { 
                cout << "   Error! The days are not in the range. " << endl;
            }
                
       }while (error); 
        
    }
    
    
    
    int first = 1;
    for (int i = 1; i <= N; i++ )
    {
        if (D[i].month < D[first].month || ((D[i].month == D[first].month) && (D[i].day < D[first].day)))
        {
            first = i;
        }    
        
    }
    
    cout << "Outputs" << endl;
    cout << first ;
    


}