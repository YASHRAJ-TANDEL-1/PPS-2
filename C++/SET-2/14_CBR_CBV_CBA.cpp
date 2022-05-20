///* Write a function using variables as arguments to
swap the values of a pair of integers usingcall by
value, call by address and call by reference. */

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
using namespace std;

 void callbyvalue(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<endl<<"value of a and b after swapping is "<<  x  <<","<<  y  ;
    
} 
void callbyreference(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<endl<<"value of a and b after swapping is "<<  x  <<","<<  y  ;
} 

void callbyaddress(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout<<endl<<"value of a and b after swapping is "<<  *x  <<","<<  *y  ;
} 

int main()
{
    int a,b;
    cout<<"enter the value of a=";
    cin>>a;
    cout<<"enter the value of b=";
    cin>>b;
    cout<<"value of a and b before swapping in "<<  a  <<","<<  b  ;
    callbyvalue(a,b);
    callbyreference(a,b);
    callbyaddress(&a,&b);
    return(0);

} 
