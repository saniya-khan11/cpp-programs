//Write a C++ program to calculate the average of three numbers.
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    float avg;
    cout<<"Enter three numbers : ";
    cin>>n1>>n2>>n3;
    avg=float(n1+n2+n3)/3;
    cout<<"The average of three numbers :"<<avg;
    return 0;
}