/* 4. Create a time with following data members
int h,m,s
Write member functions for each of the following
a. To get the data in number of seconds
b. To set the data in number of seconds
c. To display the data
d. To convert seconds into h, m, s */

#include<iostream>
#include<iomanip>
using namespace std;

class time
{
    private:
            int hour,min,sec,s;
    public:
            void getdata()
            {
                cout<<"Enter the data in number of second =";
                cin>>s;
            }
            void convert()
            {
                hour=(s/3600);
                min=(s-(3600*hour))/60;
                sec=(s-(3600*hour)-(min*60));
            }
            void showdata()
            {
                cout<<"TIME :"<<hour<<"hr :"<<min<<" min :"<<s<<"sec :"<<endl;
            }  
};
int main()
{
    int n;
    cout<<"Enter the number of data you want"<<endl;
    cin>>n;
    class time t[n];
    for(int i=0; i<n; i++)
    {
        t[i].getdata();
    }
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    for(int i=0; i<n; i++)
    {
        t[i].convert();
        t[i].showdata();
    }
}
