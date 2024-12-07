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
        3)Constructor shoul be define inside public access modifier. */
        Employee (string name,string company,int age){
            Name =name;
            Company =company;
            Age=age;
        }        

};

int main(){
    Employee emp1=("Saniya","Microsoft",20);//passing values to constructor
    emp1.IntroYourself();
    Employee emp2 =("Sanskriti","IBM",19);
    emp2.IntroYourself();
return 0;
}
/*There is a better way of constructing objects and for this we make Constructors.
By creating constructor default constructor is removed.*/