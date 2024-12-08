//Write a C++ program to read a string with get line function.
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string : ";
    getline(cin,str);
    cout<<str;
    
return 0;
}