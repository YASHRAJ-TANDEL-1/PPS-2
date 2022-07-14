// Consider the following class structure as shown in the figure. The class Result derives
// information from the classes Internal, University and External respectively. The Internal
// and External classes access information from the Student class. Define all five classes
// and write a suitable program to create and display the information contained in Result
// object.

#include<iostream>
#include<iomanip>
using namespace std;
class student
{
    protected:
            string name;
            int enroll;
    public:
            void gets()
            {
                cout<<"Name :"<<" ";
                getline(cin,name);
                cout<<"Enroll :"<<" ";
                cin>>enroll;
            }
            void shows()
            {
                cout<<"NAME OF STUDENT :"<<name<<endl;
                cout<<"ENROLLMENT NUMBER :"<<enroll<<endl;
            }
};
class internal : virtual public student
{
    protected:
            float IM;
    public:
            void geti()
            {
                cout<<"IM :"<<" ";
                cin>>IM;
            }
            void showi()
            {
                cout<<"INTERNAL MARKS :"<<IM<<endl;
            }
};
class university : virtual public student
{
    protected:
            float UM;
    public:
            void getu()
            {
                cout<<"UM :"<<" ";
                cin>>UM;
            }
            void showu()
            {
                cout<<"UNIVERSITY MARKS :"<<UM<<endl;
            }
};
class external : virtual public student
{
    protected:
            float EM;
    public:
            void gete()
            {
                cout<<"EM :"<<" ";
                cin>>EM;
            }
            void showe()
            {
                cout<<"EXTERNAL MARKS :"<<EM<<endl;
            }
};
class result : public internal , public university , public external 
{
    public:
        void get()
        {
            gets();
            geti();
            getu();
            gete();
        }
        void show()
        {
            cout<<"-----------------------------------"<<endl;
            shows();
            showi();
            showu();
            showe();
            cout<<"----------------------------------"<<endl;
        }
};
int main()
{
    result R1;
    R1.get();
    R1.show();
    return 0;
}