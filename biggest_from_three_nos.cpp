//Write a C++ program to find the biggest of three numbers. 
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter three numbers :";
    cin>>n1>>n2>>n3;
    if(n1>n2 && n1>n3)
    {
        cout<<n1<<" is the biggest number.";
    }
    else if(n2>n1 && n2>n3)
    {
        cout<<n2<<" is the biggest number.";
    }
    else
    {
        cout<<n3<<" is the biggest number.";
    }
    return 0;
}