#include <iostream>
using namespace std;                //adding library
int main()
{
        char ch;                                    //declaring variable
	cout<<"Enter a character: ";
	cin>>ch;
	if((ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u') || (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'))       //conditions
	{
		cout<<ch<<" IT IS A VOWEL";
	}
	else
	{
		cout<<ch<<" IT IS NOT VOWEL";
	}
    return 0;                        //checks code is correct and return value 0
} 
