#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter the number of strings you want to write : ";
    cin>>t;
    cin.ignore();//To clear the input buffer and get right results.
    while(t--){
        string s;
        cout<<"Enter your string : ";
        getline(cin,s);
        cout<<s<<endl;

    }
}