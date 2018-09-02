#include <iostream>
using namespace std;                                    //adding library

int main()
{
    int a,b,c;                                          //asking for numbers
    cout<<"Enter first number:"; 
    cin>>a;
    cout<<"Enter second number:"; 
    cin>>b;
    cout<<"Enter third number:"; 
    cin>>c;                                           
    if(a>b && a>c)                                     //using if else
    {
	cout<<"First number "<<a<<" is the largest";  //giving conditions
    }
   if(b>c && b>a)
{
        cout<<"second number "<<b<<" is the largest";
}
    if(c>a && c>b)
    {
	cout<<"third number "<<c<<" is the largest"; 
    }
    else
{
cout<<"We are checking for largest number.Try again use other numbers";              //we are checking for largest number.so if we put same number it will show this.
}
    return 0;                                                                       // print output if code is correct
}
