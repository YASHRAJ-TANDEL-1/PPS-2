/* 5. Create a class distance with following data members
int feet
float inches
write an overloaded operators <, >, ==, != two compare two
distance objects.*/

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
                // Constructor is called.
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
                //cout<<"-------------------------------------------------"<<endl;
                cout<<foot<<" "<<"FOOT"<<","<<inches<<" "<<"INCH."<<endl;
                cout<<"-------------------------------------------------"<<endl;
            }
            distance operator + (distance x)
            {
                distance y;
                y.foot= x.foot + foot;
                y.inches= x.inches + inches;
                if(inches>12)
                {
                    inches=inches - 12;
                    foot++;
                }
                return y; 
            }
            void operator > (distance a)
            {
                if( foot > a.foot && inches > a.inches )
                {
                    cout<<" 1st DISTANCE IS GREATER "<<endl;     
                }    
            }
            void operator < (distance a)
            {
                if( foot < a.foot && inches < a.inches )
                {
                    cout<<" 2nd DISTANCE IS GREATER "<<endl;     
                }    
            }
            void operator == (distance a)
            {
                if( foot == a.foot && inches == a.inches )
                {
                    cout<<" 1st & 2nd BOTH DISTANCE ARE SAME "<<endl;     
                }    
            }
            void operator != (distance a)
            {
                if( foot != a.foot && inches != a.inches )
                {
                    cout<<" 1st & 2nd BOTH DISTANCE ARE NOT SAME "<<endl;     
                }    
            }
            ~distance()
            {
                // Destructor is called.
                foot=0;
                inches=0;
            }    
};
int main()
{
    class distance c1,c2,c,d3,d4,d;
    cout<<"DATA FOR 1st DISTANCE"<<endl;
    c1.readdata();
    c2.readdata();   
    c = c1 + c2 ;
    cout<<endl;
                                cout<<"DATA FOR 2nd DISTANCE"<<endl;
                                d3.readdata();
                                d4.readdata();
                                d = d3 + d4 ;
                                cout<<endl;
    cout<<"1st DISTANCE"<<endl;
    c.display();
    cout<<"2nd DISTANCE"<<endl;
    d.display();
                    c > d ;
                    c < d ;
                    c == d ;
                    c != d ;
    return 0;
}