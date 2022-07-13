/* What is containership? Rewrite above program using
   containership. */

/* CONTAINERSHIP :- In inheritance if a class contain the object of another class as data member 
                                                OR 
                    A class define within a another class is called CONTAINERSHIP   */

#include<iostream>
#include<iomanip>
using namespace std;
class student
{
    private:
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
class engineering 
{
    private:
            student x1;
            string uni;
    public:
            void get()
            {
                x1.get();
                cout<<"University :"<<" ";
                cin>>uni;
            }
            void show()
            {
                x1.show();
                cout<<"NAME OF UNIVERSITY :"<<uni<<endl;
            }
};
class CE 
{
    private:
            engineering y1;
            int NOC;
    public:
            void get()
            {
                y1.get();
                cout<<"course in CE :"<<" ";
                cin>>NOC;
            }
            void show()
            {
                cout<<"--------------------------------------"<<endl;
                y1.show();
                cout<<"NUMBER OF COURSE IN CE BRANCH :"<<NOC<<endl;
                cout<<"--------------------------------------"<<endl;
            }
};
class IT 
{
    private: 
            engineering y1;
            int NOC;
    public:
            void get()
            {
                y1.get();
                cout<<"course in IT :"<<" ";
                cin>>NOC;
            }
            void show()
            {
                cout<<"--------------------------------------"<<endl;
                y1.show();
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
