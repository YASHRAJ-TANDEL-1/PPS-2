#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the number"<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"a is greatest   "<<a;
    }
    if(b>c&&b>a)
    {
        cout<<"is greatest     "<<b;
    }
    if(c>a&&c>b)
    {
        cout<<"c is greatest   "<<c;
    }
    return 0;
}
