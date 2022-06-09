/* 28. Write a C++ program to find out the sum and average of three
numbers using nesting of member function. */

#include<iostream>
using namespace std;
int sum(int x, int y, int z)
{
    return x+y+z;
}
float avg(int x, int y, int z)
{
    return sum(x,y,z)/3;
}
int main()
{
    int a,b,c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    cout<<"Sum of three number:"<<sum(a,b,c)<<endl;
    cout<<"Average of three number:"<<avg(a,b,c);
return 0;
}