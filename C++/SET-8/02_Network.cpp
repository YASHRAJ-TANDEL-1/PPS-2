/*  Consider a class network as shown in figure given below. 
    The class Employee derives information from both Account and Admin classes which in turn derive information from the class Person. 
    Define all the four classes and write a program to create, update and display the information contained in Employee objects.*/

#include<iostream>
#include<string.h>
using namespace std;
class person
{
    protected:
            string name;
            int code;
    public:
            void getp()
            {
                cout<<"Name :"<<" ";
                getline(cin,name);
                cout<<"code :"<<" ";
                cin>>code;
            }
            void disp()
            {
                cout<<"Name of the employee :"<<name<<endl;
                cout<<"Code of the employee :"<<code<<endl;
            }
};
class account : virtual public person
{
    protected:
            int pay;
    public:
            void geta()
            {
                cout<<"How much amount to be pay :"<<" ";
                cin>>pay;
            }
            void disa()
            {
                cout<<"Amount payed :"<<pay<<endl;
            }
};
class admin : virtual public person
{
    protected:
            int exp;
    public:
            void getad()
            {
                cout<<"Enter the experience:"<<" ";
                cin>>exp;
            }
            void disad()
            {
                cout<<"Years of Experience :"<<exp<<endl;
            }
};
class employee:public account,public admin
{
    public:
            void display()
            {
                getp();
                geta();
                getad();
                cout<<"-----------------------------"<<endl;
                disp();
                disa();
                disad();
                cout<<"-----------------------------"<<endl;
            }
};
int main()
{
    employee e1;
    e1.display();
    return 0;
}