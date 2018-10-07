//Write a C++ program to find power of any number using recursion.

#include <iostream>
using namespace std;
int power(int x, int n){
	// terminating condition	
	if (n==0)
		return 1;
	return x*power(x,n-1); //recursion statement
}

               // Main Method

int main(){	
	int x,n;
		cout << "power is x^n  : ";
		cin>>x>>n;      //fuction calling
		cout <<x<<"^"<<n<<" = "<<power(x,n)<<endl;
		return 0;
}
