/*
Inheritance
In this we have a Parent class or Base class inherited by a class known as Derived class.
This Derived class can access all the class members of its Parents class which are public and protected.
*/
#include<iostream>
using namespace std;
//Let us create AskForPromotion() virtual function inside abstract class*******part of Abstraction concept.
class AbstractEmployee{
    virtual void AskForPromotion()=0;
};
class Employee : AbstractEmployee{
    /*
    Class Employee signing contract of AbstractEmployee that means class Employee will provide implementation
    of method AskForPromotion() function
    */
    private :
        string Company;
        int Age;
    protected :
    /*
    The protected access modifier is similar to the private access modifier in the sense that 
    it can’t be accessed outside of its class unless with the help of a friend class. 
    The difference is that the class members declared as Protected can be accessed by
     any subclass (derived class) of that class as well. 
    */
   string Name;
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
            if(age>20)
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
        //providing implementation of AskForPromotion()
        void AskForPromotion(){
            if(Age>=20)
            cout<<Name<<" got promoted!"<<endl;
            else
            cout<<Name<<", sorry you do not get promotion!"<<endl;
        }
};

//class Developer : Employee{.....}---inheriting Employee like this will not unable class Developer to access 
// its member methods for this we have to inherit class Employee the ollowing

class Developer : public Employee{
//Class Developer has inherited the class Employee i.e. it is a Derived class of Parent class Employee.
    public:
        string FavProgrammingLang;
        void FixBug(){
            cout<<Name<<" fixes "<<FavProgrammingLang<<" bugs."<<endl;
        }
        //creating constructor for derived class Developer
        Developer(string name,string company,int age,string favProgrammingLang)
        : Employee(name,company,age){
            FavProgrammingLang = favProgrammingLang;
        }
};

class Teacher : public Employee{
//Class Teacher has inherited the class Employee i.e. it is a Derived class of Parent class Employee.
    public:
        string Subject;
        void PrepareLesson(){
            cout<<Name<<" is preparing "<<Subject<<"."<<endl;
        }
        //creating constructor for derived class Teacher
        Teacher(string name,string company,int age,string subject)
        : Employee(name,company,age){
            Subject=subject;
        }
};

int main(){
    //creating objects using constructors
    Developer d= Developer("Saniya","Microsoft",20,"C++");
    Teacher t("Sanskriti","LNCT",35,"History");
    d.FixBug();
    d.AskForPromotion();
    
    t.PrepareLesson();
    t.AskForPromotion();    

return 0;
}

