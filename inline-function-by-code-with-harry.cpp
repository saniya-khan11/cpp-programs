/*
Inline functions are used to reduce the function call. 
When one function is being called multiply times in the program it increases the execution time,
so inline function is used to reduce time and increase program efficiency. 

If the inline function is being used when the function is called, the inline function expands the 
whole function code at the point of a function call, instead of running the function. 
Inline functions are considered to be used when the function is small otherwise it will not perform well. 
Inline is not recommended when static variables are being used in the function.
*/
#include<iostream>
using namespace std;

//creating inline function
inline int sum(int *a, int *b){
    return *a+*b;
}
int main(){
    int a=10,b=20;
    cout<<"Sum is : "<<sum(&a,&b);
return 0;
}

