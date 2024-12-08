//A simple student class program in which we have created an array of Student objects.
#include<iostream>
using namespace std;
class Student{
    private:
    int marks[5];
    public : 
    void inputDetails(){
        for (int i=0;i<5;i++)
        {
            cout<<"Enter Subject "<<i+1<<" marks : ";
            cin>>marks[i];
        }
    }
    void displayDetails(){
        cout<<endl;
        for (int i=0;i<5;i++){
        cout<<"Marks in Subject "<<i+1<<" is : "<<marks[i]<<endl;
        }   
    }
    };
    int main()
    {
        Student s[5];
        for(int i=0;i<5;i++){
        cout<<"Enter details for Student "<<i+1<<endl;
        s[i].inputDetails();
        }
        for(int i=0;i<5;i++){
        cout<<"Displaying details for Student "<<i+1<<endl;
        s[i].displayDetails();
        }
    return 0;

    }

