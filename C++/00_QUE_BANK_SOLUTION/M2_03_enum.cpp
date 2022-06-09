/* 3.Example, the uses of enumeration
  data types. */

#include<iostream>
#include<iomanip>
using namespace std;
enum x{A=4,B};
enum car{AUDI,BMW=8,LAMBO=6,BENZ};
int main()
{
    cout<<"The value of x :"<< A <<","<< B <<endl;
    cout<<"The default value of enum car :"<< AUDI <<","<< BMW <<","<< LAMBO <<","<< BENZ <<endl;
return 0;
}