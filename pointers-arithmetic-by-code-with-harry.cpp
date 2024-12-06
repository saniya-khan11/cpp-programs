#include<iostream>
using namespace std;
int main()
{
    int marks[]={10,20,40,50};
    int *p ;
    p=marks;
    //marks is the starting address that is the value at pointer p will give the
    //value stored at index 0 of marks array
    cout<<"Value at marks [0] is : "<<*p<<endl;
    cout<<"Value at marks [1] is : "<<*(p+1)<<endl;//this give the value at index 1 of array marks.
    cout<<"Value at marks [2] is : "<<*(p+2)<<endl;
    cout<<"Value at marks [3] is : "<<*(p+3)<<endl;
    cout<<endl<<"Printing values using for loop :-"<<endl;
    //changing one of the value of array using pointer
    p[2]=5;
    for (int i=0;i<4;i++)
    {
        cout<<"Value at marks["<<i<<"] is : "<<*(p+i)<<endl;
    }
    
return 0;
}