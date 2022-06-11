/* Q.34 Write a C++ program to calculate simple interest amount. Use
default value for rate.*/

#include<iostream>
using namespace std;
float si(float p, int t, float r=8.25);

int main()
{
    float p,t,i;
    cout<<"Enter Principle Amount: ";
    cin>>p;
    cout<<"Enter Time Period: ";
    cin>>t;
    i=si(p,t);
    cout<<"Simple Interest Amount: "<<i<<endl;
    return 0;
}

float si(float p, int t, float r)
{
    return(p*t*r/100);
}
