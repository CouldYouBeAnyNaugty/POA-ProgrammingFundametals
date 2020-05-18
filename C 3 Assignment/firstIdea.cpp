#include <iostream>

///First Idea 



using namespace std;
int main()
{
    int N, M, K;
    cerr << "N? ";
    cin >> N;
    cerr << "M? ";
    cin >> M;
    cerr << "K? ";
    cin >> K;
    int n = ((N+1) * (M+1));
    int Data[n+2];
    int matrix[N+1][M+1];
    int Arraycnt = 0;
    int Array[n+2];
    int indCnt=0;
    int MaxCount = 0;
    int index = 0;

    ///inputs and algorithm implementation
    for (int i = 1; i <= N; i++)
    {
        cerr << i << ". Data: " << endl;
        for (int j = 1; j <= M; j++)
        {
            cerr << j << ". ";
            cin >> Data[j];
            int val = Data[j];
            if (val > K)
            {
                matrix[i][j]= Data[j];
                Arraycnt++;
                Array[Arraycnt] = j;
            }
        }
        for (int k = 1; k<=Arraycnt; k++)
        {
            int firstnumber = Array[k];
            int nextnumber = Array[k+1];
            if (nextnumber-firstnumber == 1 )
            {
                indCnt++;
                if (MaxCount < indCnt)
                {
                    MaxCount = indCnt;
                    index = i;
                }
            }
            else
            {
                indCnt = 0;
            }
        }

    }
    ///output
	if (index != 0)
	{
		cout << index << endl;
	}
	else 
	{
		cout << "-1" << endl;
	}
    return 0;

}

