/*Write a C++ program to accept the length of all 3 sides of the triangle 
and then display whether a triangle is a right angled triangle or not. 
Sample input/output statements are given below: */


#include <iostream>
using namespace std;

int main(void)
{
	int length01, length02, length03;
	cout << "Enter Length01: "<< endl;
	cin >> length01;
	cout << "Enter length02: " << endl;
	cin >> length02;
//	do
//	{
	    cout << "Enter hypotenuse " << endl;
	    cin >> length03;
//	}while (length03 < length01+length02);
    length03 = length03 * length03;
	length01 = length01 * length01;
	length02 = length02 * length02; 
	if (length03 == length02 + length01)
	{
		cout<< "Yes the triangle is a right angle triagle" << endl;
	}
	else 
	{
		cout<< "Your triangle is not a right angle triangle" << endl; 
	}
	return 0;
}