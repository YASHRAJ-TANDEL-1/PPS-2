/* 3. Write a program to perform following operations on distance
class. 
1) d1 = 2.0  
2) float m = d1 */

#include<iostream>
#include<iomanip>
using namespace std;
class distance
{
    private:
            double dist;
    public:
            distance()
            {
                dist =0;
            }
            void read()
            {
                double c = dist;
                cout<<"ENTER DISTANCE ="<<endl;
                cin>>dist;
            }
            void show()
            {
                float m = (float)dist;
                cout<<"YOUR DISTANCE ="<<m<<endl;
            }
            ~distance()
            {
                dist =0;
            }
};
int main()
{
    class distance d1;
    d1.read();
    d1.show();
    return 0;
}
