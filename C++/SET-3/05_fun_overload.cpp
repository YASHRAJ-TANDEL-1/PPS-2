/* WAP that prints a character on screen using function
overloading */
#include<iostream>
#include<iomanip>
using namespace std;
void show(int a)
{
    cout<<a<<endl;
}
void show(double b,string c)
{
    cout<<b<<","<< c <<endl;
}
int main()
{
   show(12);
   show(45.87,"yashraj");
   return 0;
}