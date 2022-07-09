/* Create classes as shown in figure. Write a program to create, update
    and display information using inheritance */

#include<iostream>
#include<iomanip>
using namespace std;
class student
{
    protected:
            int roll;
    public:
            void get()
            {
                cout<<"Roll No. :"<<" ";
                cin>>roll;
            }
            void show()
            {
                cout<<"ROLL NUMBER OF STUDENT :"<<roll<<endl;
            }
};
class engineering : public student
{
    protected:
            string uni;
    public:
            void get()
            {
                student :: get();
                cout<<"University :"<<" ";
                cin>>uni;
            }
            void show()
            {
                student :: show();
                cout<<"NAME OF UNIVERSITY :"<<uni<<endl;
            }
};
class CE : public engineering
{
    private:
            int NOC;
    public:
            void get()
            {
                engineering :: get();
                cout<<"course in CE :"<<" ";
                cin>>NOC;
            }
            void show()
            {
                cout<<"--------------------------------------"<<endl;
                engineering :: show();
                cout<<"NUMBER OF COURSE IN CE BRANCH :"<<NOC<<endl;
                cout<<"--------------------------------------"<<endl;
            }
};
class IT : public engineering
{
    private: 
            int NOC;
    public:
            void get()
            {
                engineering :: get();
                cout<<"course in IT :"<<" ";
                cin>>NOC;
            }
            void show()
            {
                cout<<"--------------------------------------"<<endl;
                engineering :: show();
                cout<<"NUMBER OF COURSE IN IT BRANCH :"<<NOC<<endl;
                cout<<"--------------------------------------"<<endl;
            }
};
int main()
{
    CE s1;
    s1.get();
    s1.show();
    IT s2;
    s2.get();
    s2.show();
    return 0;
}