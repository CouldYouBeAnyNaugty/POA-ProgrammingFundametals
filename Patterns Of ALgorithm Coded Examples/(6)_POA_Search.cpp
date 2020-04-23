#include <iostream>

/*         SEQUENCE --> SINGLE VALUE                  */



using namespace std;

//find the first even number from the given list of numbers(it can happen that there is non. First decide, then select)
//in decison, we actually don't care about the index of the number(or we don't even care about the number, we have to just decide if it exists or not) if out goal is to find whether an even number exists or not.
//but if we want to know the first encountered even number, then we use the "POA_Search". 

//So, if we want to know whether whether a number even, we use "POA_Decision"
//If we want whether a number is even or not and what is that number, we use "POA_Search" | see POA_Search, u will find miute change in this one

int const nMax = 1000;

int main (void)
{
	//declarations 
	int N; int numbers [nMax]; //N should be positive and smaller than 1000;
	
	
	
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
	
	//this is the decision part  
	cnt = 0;
	bool exists = false; ///This is the boolean variable that says: "HEY WE HAVE AN EVEN NUMBER!"
	while (cnt < N &&  not(exists)) //repeat [increasing the count and checking if there is even] until your count reach N;
	{
		cnt++; 
		exists = (numbers[cnt] % 2 == 0); //this says "exists" exists only if the numbers[someIndex] is even 
	}//this will check until it arrives the first even element 
	
	//this is the decision part (different)
	bool anotherBooleanVar = false;
	int anotherCount = 1; 
	while (anotherCount <= N && not (numbers[anotherCount] % 2 == 0))
	{
	    anotherCount++;
	}
	anotherBooleanVar = (anotherCount<=N);
	

	
	//outputs (this is a little different from the one in the slides. The if-else is written here in the output while in the slides they were written in the implementation: which is totally fine.)
	
	for (int i = 1; i< 20; i++)
	    cout <<"-";
	    
	cout << endl;
	cout << endl;
	
	if (exists)
	    cout << "YES there is a number in the list that is Even." << endl <<"The index of the number is:  " << cnt << "."<<endl << "The number that is Even in the list is: " << numbers [cnt] << "." << endl;
    else
        cout << "There is no even number.";
        
        
    cout << endl;
	cout << endl;
	
    for (int i = 1; i< 20; i++)
	    cout <<"-";
	    
	cout << endl;
	
	if (anotherBooleanVar)
    {
        cout<<"Yes there is a number in the list that is even." << endl <<"The index of the number is:  " << anotherCount << "."<< endl << "The number that is Even in the list is: " << numbers [anotherCount] << "." << endl;
    }
    else 
        cout << "There is no even number.";
    
  
}