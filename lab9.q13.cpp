//including library
#include <iostream>
using namespace std;

int main(){
	int arr[10]={1,3,5,7,9,8,6,4,2,10};
	
	// normal index method
	for(int i=0;i<10;i++){
		cout<<arr[i]<<",";
		}
	cout<<endl;

	// pointer method
	int *p= arr;
	for(int i=0;i<10;i++){
		cout<<*(p+i)<<",";
		}

	return 0;
}
