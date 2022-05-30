/* 7. Write a program to count number of objects created for any
class.*/

#include<iostream>
using namespace std;
class object
{
    public:
    static int count;
    object()
    {
        count++;
    }
};
int object::count;
int main()
{
    int n;
    cout<<"Enter the number of data you want"<<endl;
    cin>>n;
    object c[n];
    cout<<"Total object created is "<<endl;
    cout<<object::count;
    return 0;
}
