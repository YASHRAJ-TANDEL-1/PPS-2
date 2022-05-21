/* WAP that prints various types of data using function
overloading.*/

#include<iostream>
#include<iomanip>
using namespace std;
void display(int a)
{
    cout<<"This ia integer"<<endl <<a <<endl;
}
void display(double b)
{
    cout<<"This is float"<<endl <<b <<endl;
}
void display(string c)
{
    cout<<"This is character"<<endl <<c <<endl;
}
int main()
{
      display(30);
      display(28.20);  
      display("YASHRAJ");
      return 0;
}