/* 1. Assume that Circle is defined using radius and Cylinder is defined using radius and height.
Write a Circle class as base class and inherit the Cylinder class from
it. Develop classes suchthat user can compute the area of Circle objects and
volume of Cylinder objects. Area of Circle is pie *radius*radius, while volume
of Cylinder is pie*(radius * radius)*height. */

#include<iostream>
#include<iomanip>
float pi=3.14;
using namespace std;
class circle 
{
    protected:
            float r1,area;
    public:
            void radius()
            {
                cout<<"Enter the radius=";
                cin>>r1; 
            }
            void rad()
            {
                cout<<r1<<endl;
            }
            void show()
            {
                area = pi*r1*r1;
                cout<<"AREA OF CIRCLE ="<<area<<endl; 
            }
};
class cyclinder : public circle
{
    private:
            float h1,volume;
    public:
            void height()
            {
                cout<<"Enter height of cyclinder =";
                cin>>h1;   
            }
            void yourheight()
            {
                cout<<h1<<endl;
            }
            void display() 
            {            
                volume = r1*r1*h1*pi;
                cout<<"VOLUME OF CYCLINDER ="<<volume<<endl; 
            }
};
int main()
{
    cyclinder b;
    b.radius();
    b.height();
    cout<<"-------------- CIRCLE ---------------"<<endl;
    cout<<"RADIUS OF CIRCLE =";
    b.rad();
    b.show();
    cout<<"------------- CYCLINDER -------------"<<endl;
    cout<<"RADIUS OF CYCLINDER =";
    b.rad();
    cout<<"HEIGHT OF CYCLINDER =";
    b.yourheight();
    b.display();
    return 0;
}
