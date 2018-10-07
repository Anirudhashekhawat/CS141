//Write a C++ program to find factorial of any number using recursion.

#include <iostream>
using namespace std;
int facto(int n){
	if(n==0)
		return 1;
	return n*facto(n-1);   // recursion statement
}
            // Main Method
int main(){
	int n;
	cout << "Enter a number- ";
	cin >> n;
	cout << n<<"! = "<<facto(n)<<endl;       //calling function
	return 0;
}

