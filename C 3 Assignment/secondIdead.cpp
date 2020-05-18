#include <iostream>

using namespace std;
int main()
{
    int N, M, K;
    cin >> N;
    cin >> M;
    cin >> K;
    int n = ((N+1) * (M+1));
    int Data[n];
    //int matrix[N+1][M+1];
    //int Arraycnt = 0;
    //int Array[n+2];
    int indCnt=0;
    int MaxCount = 0;
    int index = 0;

    ///inputs and algorithm implementation
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            cin >> Data[j];
        }
        for (int k = 1; k<=M; k++)
        {
            indCnt = 0;
            int m = k;
            while (Data[m] > K)
            {
                indCnt++;
                m++;
            }
            if (MaxCount < indCnt)
            {
                MaxCount = indCnt;
                index = i;
            }

        }

    }

    cerr << endl;
    ///output
    if (index != 0){
        cout << index;
    }
    else{
        cout << "-1";
    }
    return 0;

}
