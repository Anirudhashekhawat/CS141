//Write a C++ program to find sum of digits of a given number using recursion.

#include <iostream>
using namespace std;
int sumD(int num){
	if(num<=0){
		return 0;	
	}
	return num%10 + sumD(num/10);      //recursion statement
}
               // Main Method
int main(){
	int num;
	cout << "Enter a number : " ;
	cin >> num;
	cout << "The sum of the digits is = "<<sumD(num)<<endl;           //calling function
	return 0;
}
