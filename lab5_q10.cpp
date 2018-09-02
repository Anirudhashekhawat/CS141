

#include<iostream>                          //including library
using namespace std;

int main()
{
  char chr;                                //variable declaration

    cout << "Enter any character: ";      //entering number
    cin >> chr;

 	if(chr >= 'a' && chr <= 'z')     //conditions 
    {
        cout << chr<< " is lowercase alphabet.: ";
    }
    else if(chr >= 'A' && chr <= 'Z')          
    {
        cout << chr<< " is uppercase alphabet.: ";
    }
    else
    {        
        cout << chr<< " is not an alphabet.: ";       
    }

    return 0;                       //return 0 checks code is fine or not
}
