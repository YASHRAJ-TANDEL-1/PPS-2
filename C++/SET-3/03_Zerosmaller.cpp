/* WA function called zerosmaller() uses two arguments. Use
return by reference to the function concept and set a smaller
value to 0. */

#include<iostream>
#include<iomanip>
using namespace std;
void zerosmaller(int &i, int &j)
{
    if(i<j)
    {
        i=0;
    }
    else
    {
        j=0;
    }
}
int main()
{
    int a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    zerosmaller(a,b);
    cout<<"Now the value is "<<endl<< a <<","<< b ;
    return 0;
}