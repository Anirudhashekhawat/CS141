#include <iostream>  //including library
using namespace std;

int main()
{
    int year;

    cout << "Enter a year: ";        //enter year
    cin >> year;

    if (year % 4 == 0)               //conditions to be a leap year
  {
    if (year % 100 == 0)
  {
    if (year % 400 == 0)
    cout << year << " is a leap year.";
    else
    cout << year << " is not a leap year.";
  }
    else
    cout << year << " is a leap year.";
  }
    else
    cout << year << " is not a leap year.";

    return 0;                     //output
}
