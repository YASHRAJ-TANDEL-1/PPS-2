/* 1. WAP to convert from ton to Kg & gms and vice-versa. Create
two classes for the same. Class tons (with ton as data member)
and Class kilo (with kg and gms as data members)Use formula
1 ton = 1000 kg, 1kg = 1000gms */

#include<iostream>
#include<iomanip>
using namespace std;
class ton
{
    private:
            float tons;
    public:
            // ton (kilo y)
            // {
            //     tons=0;
            //     tons=y.getkg() / 907.2;
            //     tons=y.getgm() / 907200;
            // }      
            void getdata()
            {
                cout<<"Enter the value of Ton "<<endl;
                cin>>tons;    
            }
            int gettons()
            { 
                return tons;
            }
            void showdata()
            {
                cout<<"TONS ="<<tons<<endl;
            }  

};
class kilo
{
    private:
            float kg,gm;
    public:
            kilo (ton x)
            {
                kg = x.gettons() * 1000;
                gm = x.gettons() * 907200;
            }
            void readdata()
            {
                cout<<"Enter the value of kilogram "<<endl;
                cin>>kg;
                cout<<"Enter the value of grams "<<endl;
                cin>>gm;
            }
            // int getkg()
            // {
            //     return kg;
            // }
            // int getgm()
            // {
            //     return gm;
            // }
            void dispdata()
            {
                cout<<"TONS TO KILOGRAM ="<<kg<<endl;
                cout<<"TONS TO GRAM ="<<gm<<endl;
            }
};
int main()
{
    ton x;
    x.getdata();
    kilo k=x;
    x.showdata();
    cout<<"------- CONVERSION -------"<<endl;
    k.dispdata();
    cout<<endl;
    // kilo y;
    // y.readdata();
    // ton t=y;
    // y.dispdata();
    // cout<<"------- CONVERSION -------"<<endl;
    // t.showdata();
    // cout<<endl;
    return 0;
}