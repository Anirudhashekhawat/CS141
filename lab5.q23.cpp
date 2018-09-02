#include <iostream>                         //adding library
using namespace std;
int main()
{
int n,sum =0;                               //declaring variables
cout <<"Enter your number";
cin >>n;
for(int i=n;i>=1; i--){                     //conditions
 sum+=i;
}
cout << "Sum = " << sum;
return 0;                                   // //checks code is correct and return value 0
}
