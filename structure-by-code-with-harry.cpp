#include<iostream>
using namespace std;
struct student
{
    int roll;
    char grade;
    float percent;
};
typedef struct employee// typedef is used for creating alias for structure variable employee
{
    int id;
    char performance;
    float salary;
}ep;
int main()
{
 struct student saniya;
 ep sana;
 //inserting data in structure variable saniya
 saniya.roll =191;
 saniya.grade='A';
 saniya.percent=99;
 //inserting data in sturcture variable sana
 sana.id=101;
 sana.performance='A';
 sana.salary=100000;
 cout<<"saniya.roll = "<<saniya.roll<<endl<<"saniya.grade = "<<saniya.grade<<endl<<"saniya.percent = "<<saniya.percent<<endl;
 cout<<"sana.id = "<<sana.id<<endl<<"sana.performance = "<<sana.performance<<endl<<"sana.salary = "<<sana.salary<<endl;
 return 0;
 
}