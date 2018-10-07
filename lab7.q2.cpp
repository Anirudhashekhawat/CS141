// Write a C++ program to print all natural numbers between 1 to n using recursion.

#include <iostream>
using namespace std;
int natnum(int a,int b){
	cout << i<<endl;
	
	if (a==1){                     //conditions
		return 0;	
	}
	
	return natnum(a-1,b+1);          //statement
}

              // Main Method

int main(){
	int a;
	//input
	cout << "Prints 'a'natural numbers.Enter a";
	cin >> a;
	natnum(a,1);                   //calling fuction
	return ;
}
