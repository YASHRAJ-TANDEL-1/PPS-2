// Define a circle class with radius as data member, necessary constructors and member
// function to compute area of circle. Class should overload the = = operator to compare
// two circle objects whether they are equal in radius. Demonstrate its use in main().


#include<iostream>
#include<iomanip>
using namespace std;
class circle
{
    private:
            float radius,area;
    public:
            circle()
            {
                radius=0;
                area=0;
            }
            void get()
            {
                cout<<"Radius :"<<" ";
                cin>>radius;
            }
            void show()
            {
                cout<<"RADIUS OF CIRCLE :"<<radius<<endl;
                area = 3.14 * radius * radius;
                cout<<"AREA OF CIRCLE :"<<area<<endl;
            }
            circle operator ==(circle x)
            {
                if(radius == x.radius)
                {
                    cout<<"BOTH THE RADIUS ARE SAME"<<endl;
                }
                else
                {
                    cout<<"BOTH THE RADIUS ARE NOT SAME"<<endl;
                }
            }
};
int main()
{
    circle C1,C2;
    cout<<"----------------------"<<endl;
    cout<<"CIRCLE 1"<<endl;
    C1.get();
    C1.show();
    cout<<"----------------------"<<endl;
    cout<<"CIRCLE 2"<<endl;
    C2.get();
    C2.show();
    cout<<"----------------------"<<endl;
    C1 == C2;
    cout<<"----------------------"<<endl;
    return 0;
}