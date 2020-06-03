#include <iostream>


//this is more of a sorting type algorithm 
//[all the elements with the given attribute goes firs, and all the rest goes after]
int const nMax = 1000;
using namespace std;

//given a list of numbers, separate even numbers in one list and odd numbers in another
//give me the indecies of even numbers in one list and even in the other(make separate lists)

int main (void)
{
	//declarations
	int N, cnt; //(cnt is the output stuff) //N must be positve and smaller than 1000(nMax);
	int number[nMax];	//the elements of the array must be positive.
	bool Exists = false;
	
	
	//inputs 
	bool error = false; string tmp;
	do 
	{
		cout<<"N: ";
		cin >> tmp;
		N = atoi(tmp.c_str());
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
		cout << i <<":  " ;
		cin >> tmp;
		number[i]=atoi(tmp.c_str());
		error = (number[i] < 0);
		if (error)
			cout << "ERROR! your number must be positve" << endl;
		else
			i++;
	}
	while (error || i <= N);
	
	//algorithm implementation 
	int first = 1;
	int last = N; 
	int y = number[first];
	while (first < last)
	{
		while (first<last && number[first] % 2 == 0) //search from back 
		{
			first ++; 
		}
	    Exists = (first < last);
		if (Exists)
		{
			number[first] = number[last];
			first++;
			while (first<last && number[last] % 2 != 0)
			{
				last = last - 1;
			}
			Exists = (first<last);
			if (Exists)
			{
				number[last] = number[first];
				last = last - 1;
			}	
		}
		
		
	}
	number[first] = y;
	if (y%2==0)
	{
		cnt = first;
	}
	else 
	{
		cnt = first-1;
	}
	
	
	//output
	cout << "This is the number of even numbers in the original list: " << cnt << endl;
	cout<<"Here is the modified list: EVEN FIRST AND THEN ODD " << endl <<"| ";
	for (int i = 1; i <= N; i++)
	{
		cout << number[i] << " |";
	}
	
}