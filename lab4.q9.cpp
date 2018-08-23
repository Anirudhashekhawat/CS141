


#include<iostream>                                                //including library
using namespace std;

int main()
{
	int p,r,t,i;                                              //defining variable
	cout<<"Enter Principle :\n ";                             //enter your principle amount
	cin>>p;
	cout<<"Enter Rate : \n ";                                 //enter your rate
	cin>>r;
	cout<<"Enter Time : \n";                                  //enter your time
	cin>>t;
	i=(p*r*t)/100;                                           //formula for calculation
	cout<<"Simple interest is : "<<i<<endl;
        return 0;
}


