/*WAP to print following using default arguments
repchar() // prints 45 times asterisks (*)
repchar ('=) // prints 45 times (=)
repchar('+',30) // prints 30 times (+) */

         
#include<iostream>
#include<iomanip>
using namespace std;
void repchar( char c=' ', int n=45)
{
    int i;
    for(i=0;i<n;i++)
    cout<<c;
}
int main()
{
    repchar('*');
    cout<<endl;
    repchar('=');
    cout<<endl;
    repchar('+');
    return 0;
}
