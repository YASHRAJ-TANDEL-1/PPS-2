#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
   long pop1=2435673,pop2=42,pop3=2345;
   cout<<setw(9)<<"location"<<setw(12)<<"population"<<endl 
       <<setw(9)<<"Porticity"<<setw(12)<<pop1<<endl 
       <<setw(9)<<"hightown"<<setw(12)<<pop2<<endl  
       <<setw(9)<<"lowville"<<setw(12)<<pop3<<endl;
    return 0;
      
}