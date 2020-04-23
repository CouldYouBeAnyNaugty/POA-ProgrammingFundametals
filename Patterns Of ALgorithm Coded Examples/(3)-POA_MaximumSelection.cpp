#include <iostream>

/*         SEQUENCE --> SINGLE VALUE                  */


using namespace std;

int const nMax = 100000;

int main(void)
{
	//declarations
	int N, max, maxVal;  //N should be positve
	int numbers[nMax];
	
	//inputs 
	bool error = false;
	string temp;
	do 
	{
		cout << "N:";
		cin >> temp;
		N = atoi(temp.c_str());
		error = (N<=0);
		if (error)
		cout << "Error! N should be positve" << endl;
	}
	while (error);
	int cnt1 = 1;
	do 
	{
		cout << cnt1 <<":  ";
		cin >> temp;
		numbers[cnt1] = atoi(temp.c_str());
		error = (numbers[cnt1]<0 || numbers[cnt1] > nMax);
		if (error)
		    cout << "Error! number should be positve" << endl;
		else 
            cnt1++;
	}
	while (error || cnt1 <= N);
	
	//algrithm implemetation
	max = 1; maxVal = numbers[max];
	for (int i = 2; i <=N ; i++)
	{
		if (numbers[i]> numbers[max])
		{
			max = i;
			maxVal = numbers[i];
		}
	}
	//outputs
	cout << "The index of the maximum number in the give list is:  " << max << endl;
	cout << "The maximum number in the given list is :  "<<maxVal << endl;
	

}