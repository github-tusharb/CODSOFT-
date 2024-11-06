#include<iostream>

using namespace std;

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);

double add(double x, double y){
    return x+y;
}
double subtract(double x, double y){
    return x-y;
}
double multiply(double x, double y){
    return x*y;
}
double divide(double x, double y){
    if ( y==0)
    {
        cout<<"error:divison by zero is not allowed."<<endl;
    }
    
    return x/y;
}
int main(){
    int choice;
    double num1,num2;
    cout<<"Select operation:"<<endl;
    cout<<"1. Addition "<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. multiplication"<<endl;
    cout<<"4. divison"<<endl;
    cout<<"Please select operation : "<<endl;
    cin>>choice;
    if (choice>= 1 && choice<= 5)
    {
        cout<<" Enter first number: ";
        cin>>num1;
        cout<<" Enter second number: ";
        cin>>num2;

        switch (choice)
        {
        case 1:
            cout<<num1<<"+"<<num2<<"="<< add(num1,num2)<<endl;
            break;
        case 2:
            cout<<num1<<"-"<<num2<<"="<< subtract(num1,num2)<<endl;
            break;
        case 3:
            cout<<num1<<"*"<<num2<<"="<< multiply(num1,num2)<<endl;
            break;
        case 4:
            cout<<num1<<"/"<<num2<<"="<< divide(num1,num2)<<endl;
            break;
       
        }
}     else{
        cout<<"......Invalid Input...."<<endl;
    }
    return 0;
}
