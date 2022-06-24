/* 4. Create class string with following data member
char str[20], for performing various comparison operations,
overload >, <, ==, != operatorsfor two string objects.*/

#include<iostream>
#include<iomanip>
using namespace std;
class strings
{
    private:
            string s;
    public:
            strings()
            {
                s=" ";
            }
            void getdata()
            {
                cout<<"Enter the string character you want "<<endl;
                getline(cin,s);
            }
            void show()
            {
                cout<<" "<<s<<endl;
            }
            void operator > (strings a)
            {
                if( s > a.s)
                {
                    cout<<"FIRST STRING IS LARGEST "<<endl;
                }    
            }
            void operator < (strings a)
            {
                if( s < a.s)
                {
                    cout<<"SECONG STRING IS LARGEST "<<endl;
                }    
            }
            void operator == (strings a)
            {
                if( s == a.s)
                {
                    cout<<"BOTH STRING ARE SAME "<<endl;
                }    
            }
            void operator != (strings a)
            {
                if( s != a.s)
                {
                    cout<<"BOTH STRING ARE NOT SAME "<<endl;
                }    
            }
            ~strings()
            {
                s=" ";
            }
};
int main()
{
    strings x,y,z;
    x.getdata();
    y.getdata();
    cout<<"YOUR FIRST STRING IS "<<endl;
    x.show();
    cout<<"YOUR SECOND STRING IS "<<endl;
    y.show();
    cout<<"----------------------"<<endl;
    x == y ;
    cout<<"----------------------"<<endl;
    x > y ;
    cout<<"----------------------"<<endl;
    x < y ; 
    cout<<"----------------------"<<endl;
    x != y ;
    cout<<"----------------------"<<endl;
return 0;
}