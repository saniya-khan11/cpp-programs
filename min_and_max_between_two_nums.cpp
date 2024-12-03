/*Write a C++ program to find minimum and maximum of two numbers using 
functions. */
#include<iostream>
using namespace std;
int minNum(int a,int b)
{
    if (a<b)
        return a;
    else
        return b;
}
int maxNum(int a,int b)
{
    if(a>b)
        return a;
    else 
        return b;
}
int main()
{   int a,b,min,max;
    cout<< "Enter two numbers : ";
    cin>>a>>b;
    min= minNum(a,b);
    max =maxNum(a,b);
    cout<<endl<<"The minimum number is : "<<min;
    cout<<endl<<"The maximum number is : "<<max;
    return 0;
}