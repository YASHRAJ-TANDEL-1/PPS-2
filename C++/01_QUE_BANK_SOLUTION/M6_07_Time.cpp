// Define Operator overloading. Create class Time that has three data members hour, minute
// and second and two constructor, default constructor and parameterized constructor to
// initialize data member. Write a program to add two times by overloading operator +.

#include<iostream>
#include<iomanip>
using namespace std;
class time
{
    private:
            int hour,min,sec;
    public:
            time()
            {
                // Default constructor.
                hour=0;
                min=0;
                sec=0;
            }
            time(int h,int m,int s)
            {
                // Parameterized Constructer is called.
                hour=h;
                min=m;
                sec=s;
            }
            void showdata()
            { 
                cout<<hour<<"hr :"<<min<<"min :"<<sec<<"sec"<<endl;
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
            ~time()
            {
                // Destructor is called.
            }     
};
int main()
{
    //DATA FOR TIME 1.
    class time t1(2,45,10);
    cout<<endl;
                        //"DATA FOR TIME 2.
                        class time t2(5,10,30);
                        cout<<endl;
    cout<<"TIME 1"<<endl;
    t1.showdata();
    cout<<"TIME 2"<<endl;
    t2.showdata();
    cout<<endl;
                        cout<<"------------ TIME 1 + TIME 2 ------------"<<endl;
                        class time t;
                        t = t1 + t2 ;
                        t.showdata();
    return 0;
}