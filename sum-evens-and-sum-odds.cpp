//Write a C++ program to sum of all even and odd numbers. 
#include<iostream>
using namespace std;
int main(){
    int sum_evens=0,sum_odds=0,n;
    cout<<"Enter a Number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if (i%2==0)
            sum_evens+=i;
        else
            sum_odds+=i;
    }
    cout<<"Sum of even numbers upto "<<n<<" is "<<sum_evens<<endl;
    cout<<"Sum of odd numbers upto "<<n<<" is "<<sum_odds<<endl;
return 0;
}