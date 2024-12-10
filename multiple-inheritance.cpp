//Write a C++ program to implement multiple inheritances. 
/*
Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes.  
The constructors of inherited classes are called in the same order in which they are inherited. 
Eg: 
(i) A CHILD class is derived from FATHER and MOTHER class
(ii) A PETROL class is derived from LIQUID and FUEL class.
*/
#include<iostream>
using namespace std;
class students{
    
    int studentId;
    string studentName;
    public:
    void studentInfo(){
        cout<<"Name of student : "<<studentName<<endl;
        cout<<"ID of student : "<<studentId<<endl;
    }
    students(string name_value,int id_value) : studentName(name_value), studentId(id_value){} 
};
class courses{
    int courseId;
    string courseName;
    public:
    void courseInfo(){
       cout<<"Name of Course : "<<courseName<<endl;
        cout<<"ID of Course : "<<courseId<<endl;
    }
    courses(string name_value,int id_value) : courseName(name_value), courseId(id_value){} 
};
class university : public students, public courses{
    string uniName;
    public:
    void universityInfo(){
       cout<<"Name of University : "<<uniName<<endl;
    }
    university(string uniname,string studentname,int studentid,string coursename,int courseid) 
    : students(studentname, studentid), courses(coursename,courseid){
        uniName=uniname;
    }
};
int main(){
    university obj("LNCT university","Saniya Khan",191,"BCA AIDA",101);
    obj.universityInfo();
    obj.studentInfo();
    obj.courseInfo();
return 0;
}