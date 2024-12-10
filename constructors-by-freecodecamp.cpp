#include<iostream>
using namespace std;
class Employee{
    public:        /*public is access modifier.
                    All the class members declared 
                    under the public specifier will be available to everyone.*/
        string Name;
        string Company;
        int Age;

        //creating method
        void IntroYourself(){
            cout<<"Name - "<<Name<<endl;
            cout<<"Company - "<<Company<<endl;
            cout<<"Age - "<<Age<<endl;
        }
        /*Creating constructor
        for creating constructor 3 rules must be followed :-
        1) Constructor should not have any return type.
        2) Constructor name should be same as its class.
        3)Constructor shoul be define inside public access modifier. 
        
        The following constructor is known as Parameterized constructor.
        Employee (string name,string company,int age){
            Name =name;
            Company =company;
            Age=age;
        }        
*/
//This can also be written using an initializer list for better performance and cleaner code:

Employee (string name,string company,int age) : Name(name), Company(company), Age(age) {}

//Both approaches work, but the initializer list is preferred for efficiency and clarity, 
//especially when dealing with complex data types or inheritance.
};

int main(){
    Employee emp1= Employee("Saniya","Microsoft",20);//passing values to constructor
    emp1.IntroYourself();
    Employee emp2 = Employee("Sanskriti","IBM",19);
    emp2.IntroYourself();
return 0;
}
/*There is a better way of constructing objects and for this we make Constructors.
By creating constructor default constructor is removed.*/