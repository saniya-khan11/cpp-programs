/*
Abstraction
-Hiding complex things to so that things appear simple.
-A simple camera buttonon clicking takes picture, this is simple.But its functionality created 
by company is hidden from the users. 
*/
#include<iostream>
using namespace std;
//Let us create AskForPromotion() virtual function inside abstract class
class AbstractEmployee{
    virtual void AskForPromotion()=0;
};
 //Now whichever class will sign contract with AbstractEmployee  i.e inherit the class AbstractEmployee needs to provide
  //implementation of AskForPromotion() function.
class Employee : AbstractEmployee{
    /*
    Class Employee signing contract of AbstractEmployee that means class Employee will provide implementation
    of method AskForPromotion() function
    */
    private :
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

int main(){
    //creating objects using constructor
    Employee emp1("Saniya","Microsoft",20);
    Employee emp2("Sanskriti","IBM",19);
    
    emp1.AskForPromotion();
    emp2.AskForPromotion();
return 0;
}
