/* 7. Write a program to compare two time class objects by
overloading <, >, ==,!= operators. */

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
                // Constructer is called.
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
            void showdata()
            {
               
                cout<<hour<<"hr :"<<min<<"min :"<<s<<"sec"<<endl;
                cout<<"-----------------------------------------"<<endl;
            }  
            time operator + (time x)
            {
                time y;
                y.hour= x.hour + hour;
                y.min= x.min + min;
                y.sec= x.sec + sec;
                return y;
            }
            void operator > (time x)
            {
                if( sec > x.sec )
                {
                    cout<<"TIME 1 IS MORE THAN TIME 2"<<endl;
                }
            }
            void operator < (time x)
            {
                if( sec < x.sec )
                {
                    cout<<"TIME 2 IS MORE THAN TIME 1"<<endl;
                }
            }
            void operator == (time x)
            {
                if( hour == x.hour && min == x.min && sec == x.sec )
                {
                    cout<<"TIME 1 & TIME 2 BOTH ARE SAME"<<endl;
                }
            }
            void operator != (time x)
            {
                if( hour != x.hour || min != x.min || sec != x.sec )
                {
                    cout<<"TIME 1 & TIME 2 BOTH ARE NOT SAME"<<endl;
                }
            }
            ~time()
            {
                // Destructor is called.
                hour=0;
                min=0;
                sec=0;
                s=0;
            }     
};
int main()
{
    class time t1,t2,t;
    cout<<"DATA FOR TIME 1"<<endl;
    t1.getdata();
    t1.convert();
    cout<<endl;
                        cout<<"DATA FOR TIME 2"<<endl;
                        t2.getdata();
                        t2.convert();
                        cout<<endl;
    cout<<"TIME 1"<<endl;
    t1.showdata();
    cout<<"TIME 2"<<endl;
    t2.showdata();
    cout<<endl;
    t1 > t2 ;
    t1 < t2 ;
    t1 == t2 ;
    t1 != t2 ;
                        cout<<endl;
                        cout<<"------------ TIME 1 + TIME 2 ------------"<<endl;
                        t = t1 + t2 ;
                        t.showdata();
    return 0;
}