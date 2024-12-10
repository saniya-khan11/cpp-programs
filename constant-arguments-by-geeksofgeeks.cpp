/*
Constant arguments in functions are used to prevent modification of the argument value within the function. 
This is useful when we pass arguments by reference and don’t want the function to change the argument’s value.

Because Passing by reference avoids copying large objects, which can be computationally expensive,
and using const ensures safety while still gaining performance benefits.
*/
#include<iostream>
using namespace std;
void display(const int &a){
    cout<<"The value of a is : "<<a;
}
int main(){
    int x=25;
    display(x);
return 0;
}
