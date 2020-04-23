#include <iostream>

/*         SEQUENCE --> SINGLE VALUE                  */


//in the given list we have at least one even number, find what is the even number and its index
//The list must have at least even number. If there is non! it's not gonna work.
using namespace std;


int const nMax = 1000;

int main (void)
{
	//declarations 
	int N, ind, Value; int numbers [nMax]; //N should be positive and smaller than 1000;
	
	
	
	//inputs 
	bool error = false;
	string temp;
	do 
	{
		cout << "N: " ;
		cin >> temp;
		N = atoi(temp.c_str());
		error = (N > nMax || N < 0 ) ;
		if (error)
			cout << "ERROR! you're number should be positive and smaller than 1000." ;
	}
	while (error);
	int cnt = 1;
	do 
	{
		cout << cnt << ".    ";
		cin >> temp;
		numbers[cnt] = atoi(temp.c_str());
		error = (numbers[cnt]<0);
		if (error)
			cout << "ERROR! your number should be positive.";
		else 
			cnt++;
	}
	while (error || cnt <= N);
	
	
	//algorithm implementation
	cnt = 1;
	while (not (numbers[cnt] % 2 == 0))
	{
		cnt++;
	}
	ind = cnt;
	Value = numbers[cnt];
	
	//outputs
	if (cnt > N)
	    cout << "Sorry, :( There should be at least one even number. Use POA_Search for this purpose.";
    else 
	    cout << "Index of the even numbers is: " << cnt << endl << "The number is: " << Value << endl; 
	
}
	