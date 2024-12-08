/*
Write a C++ program to define a Student class with attributes for name, marks (for 5 subjects), 
total, and average. 
The program should allow the user to input student details, calculate the total and average marks, 
and display the details for n students.
*/
#include<iostream>
using namespace std;
// Subject list as a constant array
const string subjects[5] = {"Maths", "Statistics with Python", "DBMS", "R", "C++"};
class Student{
    private :
    string name;
    int marks[5];
    float total;
    float average;
    public :

    void inputDetails(){
        cin.ignore();// To clear the input buffer.
        cout<<"Enter name of the Student : ";
        getline(cin,name);
        for (int i=0;i<5;i++)
        {
            cout<<"Enter Marks in "<<subjects[i]<<" Subject : ";
            cin>>marks[i];
        }
    }
    float calcTotal(){
        total =0;
        for(int i=0;i<5;i++){
            total+=marks[i];
        }
        return total;
    }
    float calcAvg(){
        average=total/5;  
        return average;   
    }
    void displayDetails(){
        cout<<endl;
        cout<<endl<<"Details of "<<name<<" :-"<<endl;
        for (int i=0;i<5;i++){
        cout<<"Marks in "<<subjects[i]<<" subject is : "<<marks[i]<<endl;
        }   
        cout<<"Total marks : "<<calcTotal()<<endl;
        cout<<"Average marks : "<<calcAvg()<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter the number of Students for which you want to enter details : ";
    cin>>n;
    Student s[n];// Creating an array of n Student objects
    //for taking input of n students
    for (int i=0;i<n;i++)
    {   cout<<endl<<"Enter details of Student "<<i+1<<" :-"<<endl;
        s[i].inputDetails();
    }
    //for displaying details of n students
    cout<<endl<<"Displaying details of all the "<<n<<" students :-";
    for(int i=0;i<n;i++)
    {
        s[i].displayDetails();
    }
return 0;
}