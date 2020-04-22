#include <iostream>
using namespace std;
/*
The first line of the standard input contains the count of people (1≤N≤100).
The next N lines contain the birth year (1900≤Y≤2014), month (1≤M≤12) and day
(1≤D≤30) of the given person.
*/

struct personalDetails{
	int Y;  //birth year
	int M;  //birth month
	int D;  //birth Day
}; typedef personalDetails Indexing[1000];

int main (void)
{
    // declarations
    int N; 
	int currentYear = 2020;
	Indexing Arr, age;
	int Days[1000];


	// inputs
	cin >> N;
    for (int i = 0; i < N; i++)
	{   
		cin >> Arr[i].Y;
		cin >> Arr[i].M;
		cin >> Arr[i].D;
	}

	//
	for (int i = 0; i < N; i++)
	{
		age[i].Y = currentYear - Arr[i].Y;
		age[i].M = 12 - Arr[i].M;
		age[i].D = 30 - Arr[i].D;
	}
	for (int i = 0; i < N; i++)
	{
		Days[i] = 365 * (age[i].Y) + 30 * (age[i].M) + age[i].D; 
	}
	int oldestPersonIndex = 0;
	for (int i = 1; i < N; i++)
	{
		if (Days[i] > Days[oldestPersonIndex])
		{
			oldestPersonIndex = i;
		}
		else if (Days[i] == Days[oldestPersonIndex])
		{
			oldestPersonIndex = oldestPersonIndex;
		}
	}

	///ouputs
	cout << oldestPersonIndex + 1<< endl;


}
