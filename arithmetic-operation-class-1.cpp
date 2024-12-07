//Write a C++ program to perform arithmetic operations using classes and objects. 
#include<iostream>
using namespace std;
class ArithmeticOperations{
    private:
        float num1;
        float num2;
    public:
        float Addition()
        {
            return num1+num2;
        }
        float Subtraction(){
            return num1-num2;
        }
        float Multiplication(){
            return num1*num2;
        }
        float Division(){
            if (num2 == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0; 
            }
            return num1/num2;
        }
        //creating setter for num1
        void setNum1(float  n){
            num1=n;
        }
        //creating setter for num2
        void setNum2(float  n){
            num2=n;
        }
        //creating getter for num1
        float getNum1(){
            return num1;
        }
        //creating getter for num2
        float getNum2(){
            return num2;
        }
};
int main(){
    ArithmeticOperations a;
    a.setNum1(20);
    a.setNum2(5);
    cout<<"Addition = "<<a.Addition()<<endl;
    cout<<"Subtraction = "<<a.Subtraction()<<endl;
    cout<<"Multiplication = "<<a.Multiplication()<<endl;
    cout<<"Division = "<<a.Division()<<endl;
    return 0;
}