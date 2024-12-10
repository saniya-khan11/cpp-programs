#include<iostream>
using namespace std;
 //declaring global variable
 /*
 As We should never return a local variable as a reference, reason being, as soon as the functions returns, 
 local variable will be erased, however, we still will be left with a reference which might be a security 
 bug in the code.
 */
 int x;
// Function returns as a return 
// by reference
 int & retByRef(){
    return x;
 }
 int main(){

// Function Call for return 
// by reference
 
    retByRef()=20;
    cout<<"Value of x is : "<<x<<endl;
return 0;
 }