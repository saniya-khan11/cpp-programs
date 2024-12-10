#include<iostream>
using namespace std;
/*
--Call By Value

 void swapNumbers(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
 }
 Call by value is a method in C++ to pass the values to the function arguments. 
 In case of call by value the copies of actual parameters are sent to the formal parameter, 
 which means that if we change the values inside the function that will not affect the 
 actual values. 
 */

//call by pointers
void swapPointers(int *a, int* b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
/*
The major difference is that the pointers can be operated on like adding values whereas 
references are just an alias for another variable.
*/

//call by references using reference variable
void swapReferences(int &x,int &y)
{
   x=x+y;
   y=x-y;
   x=x-y;
}
 int main(){
    int n1=10 ,n2=20;
    
    cout<<"Before swapping, num 1 = "<<n1<<" and num2 = "<<n2<<endl;
    swapPointers(&n1,&n2);
    cout<<"After swapping using pointers, num 1 = "<<n1<<" and num2 = "<<n2<<endl;
    swapReferences(n1,n2);
    cout<<"After swapping using reference variables, num 1 = "<<n1<<" and num2 = "<<n2<<endl;
return 0;
 }