/* 49.Write a program for simple Parameterized Constructor For Find
Prime Number Example Program In C++. */

#include<iostream>
using namespace std;
class Prime 
{
    int a, k, i;
    public:
        Prime(int x) 
        {
            a = x;
            k = 1;
                {
                for (i = 2; i <= a / 2; i++)
                    if (a % i == 0) 
                    {
                        k = 0;
                        break;
                    } 
                    else 
                    {
                        k = 1;
                    }
                }
        }

        void show() 
        {
            if (k == 1)
            cout << a << " is Prime Number.";
            else
            cout << a << " is Not Prime Numbers.";
        }
};
int main()
{
    int a;
    cout << "\nEnter the Number:";
    cin>>a;
    Prime obj(a);
    obj.show();
    return 0;
}
