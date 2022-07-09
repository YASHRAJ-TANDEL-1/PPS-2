/* 3.Define class employee which has fname and lname as data member. 
    Define following:
1.  Constructor for employee class with default arguments
2.  Print function
    Derive a class called hourly_worker (with wage and hours as data members). 
    Define following:
1.  Constructor for hourly_worker class with default arguments
2.  Getpay() function that calculates and returns the pay and
3.  A print function */

#include<iostream>
#include<iomanip>
using namespace std;
class employee
{
    protected:
            string fname,lname;
    public:
            employee()
            {
                fname=" ";
                lname=" ";
            }
            void get()
            {
                cout<<"first name :"<<" ";
                getline(cin,fname);
                cout<<"last name :"<<" ";
                getline(cin,lname);
            }
            void show()
            {
                cout<<"FIRST NAME :"<<fname<<endl;
                cout<<"LAST NAME :"<<lname<<endl;
            }
            ~employee()
            {
                fname=" ";
                lname=" ";
            }
};
class hourly_worker : public employee
{
    private:
            int age;
            float hours,pay;
    public:
            hourly_worker()
            {
                age=0;
                hours=0;
            }
            void get()
            {
                employee :: get();
                cout<<"AGE :"<<" ";
                cin>>age;
                cout<<"HOURS :"<<" ";
                cin>>hours;
            }
            void show()
            {
                cout<<"-----------------------"<<endl;
                employee :: show(); 
                cout<<"AGE :"<<age<<endl;
                cout<<"HOURS :"<<hours<<endl;
                pay=hours*100;
                cout<<"AMOUNT TO PAYED :"<<pay<<endl;
                cout<<"-----------------------"<<endl;
            }
            ~hourly_worker()
            {
                age=0;
                hours=0;
            }
};
int main()
{
    hourly_worker H1;
    H1.get();
    H1.show();
    return 0;
}