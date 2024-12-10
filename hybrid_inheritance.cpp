
/*
Hybrid Inheritance is implemented by combining more than one type of inheritance. 
For example: Combining Hierarchical inheritance and Multiple Inheritance will create 
hybrid inheritance in C++
*/
#include <iostream>
using namespace std;
class language{
    public:
    void python(){
        cout<<"Learn Python."<<endl;
    }
};
class dsa{
    public:
    void algo(){
        cout<<"Learn DSA."<<endl;
    }
};
class student : public language, public dsa{
    public:
    void task(){
        cout<<"Practice Coding."<<endl;
    }
};
class programmer : public student{
    public:
    void aim(){
        cout<<"To become a Programmer!"<<endl;
    }
};
int main(){
    programmer saniya;
    saniya.python();
    saniya.algo();
    saniya.task();
    saniya.aim();

    cout<<endl<<endl;
    student kanika;
    kanika.python();
    kanika.algo();
    kanika.task();

    cout<<endl<<endl;
    dsa senpai;
    senpai.algo();
return 0;
}
