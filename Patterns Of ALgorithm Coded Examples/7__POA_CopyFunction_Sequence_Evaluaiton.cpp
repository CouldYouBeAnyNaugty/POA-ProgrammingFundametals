#include <iostream>

/*         SEQUENCE --> SEQUENCE                 */


///Take square of each element in a vector
using namespace std;

int const nMax= 1000;


int main(void)
{
	//declarations
	int N, input;  //N should be in between 0 and 1000;
	int numbers[nMax]; //there should be only positive numbers
	int resultedList[nMax]; //this stuff is output
	
	//inputs
	bool error = false;
	string temp;
	do 
	{
		cout << "N: ";
		cin >> temp;
		N = atoi(temp.c_str());
		error = (N>1000 || N<1);
		if (error){cout<< "ERROR! Your Number should be in between 0 and 1000." << endl;}
	}
	while (error);
	cout << "Nmbers in the list goes here: " << endl;
	int cnt = 1;
	do
	{  
		cout << cnt << ".  "
		cin >> temp;
		numbers[cnt] = atoi(temp.c_str());
		error = (numbers[cnt]< 0); 
		if (error)
		{
			cout << "ERROR! Your number must be positive. ";
		}
		else 
		    cnt++;
	}
	while (error || cnt <= N);
	//algrithm implemetation
    for (int i = 1; i<= N; i++)
	{
		resultedList[i] = numbers[i] * numbers[i];
	}
	//outputs
	cout << "Here is the resulted list "<< endl;
	for (int i = 1; i<=N; i++)
	{
		cout << resultedList[i] << " | ";
	}
	return 0;
}