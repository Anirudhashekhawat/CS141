//including library
#include <iostream>
using namespace std;

int main(){
	//integer variable
	int a =2,b=3;
	int *p;
	 p=&a;
	 b=*p;

	//print a
	cout<<a<<endl;

	//print b
	cout<<b<<endl;

	//print p
	cout<<*p<<endl;
	a =2,b=3;

	//assigning pointer p to b
	p=&b;

	//print a
	cout<<"value of a after assigning:"<<a<<endl;

	//print b
	cout<<"value of b after assigning:"<<b<<endl;

	//print p
	cout<<"value of *p :"<<*p<<endl;
return 0;
}
