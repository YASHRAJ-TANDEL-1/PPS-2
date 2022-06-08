/* 8. Create a class distance with the following data members int feet,
float inches
Use constructors and destructors properly and write member
functions for the following
i. To get the data.
j. To display the data.
k. Add two distance objects. */

#include<iostream>
#include<iomanip>
using namespace std;
class distance
{
    private: 
            int foot;
            float inches;
    public:                                                                           
            distance()
            {
                cout<<"Constructor is called."<<endl;
                foot=0;
                inches=0;
            }     
            void readdata()
            {
                cout<<"Enter the number in foot :";
                cin>>foot;
                cout<<"Enter the number in inches :";
                cin>>inches;
            }   
            void display()
            {
                /* 12 inches is equal to 1 foot. */ 
                if(inches>=12)
                {
                    inches=inches - 12;
                    foot++;
                }
                cout<<"---------------------------------------------------------"<<endl;
                cout<<"DISTANCE = "<<foot<<" "<<"FOOT"<<","<<inches<<" "<<"INCH."<<endl;
                cout<<"---------------------------------------------------------"<<endl;
            }
            void add(distance x ,distance y)
            {
                foot= x.foot + y.foot;
                inches= x.inches + y.inches;
                if(inches>12)
                {
                    inches=inches - 12;
                    foot++;
                }
            }
            ~distance()
            {
                cout<<"Destructor is called."<<endl;
            }    
};
int main()
{
    class distance c1,c2,c;
    c1.readdata();
    c2.readdata();
    c.add(c1,c2);
    c.display();
return 0;
}
