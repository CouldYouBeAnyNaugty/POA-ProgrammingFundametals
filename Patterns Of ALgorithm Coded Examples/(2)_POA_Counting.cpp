#include <iostream>

/*         SEQUENCE --> SINGLE VALUE                  */


///count the even number of elements in a list/array/struct/class: for simplicity let's go with the array
using namespace std;
int const nMax = 1000; 
int main(void)
{
	//declarations
	int N, cnt; //N must be positve and smaller than 1000(nMax);
	int number[nMax]; //the elements of the array must be positive.
	// we didn't include the attribute function in the includes
	
	//inputs 
	bool error = false;
	string temp;
	do 
	{
		cout<<"N: ";
		cin >> temp;
		N = atoi(temp.c_str());
		error = (N>nMax || N<1);
		if (error)
		{
			cout << "ERROR! your number must be positve and smaller than 1000" << endl;
		}
	}
	while (error);
	int i = 1;
	do 
	{
		cout << i <<":" ;
		cin >> temp;
		number[i] = atoi (temp.c_str());
		if (error)
			cout << "ERROR! your number must be positve" << endl;
		else
			i++;
	}
	while (error || i <= N);
	
	
	//algrithm implemetation
	cnt = 0; int j = 1;
	while (j<=N)
	{
		if (number[j] % 2 == 0)
		{
			cnt++;
		}
		j++; 
	}
	
	//outputs
	cout << "Number of positive Even numbers in the given list is:  " << cnt << endl; 
	
	return 0;
}