//Write a C++ program to generate nth Fibonacci term using recursion.

#include <iostream>
using namespace std;
int fib(int end,int i,int p){
	cout << i+p<<endl;
	if (end ==0){
		return 0;	
	}
	return i + fib (end-1, i+p,i);        //recursion statement
}
            // Main Method
int main(){
	int n;
	cout << "Enter the number of terms : ";
	cin >> n;
	cout <<"1\n1\n";
	fib(n-2,1,1);                  //calling function
	return 0;
}

