//including library
#include <iostream>
using namespace std;

	//using function
int countEven(int* p,int size)
{
    int cot=0;
    for(int i=0;i<size;i++)
    {
        if(*(p+i)%2==0)

	// checking conditions to get a even number
        {
            cot++;
        }
    }
    return cot;
}

int main()
{
    int size;
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    int ar[size];
    cout<<"Enter input to array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>ar[i];
    }
    int* p=&ar[0];

		// output of number of even numbers
    cout<<"No. of even numbers:"<<countEven(p,size);
}
