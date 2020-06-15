#include <iostream>
///We measured the temperature of Lake Balaton at Siófok on N days. Write an algorithm that defines a period
///where the temperature was greater than 20 degrees, and before and after of this period all of the temperatures were
///smaller than 20;
using namespace std;

int main()
{
    int N;
    cout << "N: " << endl;
    cin >> N;
    int Tempr[N+1];
    for (int i = 1; i<= N; i++)
    {
        cin >> Tempr[i];
    }

    int cnt = 0;
    int GreaterThan20[N+1];
    if (Tempr[1] >= 20){
        cnt++;
        GreaterThan20[cnt] = 0;
    }else{
        int i = 1;
        while (i < N && not(Tempr[i] >= 20)){
            i++;
        }
        if (i < N){
            int j = i;
            while (j < N && Tempr[j]>=20){
                cnt++;
                GreaterThan20[cnt] = Tempr[j];
                j++;
            }
            if (j == N)
            {
                cnt = 1;
                GreaterThan20[cnt] = 0;
            }
        }
        else{
            cnt++;
            GreaterThan20[cnt]=0;
        }
    }


    ///Outputs
    cout << "This are the temperature period: " << endl;
    for (int i = 1; i<=cnt;i++){
        cout << GreaterThan20[i] << " " << endl;
    }
    return 0;
}
