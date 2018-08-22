#include <iostream>                                //including library
using namespace std;
int main()
{
	float angle1,angle2,angle3;                               //defining variables
	cout <<"Write what is your angle1 -\n";                  // assigning value for angle2
	cin >> angle1;
	cout <<"Write what is your angle2 -\n";                  // assigning value for angle2
	cin >>angle2;
	angle3 =180-(angle1+angle2);                            // finding third side of triangle
	cout <<"Third angle will be :"<<angle3<<endl;           //result
	return 0;
}
