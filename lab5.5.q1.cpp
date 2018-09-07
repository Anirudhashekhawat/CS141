#include <iostream>
using namespace std;                                                                //including library
         int main(){

             int num;                                                              //initalizing variable
                  cout<<"Enter the size of the pattern -"<<endl;                   //Entering size of pattern
                  cin>>num;

         for (int i=0;i<=num;i++){                                                //conditions for the loop
 
       for (int j=1;j<=num;j++){
        cout<<"*";
    }
       cout <<" "<<endl;  
     }          
      return 0;                                                                  //returns to 0 if code is correct
     }
