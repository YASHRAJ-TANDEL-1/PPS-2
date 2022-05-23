/* WA function power() to raise a number m to power n. The
function takes a double value for m and int value for n, and
returns the value (results) correctly. Use default argument 2
for n and m to make a function to calculate squares when
argument is not passed. WAP for the same. */

#include<iostream>
#include<iomanip>
using namespace std;
int power(double m, int n=2)
{
    int result,i;
    result=m;
    for(i=0; i<n-1; i++)
    {
        result*=m;
    }
    return result;
}    
int main()
{
    double a;
    int b;
    char ans;
    cout<<"Enter the value of base(m) ="<<endl;
    cin>>a;
    cout<<"Do you want to change the power? [T/F] ie.True,false";
    cin>>ans;
    if(ans=='T')
    {
        cout<<"Enter the value of power=";
        cin>>b;
        cout<<power(a,b)<<"-"<<"This is the answer";
    }
    else
    {
       cout<<power(a)<<"-"<<"This is the answer"; 
    }
}