/* 50. Write a program for Copy Constructor Example Program For
Find Factorial in C++. */

#include<iostream>
using namespace std;
class Test 
{
        int n, i, f;
        public:
            Test(int a) 
            {
                n = a;
            }
            void factorial() 
            {
                f = 1;
                for (i = 1; i <= n; i++) 
                {
                    f = f*i;
                }
            }
            void display()
            {
                cout << "Factorial is:" << f;
            }
};
int main() 
{
    int a;
    cout << "Enter a number:";
    cin>>a;
    Test obj1(a);
    obj1.factorial();
    Test obj2 = obj1;
    obj2.display();
    return 0;
}
