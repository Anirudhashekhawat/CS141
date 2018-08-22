#include <iostream>
using namespace std;
int main()
{
	float centimeter,meter,kilometer;                                              //defining variables
	cout <<"Write what is your lenght in centimeter -\n";                          // assigning value of centimeter for conversion
	cin >> centimeter;
	meter =(centimeter)/100;                                                       // formula for conversion of centimeter into meter
	cout <<" Conversion for centimeter to meter is :"<<meter<<endl;                //output
        kilometer=(centimeter)/1000;                                                   // formula for conversion of centimeter into kilometer
        cout <<" Conversion for centimeter to kilometer is :"<<kilometer<<endl;        //output
	return 0;
}
