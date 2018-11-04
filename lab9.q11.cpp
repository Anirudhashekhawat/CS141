//including library

#include <iostream>
using namespace std;

int main(){

                 //interger variable
	int a;
	int *a1 =&a;
	 cout<<"The sizes of integer variable is :"<<sizeof(a)<<endl<<"The size of integer pointer variable is :"<<sizeof(a1)<<endl;
             
                //character variable
	char b;
	char *b1 =&b;
	cout<<"The size of character variable is :"<<sizeof(b)<<endl<<"The size of character pointer variable is :"<<sizeof(b1)<<endl;

               //float variable
	float c;
    float *c1 =&c;
    cout<<"The sizes of float variable are :"<<sizeof(c)<<endl<<"The sizes of float pointer variable are :"<<sizeof(c1)<<endl;

              //double variable
	double d;
	double *d1 =&d;
	cout<<"The sizes of double variable is :"<<sizeof(d)<<endl<<"The sizes of double pointer variable is :"<<sizeof(d1)<<endl;

              //boolean variable
	bool e;
	bool *e1 =&e;
    cout<<"The size of bool is : "<<sizeof(e)<<endl<<"The size of bool pointer variable is :"<<sizeof(e1)<<endl;

return 0;
}

