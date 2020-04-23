#include <iostream>
#include <vector>

int const nMax = 1000;
using namespace std;

//given a list of numbers, separate even numbers in one list and odd numbers in another
//give me the indecies of even numbers in one list and even in the other(make separate lists)

int main (void)
{
	//declarations
	int N, cnt; //(cnt is the output stuff) //N must be positve and smaller than 1000(nMax);
	int number[nMax];	//the elements of the array must be positive.
	vector<int> EvenValues; //output list even numbers  
	vector<int> OddValues; //output list odd numbers  
	vector<int> indEven; //output list of indecies of even numbers 
	vector<int> indOdd; // output list of indecies of odd numbers
	
	
	
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
		cout << i <<":" ;
		cin >> tmp;
		number[i]=atoi(tmp.c_str());
		error = (number[i] < 0);
		if (error)
			cout << "ERROR! your number must be positve" << endl;
		else
			i++;
	}
	while (error || i <= N);
	
	
	//algorithm Implementation
	
	cnt = 0; //(if we are working with vectors, we don't need count, but if we are working with arrays, we need it)
	for (int i=1; i<=N; i++)
	{
		if (number[i] % 2 == 0)
		{
			cnt++;
			EvenValues.push_back(number[i]);
			indEven.push_back(i);
		}
		else 
		{
			OddValues.push_back(number[i]);
			indOdd.push_back(i);
		}
	}
	
	//outputs
	cout<<"Here is the list of all the even numbers: " << endl << "| ";
	for (auto i = EvenValues.begin(); i!=EvenValues.end(); i++)
		cout << *i << " |" ;
	cout<<endl<<endl<<"Here is the list of indeces of all the even numbers in the origional list" << endl << "| ";
	for (auto i = indEven.begin(); i!=indEven.end(); i++)
		cout << *i << " |" ;
	cout<<endl<<endl<<"Here is the list of all the odd numbers:" << endl << "| ";
	for (auto i = OddValues.begin(); i!=OddValues.end(); i++)
		cout << *i << " |" ;
	cout<<endl<<endl<<"Here is the list of indeces of all the odd numbers in the origional list" << endl << "| ";
	for (auto i = indOdd.begin(); i!=indOdd.end(); i++)
		cout << *i << " |" ;
	cout << endl;
}