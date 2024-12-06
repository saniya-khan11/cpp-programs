/*Functions are the main part of top-down structured  programming. 
We break the code into small pieces and make functions of that code. 
Functions help us to reuse the code easily.*/
#include<iostream>
using namespace std;
int sum(int a,int b)// a and b are formal parameters.
{
    return a+b;
}
void g()
{
    cout<<"Function may not have return value or parameters or both."<<endl;
}
int main()
{
    int n1=10,n2=10;
    int s= sum(n1,n2);
    cout<<"Sum of "<<n1<<" and "<<n2<<" is "<<s<<endl;
    g();
    return 0;
}
/*
Formal Parameters:
The variables which are declared in the function are called a formal parameter. 
For example, as shown in Code, the variables “a” and “b” are the formal parameters.

Actual Parameters:
The values which are passed to the function are called actual parameters. 
For example, as shown in Code, the variables “n1” and “n2” are the actual parameters.
*/