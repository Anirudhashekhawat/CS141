#include <iostream>
using namespace std;                               //adding library
int main()
{
        char ch;                                   //declaring variable
	cout<<"Enter a character: ";
	cin>>ch;
	if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))        //conditions
	{
		cout<<ch<<" is an alphabet";
	}
	else
	{
		cout<<ch<<" is not an alphabet";
	}
         return 0;                            //checks code is correct and return value 0
}
