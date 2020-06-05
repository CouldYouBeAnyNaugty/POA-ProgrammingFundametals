#include <iostream>

using namespace std;
const int nMax = 1000;
const int nMin = 1;
const int Kmax = 50;
const int Kmin = 20;
const int Tmin = 0;




void Solution(int N, int M, int K, int indCnt, int MaxCount, int index, int Data[])
{
	for (int i = 1; i <= N; i++)
    {
		cout << "Row: " << i << " " << endl; 
        for (int j = 1; j <= M; j++)
        {
			cout << "   " << j << ". Temperature : ";
			while(!(cin >> Data[j]) || Data[j] < Tmin || Data[j] > Kmax)
			{
				cout << "   Error! give me a number between "<< Tmin  << " and " << Kmax << " : ";
				cin.clear();
				cin.ignore(1000,'\n');
			}
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
}
int main()
{
	//Declarations
    int N, M, K;
	int indCnt=0;
    int MaxCount = 0;
    int index = -1;
	
	//Inputs
	cout << "N: ";
    while(!(cin >> N) || N > nMax || N < nMin)
	{
		cout << "Error! give me a number between " << nMin << " and " << nMax << " : ";
		cin.clear();
		cin.ignore(10000,'\n');
	}
	cout << "M: ";
	while(!(cin >> M ) || M > nMax || M < nMin)
	{
		cout << "Error! give me a number between " << nMin << " and " << nMax << " : ";
		cin.clear();
		cin.ignore(10000,'\n');
	}
	cout << "K: ";
    while(!(cin >> K ) || K > Kmax || K < Kmin)
	{
		cout << "Error! give me a number between " << Kmin << " and " << Kmax << " : ";
		cin.clear();
		cin.ignore(10000,'\n');
	}
    int n = ((N+1) * (M+1));
    int Data[n];  //declared this late becuse we need M*N times elements in the array, and for that we need M and N given in from the user side
	
	Solution(N, M, K, indCnt, MaxCount, index, &Data[n]);
	
	
	///Output 
	cerr << endl;
	cerr << endl;
    cerr << "OutPuts" << endl;
	cout << "The index of the settlement which has the longest period: " << index << endl;
    
    return 0;

}



