
#include<iostream>
using namespace std;
int main()
{
    int i,a,count;
    cout<<"enter the number"<<endl;
    cin>>a;
     for(i=2;i<a;i++)
    {
        if(a%i==0)
        count++;
    }
    if(count==0)
    {
        cout<<a<<"   the number is prime number";
    }
    else
    {
        cout<<a<<"   the number is not a prime number";
    }
}