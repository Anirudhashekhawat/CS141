 //Write a C++ program to find sum of all natural numbers between 1 to n using recursion.

#include <iostream>
using namespace std;
int sumn(int end , int sum){
	if (end <=0){
		return 0;	
	}
	
	return sum + sumn(end-1,sum+1);          //recursion statement
}
               // Main Method
int main(){
	int n;
	cout << "Sum upto 'n' numbers\nEnter n-";
	cin>>n;
	cout<<sumn(n,1)<<endl;         //calling function
	return 0;
}
