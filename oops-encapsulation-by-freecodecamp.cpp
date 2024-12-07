/*
There are 4 pillars of OOPS :-
1)Encapsulation
2)Abstraction
3)Inheritance
4)Polymorphism

Encapsulation

The idea of Encapsulation is to make data private and anybody outside the class who want to accesss them can go through the
methods which are public to access them.
e.g. like we will create getters and setters to access the data, so that outside the class anybody who want to interact with the
data can use this getters and setters.
*/
#include<iostream>
using namespace std;
class Employee{
    private :
    /*
    The class members declared as private can be accessed only by the member functions inside the class. 
    They are not allowed to be accessed directly by any object or function outside the class. 
    Only the member functions or the friend functions/ friend class are allowed to access the private data members of the class. 
    */
        string Name;
        string Company;
        int Age;
    public :
        //creating method
        void IntroYourself(){
            cout<<"Name - "<<Name<<endl;
            cout<<"Company - "<<Company<<endl;
            cout<<"Age - "<<Age<<endl;
        }
        
        //creating setters
        void setName(string name){
            Name =name;
        }
        void setCompany(string company){
            Company =company;
        }
        void setAge(int age){
            Age =age;
        }

        //creating getters
        string getName(){
            return Name;
        }
        string getCompany(){
            return Company;
        }
        int getAge(){
            return Age;
        }             
        //Creating constructor
        Employee (string name,string company,int age){
            Name =name;
            Company =company;
            Age=age;
        }        

};

int main(){
    Employee emp1("Saniya","Microsoft",20);//creating objects using constructor
    emp1.IntroYourself();
    Employee emp2("Sanskriti","IBM",19);
    emp2.IntroYourself();
    emp1.setAge(18);
    cout<<emp1.getName()<<" is "<<emp1.getAge()<<" years old.";
return 0;
}
