//Write a C++ program to find LCM of two numbers using recursion.

#include <iostream>
using namespace std;
int lcm(int i, int a, int b){	
	if(i%a == 0 && i%b==0)
		return i;
	else
		return lcm(i+1,a,b);               //recursion statement
		
}
	
                        // Main Function
int main(){
	int a,b,i;
	cout<<"lcm(a,b)\nEnter a followed by b : ";	
	cin >> a>>b;
	if (a>b)                            //calling function
		i=a;
	else
		i=b;
	cout << "lcm("<<a<<","<<b<<") = "<<lcm(i,a,b)<<endl;
	return 0;
}

