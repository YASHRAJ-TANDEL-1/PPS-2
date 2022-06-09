/* Q.33 Write a C++ program to calculate area and circumference of a
circle using inline function. */

#include<iostream>
using namespace std;
const int pi=3.14;
inline float circum(float x)
{
    return(2*pi*x);
}
inline float area(float x)
{
    return(pi*x*x);
}
int main()
{
float r;
    cout<<"Enter the radius of the circle:";
    cin>>r;
    cout<<endl<<"Circumference:"<<circum(r);
    cout<<endl<<"Area :"<<area(r);
return 0;
}
