//Write a C++ program to find reverse of any number using recursion.

#include <iostream>
using namespace std;

int rev(int num, int revnum){
	if (num<=0)
		return revnum;	
	return rev(num/10,(revnum*10)+(num%10));        //recursion statement	
	
}
                  // Main Method
int main(){
	int n ;	
	cout << "Enter a number : ";	
	cin>>n;
	cout<<"The reverse is = "<<rev (n,0)<<endl;           //function calling
	return 0;
}
	
