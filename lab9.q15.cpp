//including library
#include <iostream>
using namespace std;
int main(){
	char str[11],*p;
	cout<<"Type an input of 10 characters as string"<<endl;
	
           //ASK USER
	cin>>str;
	p=str;

	      // Pointer variable refers to address of string
	
	for(int i=0;i<10;i++){
		for(int j=i+1;j<11;j++){
		cout<<*(p+j-1);
		}
	cout<<endl;
	}
	return 0;
}
