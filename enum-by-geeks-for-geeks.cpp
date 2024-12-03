/*Enumeration (or enum) is a user defined data type in C. 
It is mainly used to assign names to integral constants, 
the names make a program easy to read and maintain.*/
#include <iostream>
using namespace std;
int main()
{
    enum week{mon,tue,wed,thurs,fri,sat,sun};
    week day;
    day=wed;
    cout<<day;
    return 0;
}