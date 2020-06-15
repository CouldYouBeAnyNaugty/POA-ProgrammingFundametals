#include <iostream>

//lets decide if the Student is Excellent or not based on his marks. 
//the attribut is whether all of the marks are equal to 5 or not 
//it's decision_all


using namespace std;

int main (void)
{
    int N;
    string tmp;
    bool error = false;
    do 
    {
        cout << "How many subjects did you take? :  " ; 
        cin >> tmp;
        N=atoi(tmp.c_str());
        error=(N<=0);
        if (error)
        {
            cout << "    ERROR! N should be an integer and greater than zero. " << endl;
        }
    }while (error);
    
    int subjects[N];
    cout << "   Marks : " << endl;
    for (int i=1; i<=N; i++)
    {
        
        do  
        {
            cout <<"    " << i << ". : ";
            cin >> tmp;
            subjects[i]=atoi(tmp.c_str());
            error=(subjects[i] <= 0 || subjects[i] >5);
            if (error)
            {
                cout << "ERROR! marks should be integers" << endl;
            }
            
        }while (error);
        
    }
    
    bool exists = false;
    int itr = 1;
    while (itr <= N && (subjects[itr] == 5))
    {
        itr++;
    }
    exists=(itr>N);
    if (exists)
    {
        cout << "You're an Excellent Student.";
    }
    else 
    {
        cout << "Unfortunately, you're not an Excellent Student.";
    }
    
    
    
}