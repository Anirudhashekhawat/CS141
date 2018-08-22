#include <iostream>
using namespace std;
int main()
{
	float height,base,area;                          //defining variables
	cout <<"Write what is your height -\n";          // giving height
	cin >> height;
	cout <<"Write what is your base -\n";            // giving Breadth
	cin >>base;
	area =(height*base)/2;                           // formula of area
	cout <<"Area is :"<<area<<endl;                  //result
	return 0;
}
