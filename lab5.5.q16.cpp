#include <iostream>
using namespace std;                                    //including library
int main()
{
    int i,j,num;                                        //intialising variables
    cout << "Enter size of pattern- ";
    cin >> num;

 
    	for(i=1; i<=num; i++)                           //conditions for loop
    		{ 
       
        	for(j=i; j<num; j++)
        		{
           	 cout << " ";
        		}

        for(j=1; j<=(2*i-1); j++)
        	{
           	 cout << '*';
        	}

        cout << "\n";                                  
    }

    return 0;                                            //returns value 0 if code is correct
}
