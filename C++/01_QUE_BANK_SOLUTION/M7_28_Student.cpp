// Create a class student that stores roll_no, name. Create a class test that stores marks
// obtained in five subjects. Class result derived from student and test contains the total
// marks and percentage obtained in test. Input and display information of a student.

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
                cout<<"ROLL NUMBER :"<<roll<<endl;
            }
};
class test 
{
    protected:
            float marks[5];
    public:
            void get()
            {
                for(int i=0; i<5 ;i++)
                {
                    cout<<"Enter marks "<<i+1<<":"<<" ";
                    cin>>marks[i];
                }
            }
            void show()
            {
                for(int i=0; i<5; i++)
                {
                    cout<<"MARKS OF SUBJECT "<<i+1<<":"<<marks[i]<<endl;
                }
            }
};
class result : public student , public test
{
    private:
            float total,per;
    public:
            void get()
            {
                student :: get();
                test :: get();
                for(int i=0; i<5; i++)
                {
                    total= total + marks[i];
                }
                per= total / 5;
            }
            void show()
            {
                cout<<"---------------------------"<<endl;
                student :: show();
                test :: show();
                cout<<"TOTAL MARKS :"<<total<<endl;
                cout<<"PERCENTAGE :"<<per<<"%"<<endl;
                cout<<"---------------------------"<<endl;
            }
};
int main()
{
    result X1;
    X1.get();
    X1.show();
    return 0;
}