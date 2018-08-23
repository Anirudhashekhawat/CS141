#include<iostream>                      //including library
#include<cmath>                         //including library
using namespace std;

int main()
{
	float P,R,T,CI;                                        //defining variables
	cout<<"Enter Principal, Rate and Time \n: ";           //write values for priciple,rate and time 
	cin>>P>>R>>T;
	CI=P*pow((1+R/100),T) - P;                             //formula for compound intrest
	cout<<"Compound Interest is : "<<CI;
        return 0;
}
