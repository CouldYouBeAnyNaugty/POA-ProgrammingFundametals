#include<iostream>
#include<vector> //header from Standard Templete Library
using namespace std;

/**
*	Several way to initialize a vecotor
*  > vector<DataType> NAME; then push_back(n); wehre n is of type DataType
*  > vector<DataType> NAME{n1, n2, n3}; | n1, n2, n3, are of type DataType
*  > vector<DataType> NAME(n, N); | n is of type int and N is of type DataType | It says, "create a vector of type DataType which has N, n times"
*  > DataType arr[n] = {n1...n}; | it's an array, and now you can add this array to a vector; > vector<DataType> NAME(arr, arr + n);
*  > vector<DataType> NAME(anotherVector.being(), anotherVecotor.end()); | you can add another vector too 
*  > Using assing() method from the class vector 
*  > vector v<DataType> v; v.assign(n, N); n copies of N, it will destroy alreading existing values of the vector
*  
* NOTE: after defining or declaring a vector, you can add any element of the same data type by simply called the push_back(); and honestly, most of the cases, we need an empty vecoty and we fill it out by pushing_back the values. 
**/

void print(vector<int> v);

int main(){
	//METHOD 1: push_back elements;
	vector<int> v1; 
	for(int i = 0; i < 5; i++){
		v1.push_back(i);
	}
	cout << "V1: \t";
	print(v1);
	
	
	//METHOD 2: Add elements of your choice like an array
	vector<int> v2{1,4,5,6};
	cout << "V2: \t";
	print(v2);
	
	//METHOD 3: N n times 
	size_t n = 10; //better to use (size_t) one instead of int | it can't be -ve
	int N;
	n = N = 10;
	vector<int> v3(n,N);
	cout << "V3: \t";
	print(v3);
	
	//METHOD 4: create and array and add that to a vector (this might soound naive at first, but in some problems, it is used.)
	int arr[] = {11,22,32,44};
	int SIZE = sizeof(arr)/sizeof(arr[0]); //compute the size because an array might be dynamic in c++;
	vector<int> v4(arr, arr+SIZE);
	cout << "v4: \t";
	print(v4);
	
	//METHOD 5; add a vector to the vecotor
	vector<int> v5(v4.begin(), v4.end());
	cout << "v5 \t";
	print(v5);
	
	//METHOD 6; using assing() method
	//assign() can also be used to copy one vector to another completely by using it as v.assign(vector.begin(), vector.end());
	n = 10; N = 42; 
	v1.assign(n, N); // we one now has 10 copies of 42
	cout << "V1 gain: \t";
	print(v1);
}

void print(vector<int> v){
	//range based for loop
	for(int i: v){
		cout << i << " ";
	}
	cout << endl;
}
