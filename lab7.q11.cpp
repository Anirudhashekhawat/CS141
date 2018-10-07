// Write a C++ program to find GCD (HCF) of two numbers using recursion.

#include <iostream>
using namespace std;

int gcd(int factor,int i,int a,int b){	
	if (i>=a||i>=b)
		return factor;
	if (a%i == 0 && b%i == 0 && i > factor)
		return gcd(i,i+1,a,b);
	else
		return gcd(factor,i+1,a,b);   // //recursion statement

		
}
	
                    // Main Function
int main(){	
	int a,b;
	cout<<"gcd(a,b)\nEnter a followed by b : ";	
	cin >> a>>b;
	cout << "gcd("<<a<<","<<b<<") = "<<gcd(1,1,a,b)<<endl;    //calling function
	return 0;
}
