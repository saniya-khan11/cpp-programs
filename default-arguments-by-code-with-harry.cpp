/*
Default arguments are those values which are used by the function if we don’t input our value. 
It is recommended to write default arguments after the other arguments.
*/
#include<iostream>
using namespace std;
float empSalary(float basic_salary,float performance=1){
    return basic_salary+basic_salary*(performance/100.0);
}
int main(){
    int salary =10000;
    cout<<"Final salary if their is no performance increase is : "<<empSalary(salary)<<endl;
    cout<<"Final salary if their is performance increase is : "<<empSalary(salary,2)<<endl;
return 0;
}