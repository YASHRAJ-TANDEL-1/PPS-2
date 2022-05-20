#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
      int a1,a2,a3,b1,b2,b3,c1,c2,c3,sum1,sum2,sum3;
      cout<<"Marks of Maths:";
      cin>>a1>>b1>>c1;
      cout<<"Marks of PPS:";
      cin>>a2>>b2>>c2;
      cout<<"Marks of Physics:";
      cin>>a3>>b3>>c3;
      sum1=a1+a2+a3;
      sum2=b1+b2+b3;
      sum3=c1+c2+c3;
      cout<<setw(10)<<"Name        "<<setw(10)<<"Enrollment  "<<setw(5)<<"Maths   "<<setw(5)<<"PPS   "<<setw(6)<<"Physics   "<<setw(5)<<"Total               "<<endl
          <<setw(10)<<"Yesraj Kanji"<<setw(10)<<" 21BTCSE200 "<<setw(5)<<  a1      <<setw(5)<< a2     <<setw(5)<<   a3       <<setw(5)<<"         "<< sum1    <<endl
          <<setw(10)<<"Raj Patel   "<<setw(10)<<" 21BTCSE138 "<<setw(5)<<  b1      <<setw(5)<< b2     <<setw(5)<<   b3       <<setw(5)<<"         "<< sum2    <<endl
          <<setw(10)<<"Krish Patel "<<setw(10)<<" 21BTCSE055 "<<setw(5)<<  c1      <<setw(5)<< c2     <<setw(5)<<   c3       <<setw(5)<<"         "<< sum3    <<endl;
          return 0;
}