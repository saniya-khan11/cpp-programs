/*
In this type of inheritance, more than one subclass is inherited from a single base class. i.e.
 more than one derived class is created from a single base class.
*/
#include<iostream>
using namespace std;
class director{
    public :
    void dname(){
        cout<<"I am Director name."<<endl;
    }
};
class hod1 : public director{
    public :
    void hod1Name(){
        cout<<"I am HOD 1 name."<<endl;
    }
};
class hod2 : public director{
    public :
    void hod2Name(){
        cout<<"I am HOD 2 name."<<endl;
    }
};
class faculty1 : public hod1{
    public :
    void f1Name(){
        cout<<"I am Faculty 1 name."<<endl;
    }
};
class faculty2 : public hod2{
    public :
    void f2Name(){
        cout<<"I am Faculty 2 name."<<endl;
    }
};
class bca : public faculty1{
    public :
    void bcaCourse(){
        cout<<"I am BCA student"<<endl;
    }
};
class bcaAida : public faculty2{
    public :
    void aidaCourse(){
        cout<<"I am BCA-AIDA student"<<endl;
    }
};
int main(){
    bcaAida saniya;
    saniya.dname();
    saniya.hod2Name();
    saniya.f2Name();
    saniya.aidaCourse();
    cout<<endl<<endl;

    bca kashish;
    kashish.dname();
    kashish.hod1Name();
    kashish.f1Name();
    kashish.bcaCourse();
return 0;    
}
