/*
11. Write a C++ program to implement a class called Employee that has private  
member variables for name, employee ID, and salary. Include member functions to  
calculate and set salary based on employee performance. Performance is in the  
scale of 5, 10, 15, 20. And final salary will be the performance percentage  
increment.   
For eg: If basic salary is 2000 and performance is 20 the final salary will be 20%  
more than the basic salary. 
*/
#include<iostream>
using namespace std;
class employee{
    private:
        string name;
        int employeeId;
        float salary;
    public:

        float setSalary(float performance){
            salary+=(performance/100.0)*salary;//setting final salary based on performance;
            return salary;
        }
        //creating constructor
        employee(string n,int id,float s){
            name=n;
            employeeId=id;
            salary=s;
        }
};
int main(){
    string name;
    int id;
    float salary;
    int p;//for taking input of performance of employee
    //Taking the user input for name, employeeId and salary
    cout<<"Hello User"<<endl;
    cout<<"Please enter the following details :-"<<endl;
    cout<<"Enter Employee name : ";
    getline(cin,name);//Since there is no previous cin value input therefore I am not using cin.ignore() before getline()
    cout<<"Enter Employee ID : ";
    cin>>id;
    cout<<"Enter Basic salary of "<<name<<" : ";
    cin>>salary;
    employee emp(name,id,salary);
    
    while(true){
    cout <<"Enter the performance of employee on scale of 5, 10, 15 and 20 : ";
    cin>>p;
    if(p<=20 && p%5==0 && p>0){
        cout<<"The final salary is : "<<emp.setSalary(p)<<endl;
        break;
    }
    else
    cout<<"The performance rating is not valid!";
    }
return 0;
}