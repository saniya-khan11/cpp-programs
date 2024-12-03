/*Unions are similar to structures but they provide better memory management then structures.  
Unions use shared memory so only 1 variable can be used at a time.

The main thing to note here is that:

-We can only use 1 variable at a time otherwise the compiler will give us a garbage value.
-The compiler chooses the data type which has maximum memory for the allocation.*/
#include<iostream>
using namespace std;
union money
{
    int rice;
    char car;
    float sugar;
};
int main()
{
    union money m1;
    m1.rice=34;
    cout<<m1.rice;
    return 0;
}
/*The main thing to note here is that once we have assigned a value
 to the union field “rice”, now we cannot use other fields of 
 the union otherwise we will get garbage value. */
