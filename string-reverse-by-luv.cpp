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
       //str_reverse+=str[i];----this is not more correct way to reverse string as it adds a single character to the string.
       //Using push_back() is more appropriate
       str_reverse.push_back(str[i]);
    }
    cout<<str_reverse;
    return 0;
}
/*
How push_back() Works
For std::string:

Adds a single character to the end of the string.
Increases the length of the string by one.
Updates the string in place.
For std::vector:

Appends a new element to the end of the vector.
Increases the size of the vector dynamically (allocates more memory if needed).
*/

