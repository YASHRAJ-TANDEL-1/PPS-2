/* 54. define a class Time with hours and minutes as two data
members, add necessary member function to initialize and display
data of class. Do not use constructors in a class. Define member
function sum() which adds two time objects. Invoke the statement
like T3.sum(T1,T2) in main(). */

#include<iostream>
#include<iomanip>
using namespace std;
class time
{
    private:
            int hour,min,sec,s;
    public:
            void getdata()
            {
                cout<<"Enter the data in number of second =";
                cin>>s;
            }
            void convert()
            {
                hour=(s/3600);
                min=(s-(3600*hour))/60;
                sec=(s-(3600*hour)-(min*60));
            }
            void add(time x,time y)
            {
                hour= x.hour + y.hour;
                min= x.min + y.min;
                sec= x.sec + y.sec;
            }
            void showdata()
            {
               
                cout<<"  "<<"TIME :"<<hour<<"hr :"<<min<<"min :"<<s<<"sec"<<endl;
            }     
};
int main()
{
    class time t1,t2,t;
    t1.getdata();
    t1.convert();
    cout<<"TIME 1 :";
    t1.showdata();
    cout<<endl;
                t2.getdata();
                t2.convert();
                cout<<"TIME 2 :";
                t2.showdata();
                cout<<endl;
    t.add(t1,t2);
    cout<<"------------ TIME 1 + TIME 2 ------------"<<endl;
    t.showdata();
    cout<<"-----------------------------------------"<<endl;
    return 0;
}