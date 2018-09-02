#include <iostream>
using namespace std;                          //adding library
int main()
{
int num;                                     //declaring variable
cout <<"Enter your number\n";                //conditions for code
cin >>num;
if(num%5==0 && num%11==0)
{
cout<<" this number is divisible by 5 and 11";
}
else{
cout <<" this number is not divisible by 5 and 11";
}
return 0;                                   //checks code is correct and return value 0
}
