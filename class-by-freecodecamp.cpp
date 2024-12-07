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
};

int main(){
    Employee emp1, emp2;//creating objects emp1 and emp2 of class Employee
    emp1.Name="Saniya";
    emp1.Company="Microsoft";
    emp1.Age=20;
    emp1.IntroYourself();
    emp2.Name="Sanskriti";
    emp2.Company="Cognizant";
    emp2.Age=19;
    emp2.IntroYourself();
return 0;
}
/*There is a better way of constructing objects and for this we make Constructors.
Here, in class Employee since we do not create any constructor so this class has its own default constructor.
By creating constructor default constructor is removed.*/