#include<iostream>
#include<vector> //header from Standard Templete Library
using namespace std;


//given a vector v. Find the first element which is even


int firstEven(vector<int> v){
	vector<int>::iterator iter1 = v.begin(); //this create an iterator of type vector<int> and had a reference initial element of the vecotor
	while(iter1 != v.end() && *iter1 % 2 != 0){
		*iter1++;
	}
	return *iter1;
}

int lastEven(vector<int> v){
	vector<int>::iterator i = v.end(); //this create an iterator of type vector<int>
	do{
		*i--;
	}while(i != v.begin() && *i % 2 != 0);
	return *i;
}


int main(){
	//given vector
	vector<int> v{1,3,3,3,2,11,1,1,8};
	//first even 
	cout << "first even: " << firstEven(v) << "  |  " ;
	//last enen
	cout << "last even: " << lastEven(v) << endl;
}
