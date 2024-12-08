#include<iostream>
using namespace std;
int main()
{
    string str;
    bool check =true;
    cout<<"Enter the string :- "<<endl;
    getline(cin,str);
    for(int i=0;i!=str.size()/2;i++){
        if(str[i]==str[str.size()-1-i]);
        else {
            check=false;
            break;}
    }
    if(check==true)
        cout<<"It is a Palindromic string!";
    else    
        cout<<"It is not a Palindromic string!";
    return 0;
}
