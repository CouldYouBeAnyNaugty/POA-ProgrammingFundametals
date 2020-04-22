#include <iostream>

int const nMax = 1000;

struct Employee
{
	int A;
	int S;
};
typedef Employee newType[nMax];

using namespace std;

int main (void)
{
	//Declaration
	int N, L, youngEmplees[N]; //L is the agelimit 
	newType inputEmployees;
	//inputs 
	cin >> N; 
	cin >> L;
	for (int i=1; i<=N; i++)
	{
		cin >> inputEmployees[i].A;
		cin >> inputEmployees[i].S;
	}
	
	//Algorithm implementation
	int cnt = 0;
	for (int i = 1; i<=N; i++)
	{
		if (inputEmployees[i].A < L)
		{
			cnt++;
			youngEmplees[cnt] = i;
		}
	}
	
	
	
	
	//outputs
	cout << cnt << " ";
	for (int i = 1; i<=cnt; i++)
	{
		cout << youngEmplees[i] << " ";
	}
	
	
	
	
	
	
	
}