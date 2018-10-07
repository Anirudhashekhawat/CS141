//Write a C++ program to check whether a number is palindrome or not using recursion.

#include <iostream>
using namespace std;

int reverse(int num, int revnum){
	if (num<=0)
		return revnum;	
	
	return reverse(num/10,(revnum*10)+(num%10));        //recursion statement
	
}
                 // Main Method
int main(){
	int n ;	
	cout << "Enter a number : ";	
	cin>>n;
	int rev = reverse(n,0);                   //function call
	if (n==rev)
		cout << "It is a palindrom"<<endl;	 //palindrom check	
	else
		cout << "It is not a palindrom"<<endl;
	return 0;
}
