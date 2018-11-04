//including library
#include <iostream>
#include<cstring>
using namespace std;

// using function pointer in parameter
void revrS(char* p)
{
    int end;
    int count=0;
    // To reverse the string
    for(int i=0;(*(p+i))!='\0';i++)
    {
        count++;
    }
    end=count-1;
    for(int i=end;i>=0;i--)
    {
        cout<<*(p+i);
    }
}

int main()
{
    int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    char arr[size];
    cout<<"Enter input to array"<<endl;
        cin>>arr;
    //calling the function and use of pointer.
    char* p=&arr[0];
    cout<<"reverse"<<endl;
    revrS(p);
    return 0;
}
