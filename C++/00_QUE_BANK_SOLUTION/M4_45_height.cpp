/* Q.45 Write a program to create a class height containing feet and
inches. Using operator keyword, convert an object of class height
into total_centimeter which is float data type.(1 feet = 30.48
centimeters and 1 inch=2.54 centimeters) */

#include<iostream>
#include<iomanip>
using namespace std;
class distance
{
        float feet, inches,t_cm;
        public:
                distance()
                {
                    feet=0;
                    inches=0;
                }
                void get()
                {
                    cout<<"Enter the feet:";
                    cin>>feet;
                    cout<<"Enter the inches:";
                    cin>>inches;
                    feet=feet*30.48;
                    inches=inches*2.54;
                }
                void display()
                {
                    cout<<"Distance:"<<t_cm<<"inch "<<endl;
                }
                float operator +(distance j)
                {
                    distance t;
                    t.feet=j.feet+feet;
                    t.inches=j.inches+inches;
                    if(inches>12)
                    {
                        inches-=12;
                        feet++;
                    }
                    t_cm=t.feet+t.inches;
                    display();
                }
                ~distance()
                {
                    feet=0;
                    inches=0;
                }
};
int main()
{
    class distance d1,d2,d;
    d1.get();
    d2.get();
    d1+d2;
}