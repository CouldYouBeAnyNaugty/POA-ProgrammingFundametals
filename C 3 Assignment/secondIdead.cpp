#include <iostream>

using namespace std;
const int nMax = 1000;
const int nMin = 1;
const int Kmax = 50;
const int Kmin = 20;
const int Tmin = 0;

//Helper Functions Declarations and definitions

void inputs (int &N, int &M, int &K)
{
	clog << "N: ";
   	while(!(cin >> N) || N > nMax || N < nMin)
	{
		cout << "Error! give me a number between " << nMin << " and " << nMax << " : ";
		cin.clear();
		cin.ignore(10000,'\n');
	}
	clog << "M: ";
	while(!(cin >> M ) || M > nMax || M < nMin)
	{
		clog << "Error! give me a number between " << nMin << " and " << nMax << " : ";
		cin.clear();
		cin.ignore(10000,'\n');
	}
	clog << "K: ";
    while(!(cin >> K ) || K > Kmax || K < Kmin)
	{
		clog << "Error! give me a number between " << Kmin << " and " << Kmax << " : ";
		cin.clear();
		cin.ignore(10000,'\n');
	}
}


void Solution(int &N, int &M, int &K, int &indCnt, int &MaxCount, int &index, int Data[])
{
	for (int i = 1; i <= N; i++)
  	{
			clog << i << ". Settlement: " << endl; 
       		for (int j = 1; j <= M; j++)
       		{
				clog << "   " << j << ". Day's Temperature : ";
				while(!(cin >> Data[j]) || Data[j] < Tmin || Data[j] > Kmax)
				{
					clog << "   Error! give me a number between "<< Tmin  << " and " << Kmax << " : ";
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


outputs(int &index) 
{
	clog << endl;
   	clog << "OutPuts" << endl;
    cout << "The index of the settlement which has the longest period: " << index << endl;
}




int main()
{
	//Declarations
    int N, M, K;
	int indCnt=0;
    int MaxCount = 0;
    int index = -1;
	
	//Inputs
	inputs(N, M, K);
	clog << N << " " << M << " " << K << endl; 
    int n = ((N+1) * (M+1));
	int Data[n];  
	
	//algorithm implemention
	Solution(N, M, K, indCnt, MaxCount, index, &Data[n]);
	
	//Outputs 
	outputs(index);
    return 0;

}








