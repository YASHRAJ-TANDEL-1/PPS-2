
#include<iostream>
using namespace std;
int m=35;
int main()
{
    int m=30;
    {
        int &k=m;
        int m=40;
        cout<<"we are in inner block"<<endl;
        cout<<"k="<<k<<endl;
        cout<<"m="<<m<<endl;
        cout<<"::m="<<::m<<endl;
    }
    return 0;
}