/* 9. Create a class time with the following data membersint h,m,s
(input data in seconds only)
Use constructors and destructors properly and
write member functions for each of thefollowing
a. To get the data.
b. To display the data.
c. To convert the seconds into h, m ,s.
d. To add two time objects. */

#include<iostream>
#include<iomanip>
using namespace std;
class time
{
    private:
            int hour,min,sec,s;
    public:
            time()
            {
                cout<<"Constructer is called."<<endl;
                hour=0;
                min=0;
                sec=0;
                s=0;
            }
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
               
                cout<<"TIME :"<<hour<<"hr :"<<min<<"min :"<<s<<"sec"<<endl;
            }  
            ~time()
            {
                cout<<"Destructor is called."<<endl;
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
