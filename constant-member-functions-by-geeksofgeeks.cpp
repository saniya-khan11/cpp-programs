/*
The const keyword in member functions indicates that the function does not modify any member variables of 
the class. It promises not to modify the object's state, allowing the function to be called on constant 
objects of the class.
--Purpose of const in Member Functions:

#Declaring a member function as const tells the compiler that the function does not (and cannot) 
 modify the state of the object (i.e., its member variables).
#This is useful for ensuring immutability in certain operations, such as accessors (getter functions) 
 that are only meant to retrieve values without altering them.
*/
#include<iostream>
using namespace std;
class myClass{
    private :
    int data;
    public :
    //creating constant member function using const keyword
    void display() const{
        cout<<"Value of data : "<<data<<endl;
    }
    //creating constructor using initializer list
    myClass(int value) : data(value) {}
};
int main(){
    myClass obj(45);
    obj.display();
return 0;
}