#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *b =&a;
    int **c =&b;
    cout << "Address of variable a is : "<<&a<<endl;
    cout << "Address of variable a is : "<<b<<endl;
    cout << "Address of variable a is : "<<*c<<endl;
    cout << "Value stored in variable a is : "<<a<<endl;
    cout << "Value stored in variable a is : "<<*b<<endl;
    cout << "Value stored in variable a is : "<< **c <<endl;
return 0;
}