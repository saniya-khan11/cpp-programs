#include<iostream>
using namespace std;
int main()
{
    string str;
    string str_reverse;
    ccout<<"Enter the string :- "<<endl;
 
   /*If there was no input operation (like cin >> value) before calling getline, 
   there would have been no leftover characters in the input buffer.
   In this we can directly use getline() without cin.ignore()*/ 

    getline(cin,str);
    for(int i=(str.size())-1;i>=0;i--){
       str_reverse.push_back(str[i]);
    }
    if(str==str_reverse)
        cout<<"It is a Palindromic string!";
    else    
        cout<<"It is not a Palindromic string!";
    return 0;
}
