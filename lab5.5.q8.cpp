#include <iostream>
using namespace std;                                                                //including library
         int main(){

             int num;                                                              //initalizing variable
                  cout<<"Enter the size of the pattern -"<<endl;                   //Entering size of pattern
                  cin>>num;

         for (int i=0;i<num+1;i++){                                                //conditions for loops
         for (int j=0;j<i;j++)
          {
          cout <<'*';
          }
         cout <<"\n";  
          }
   cout << endl;
 return 0;                                                                         //returns value 0 if code works
}
