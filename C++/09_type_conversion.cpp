#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=6;
    float b=12.45;
    char c='y';
    cout<<"IMPLICIT CONVERSION"<< a+b <<","<< a+c <<endl;
    cout<<"EXPLICIT CONVERSION"<< (int)b+a << endl;
    return(0);
}   