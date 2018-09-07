#include <iostream>
using namespace std;                                                                //including library
         int main(){

             int num;                                                              //initalizing variable
                  cout<<"Enter the size of the pattern -"<<endl;                   //Entering size of pattern
                  cin>>num;

         

	for (int i=1;i<=num;i++)
	{                                                //conditions for the loop
		for (int j=1;j<=num;j++)
		{
			if(i==1||i==num)
			cout<<'*';
			else
			if(j==1||j==num)
			cout<<'*';
			else
			cout<<' ';

    		}
		cout<<endl;
	}          
      	return 0;                                                                  //returns to 0 if code is correct
}
