#include<iostream>
#include <limits> // For numeric_limits
using namespace std;
int main()
{
    string str;
    string str_reverse;
    cout<<"Enter the string you want to reverse :- "<<endl;
 
   /*If there was no input operation (like cin >> value) before calling getline, 
   there would have been no leftover characters in the input buffer.
   In this we can directly use getline() without cin.ignore()*/ 

    getline(cin,str);
    cout<<str<<endl;
    for(int i=(str.size())-1;i>=0;i--){
        str_reverse.push_back(str[i]);
    }
    cout<<str_reverse;
    return 0;
}