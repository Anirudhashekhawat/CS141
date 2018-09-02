#include <iostream>                      //adding library
using namespace std;

int main()
{
      int a,b;                          //asking for conditions
      cout<<"Enter first number:"; 
      cin>>a;
      cout<<"Enter second number:"; 
      cin>>b;
        if(a>b)                        //using if and else 
   {
      cout<<"First number "<<a<<" is the largest.";
   }
        if(b>a)
     {
	cout<<"Second number "<<b<<" is the largest.";
    }
       else
        cout<<"we are checking for largest number.";   //if error occurs or we just put same number
    return 0;
}
