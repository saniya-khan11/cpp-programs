#include<iostream>
using namespace std;
int main()
{
    int marks[]={45,8,78,90};
    cout<<marks[0]<<endl;
    int age[4];
    age[0]=10;
    age[1]=20;
    age[3]=30;
    age[4]=40;
    //printing the values of array using for loop
    //printing integer array marks
    for(int i=0;i<4;i++)
    {
        cout<<"The value of marks["<<i<<"] is :" <<marks[i]<<endl;
    }
    return 0;
}