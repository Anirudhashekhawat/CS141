//including library
#include <iostream>
using namespace std;
int main(){
	char name[9]= "Anirudha";
	
	// normal index method
	for(int i=0;i<4;i++){
		cout<<name[i]<<",";
	}
	cout<<endl;

	//pointer method
	char *n=name;
	for(int i=0;i<8;i++){
		cout<<*(n+i)<<",";
		}
	return 0;
}
