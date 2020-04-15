#include <iostream>

/*         SEQUENCEs --> SINGLE SEQUENCEs                  */
///Intersection (most comprehensive algorithm, based on set theory)

using namespace std;

int const nMax = 100000;


bool isTheList_a_Mathematical_set(int arr[], int &num)
{
	for (int i=0; i<num; i++)
	{
		for (int j=i; j<num; j++)
		{
			if (arr[i] == arr[j+1])
			{
				return false;
			}
		}
	}
	return true;
}

int main(void)
{
	//declarations
	int N, M; //N should be positve
	int list01[nMax];
	int list02[nMax];
	int resultedList[nMax];
	
	//inputs 
	bool error = false;
	string temp;
	do 
	{
		cout << "How many numbers do you have in the first list? N:  ";
		cin >> temp;
		N = atoi(temp.c_str());
		error = (N<=0);
		if (error)
		cout << "Error! N should be positve" << endl;
	}
	while (error);
	int cnt1 = 1;
	do 
	{
		cout << cnt1 <<":  ";
		cin >> temp;
		list01[cnt1] = atoi(temp.c_str());
		error = (list01[cnt1]<0 || list01[cnt1] > nMax);
		if (error)
		    cout << "Error! number should be positve" << endl;
		else 
            cnt1++;
	}
	while (error || cnt1 <= N);
	do 
	{
		cout << "How many numbers do you have in the second list? M:  ";
		cin >> temp;
		M = atoi(temp.c_str());
		error = (M<=0);
		if (error)
		cout << "Error! M should be positve number" << endl;
	}
	while (error);
	cnt1 = 1;
	do 
	{
		cout << cnt1 <<":  ";
		cin >> temp;
		list02[cnt1] = atoi(temp.c_str());
		error = (list02[cnt1]<0 || list02[cnt1] > nMax);
		if (error)
		    cout << "Error! number should be positve" << endl;
		else 
            cnt1++;
	}
	while (error || cnt1 <= M);
	int cnt = 0;
	bool firstCheck = isTheList_a_Mathematical_set(list01, N);
	bool secondCheck = isTheList_a_Mathematical_set(list02, M);
	if (not firstCheck)
	{
		cout<<"Sorry, your first list is not a mathematical set."; //This is also the ouput part, but for the sake of readiblity 
	}
	else if (not secondCheck)
	{
		cout << "Sorry, your second list is not a mathematical set " ; //This is also the ouput part, but for the sake of readiblity
	}
	else 
	{
		for (int i = 1; i<=N; i++)
		{
			int j = 1;
			while (j <= M && list01[i] != list02[j])
			{
				j++;
			}
			bool exists = (j<=M);
			if (exists)
			{
				cnt++;
				resultedList[cnt] = list01[i];
			}
			
		}
		///Outputs 
		cout << "The elements in the resulted list are: " << cnt << endl;
	    cout << "Here is the list of Intersection between the firstList and the secondList: " << endl << "| " ;
	    for (int i=1; i<=cnt; i++)
	    {
		    cout << resultedList[i] << " | ";
	    }
	    
	}
	return 0;
	
}