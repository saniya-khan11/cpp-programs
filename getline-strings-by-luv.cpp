#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter the number of strings you want to write : ";
    cin>>t;
    while(t--){
        string s;
        cout<<"Enter your string : ";
        getline(cin,s);
        cout<<s<<endl;

    }
}