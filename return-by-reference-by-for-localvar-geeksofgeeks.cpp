/*
Return by reference is a programming concept that allows a function to return a reference to an original 
variable. It can be useful in situations where you want to find which variable a reference should be bound to.
*/
#include<iostream>
using namespace std;
int & returnValue(int &x){
    x=10;
    cout<<"Value of x is : "<<x<<" Address of x is : "<<&x<<endl;
return x;
}
int main(){
    int a;
    a=20;
    cout<<"Value of a is : "<<a<<" Address of a is : "<<&a<<endl;

    int &b=returnValue(a);
    cout<<"Value of b is : "<<b<<" Address of b is : "<<&b<<endl;

return 0;
}