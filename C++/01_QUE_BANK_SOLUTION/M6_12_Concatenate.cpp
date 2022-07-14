// Write a C++ program to overload the + operator to concatenate two strings

#include<iostream>
#include<iomanip>
using namespace std;
class s_string
{
    private:
            string str_1,str_2;
    public:
            s_string()
            {
                cout<<"Constructer is called."<<endl;
                str_1="";
                str_2="";
            }
            void readdata()
            {
                cout<<"Enter string :";
                getline(cin,str_1);
                cout<<endl;
            } 
            s_string operator + (s_string x)
            {
                s_string y;
                y.str_1 = str_1 + x.str_1;
                return y;
            }
            void showdata()
            {
                cout<<"------------------------" <<str_1<< "----------------------"<<endl;
            }       
};
int main()
{
    class s_string s1,s2,s;
    s1.readdata();
    s2.readdata();
    cout<<"~~~~~~~~~~~~~~~~~~! STRING ADDED !~~~~~~~~~~~~~~~~~~~"<<endl;
    s=s1+s2;
    s.showdata();
return 0;
}