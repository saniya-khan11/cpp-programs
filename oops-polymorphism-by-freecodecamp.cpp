/*
Polymorphism
The most common use of polymorphism is when a Parent class reference is used to 
refer to a Child class object.
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
        //Introducing polmorphism through virtual function Work()
        virtual void Work(){
            cout<<Name<<" is checking emails, task backlogs, fixing bugs,....."<<endl;
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
        //creating Developer class member function Work()
        void Work(){
            cout<<Name<<" is "<<FavProgrammingLang<<" programmer."<<endl;
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

        //creating Teacher class member function Work()
        void Work(){
            cout<<Name<<" is teaching "<<Subject<<endl;
        }
};
class Pilot : public Employee{
    public:
        string Flight;
        //creating constructor
         Pilot(string name,string company,int age,string flight)
        : Employee(name,company,age){
            Flight = flight;
        }
}; 

int main(){
    //creating objects using constructors
    Developer d= Developer("Saniya","Microsoft",20,"C++");
    Teacher t("Sanskriti","LNCT",35,"History");
    Pilot p("Kashish","Indigo",40,"A320 NEO");

    //Creating Base class pointers   
    /*
    Since, The most common use of polymorphism is when a Parent class reference is used to 
    refer to a Child class object.
    */
    Employee* e1 =&d;
    Employee* e2 =&t;
    Employee* e3 =&p;

    e1->Work();
    e2->Work();
    e3->Work();

return 0;
}
/*
explanation:-
Virtual function Work() created in parent class Employee whenever is envoked says
"Hey, Can you please check if the implementation of this function is present in my 
Derived class, if so then please execute it." and in this way Polymorphism works!
*/
