#include <iostream>
#include <vector>

/*         SEQUENCE -->  SEQUENCE                 */


///count the even number of elements in a list/array/struct/vector, or whatever
///give me all the even numbers in that list as well.
///the algorithm devised for that purpose would be multiple item selection that says give me all the items in a list with a specified attribute
using namespace std;
//can also find the index of each even number usint the same "multiple item selection" 
int const nMax = 1000; 
int main(void)
{
	//declarations
	int N, cnt; //(cnt is the output stuff) //N must be positve and smaller than 1000(nMax);
	int number[nMax];	//the elements of the array must be positive.
	vector<int> resultedList; //this is the output numbers 
	vector<int> resultedList01; //this is the output indecies 
	
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
		cout << i <<":  " ;
		cin >> temp;
		number[i]= atoi(temp.c_str());
		if (error)
			cout << "ERROR! your number must be positve" << endl;
		else
			i++;
	}
	while (error || i <= N);
	
	
	//algrithm implemetation
	cnt = 0; 
	for (int i=1; i<=N; i++)
	{
	    if (number[i] % 2 == 0)
		 {
			 cnt++;                             //Until now it's POA_Counting
			 resultedList.push_back(number[i]); //collect the values, and it's multiple item selection
			 resultedList01.push_back(i);
		 }
	}
	
	//outputs
	cout << "Count of positive Even numbers in the given list is:  " << cnt << endl;
	cout << "Here is the list of all the even numbers: " << endl << "|"; 
	for (auto i = resultedList.begin(); i != resultedList.end(); i++)
		cout << " " << *i << " |" ;
	
	cout << endl << "Here is the list of all the indecies of  even numbers: " << endl << "|"; 
	for (auto i = resultedList01.begin(); i!= resultedList01.end(); i++)
		cout << " " << *i << " |";
	
	return 0;
	
}