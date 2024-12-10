//Write a C++ program to demonstrate single inheritance.
//a class is allowed to inherit from only one class. i.e. one base class is inherited by one derived class only.
#include<iostream>
using namespace std;
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
class students : public courses{
    
    int studentId;
    string studentName;
    public:
    void studentInfo(){
        cout<<"Name of student : "<<studentName<<endl;
        cout<<"ID of student : "<<studentId<<endl;
    }
    students(string studname,int studid,string coursename,int courseid) : studentName(studname), studentId(studid), courses(coursename,courseid){} 
};
int main(){
    students obj("Saniya Khan",191,"BCA AIDA",101);
    obj.studentInfo();
    obj.courseInfo();
return 0;
}