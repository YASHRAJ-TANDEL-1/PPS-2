/* 10. Create class string with the data member as char str[20],
Use constructors and destructors properly and
write member functions for each of thefollowing
l. To get the data.
m. To display the data.
n. To concatenate(add) two string objects. */

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
            void add(s_string x , s_string y)
            {
                str_1 = x.str_1 + y.str_1;
            }
            void showdata()
            {
                cout<<"------------------------"<<str_1<<"----------------------"<<endl;
            }       
};
int main()
{
    class s_string s1,s2,s;
    s1.readdata();
    s2.readdata();
    cout<<"~~~~~~~~~~~~~~~~~~! STRING ADDED !~~~~~~~~~~~~~~~~~~~"<<endl;
    s.add(s1,s2);
    s.showdata();
return 0;
}