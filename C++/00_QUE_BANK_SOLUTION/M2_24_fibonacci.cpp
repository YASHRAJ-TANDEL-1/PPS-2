/* 24. Write a program to generate the following series (using class
fibo) : 1 1 2 3 5 8 ..... */

#include<iostream>
#include<iomanip>
using namespace std;

void fibonacci(int n)
{
    int i,n1=0,n2=1,n3=1,sum=0;
    cout << n1 << " " << n2 << " " << n3;
    for(int i=0; i<=n; i++)
    {
        sum = n2 + n3;
        n2=n3;
        n3=sum;
        cout<< " " << sum << " " ;
    }
}

int main()
{
    int n ;
    cout<<"Enter number"<<endl;
    cin >> n;
    fibonacci (n) ;
    return 0;
}

