/*Write overloaded functions to convert ascii to int and ascii to
float. */

#include<iostream>
#include<iomanip>
using namespace std;
void ascii(int a,char c)
{
    cout<<"ascii + integer ="<< c+a <<endl;
}
void ascii(float b,char c)
{
    cout<<"ascii+float="<<c+b;
}
int main()
{
    char c;
    int a;
    float b;
    cout<<"Enter the character"<<endl;
    cin>>c;
    cout<<"Enter the integer"<<endl;
    cin>>a;
    cout<<"Enter the float"<<endl;
    cin>>b;
    ascii(a,c);
    ascii(b,c);
    return 0;
}
