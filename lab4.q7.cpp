#include <iostream>						//including library
using namespace std;
int main()
{
	float side,area;					//defining variables
	cout <<"Write what is your side -\n";			// assinning side 
	cin >>side;
	area =(side*side*1.7321)/4; 				// formula of area
	cout <<"Area of Equilateral triangle is :"<<area<<endl;	//result
	return 0;
}
