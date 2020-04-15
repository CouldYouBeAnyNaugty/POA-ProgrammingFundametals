#include <iostream>

/*         SEQUENCE --> SINGLE VALUE                  */



//this algorithm will add all the elements inside an array/or a list. 
//NOTE: we can also add all the elements of a struct.
//We can change the sum into product as well just go and change + into * in the last for loop
using namespace std;

int const nMax= 1000;


int main(void)
{
	//declarations
	int N, sum;  //N should be in between 0 and 1000;
	int numbers[nMax]; //there should be only positive numbers
	
	
	//inputs
	bool error = false;
	strin temp;
	int cnt = 1;
	do 
	{
		cout << "N: ";
		cin >> temp;
		temp = atoi(temp.c_str());
		error = (N>1000 || N<1);
		if (error){cout<< "ERROR! Your Number should be in between 0 and 1000." << endl;}
	}
	while (error);
	do 
	{
	   cout<< cnt <<"=>  "; 
	   cin >> temp;
	   numbers[cnt] = atoi(temp.c_str());
	   error = (numbers[cnt]<0);
       if (error) 
			cout<< "ERROR! Your Number should not be negative." << endl;
	   else
		    cnt++;
	} while (error || cnt <= N);
	
	//algrithm implemetation
	
	sum = 0;
	for (int i = 1; i <= N; i++)
	{
		sum = sum + numbers[i];
	}
	//outputs
	cout << "The sum of the given number of list is: " << sum << endl;
	return 0;
}