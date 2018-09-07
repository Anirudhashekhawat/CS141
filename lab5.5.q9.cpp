#include <iostream>
using namespace std;                                                             	   //including library


int main(){
	int num;                                                              			//initalizing variable
	cout<<"Enter the size of the pattern -"<<endl;                   		//Entering size of pattern
	cin>>num;
	for (int i=0;i<=num;i++){
		for(int j=0;j<num;j++){
			cout <<" " ;
		}
		for (int j=1;j<=(2*i)-1;j++){
			if (i==num || j ==1 ||j==(2*i)-1)
				cout <<'*';
			else
				cout <<" ";
		}
		cout <<"\n";
	}
	return 0;                                                                         //returns value 0 if code works
}
