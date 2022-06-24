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
            float tons,kg,gm;
    public:
            ton()
            {
                tons=0;
                kg=0;
                gm=0;
            }      
            void getdata()
            {
                cout<<"Enter the value of Ton "<<endl;
                cin>>tons;
                // 1 ton = 100 kg 
                kg = tons * 1000;
                // 1 kg = 1000 gms 
                gm = kg * 1000;    
            }
            void showdata()
            {
                cout<<"CONVERSION OF TON INTO KILOGRAM = "<<" "<<kg<<endl;
                cout<<"CONVERSION OF KILOGRAM INTO GRAMS = "<<" "<<gm<<endl;  
            }  

};
class kilo
{
    private:
            float kg,gm,TON,TONS;
    public:
            kilo()
            {
                kg=0;
                gm=0;
            }
            void readdata()
            {
                cout<<"Enter the value of kilogram "<<endl;
                cin>>kg;
                cout<<"Enter the value of grams "<<endl;
                cin>>gm;
                // 1 kg = 907.2 ton
                TON = kg / 907.2;
                // 1gm = 907200 ton
                TONS = gm / 907200;
            }
            void dispdata()
            {
                cout<<"KILOGRAMS INTO TONS ="<<" "<<TON<<endl;
                cout<<"GRAMS INTO TONS ="<<" "<<TONS<<endl;
            }
};
int main()
{
    int n;
    cout<<"Enter the number of data you want"<<endl;
    cin>>n;
    ton t[n];
    for(int i=0; i<n; i++)
    {
         t[i].getdata();
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"=================================================="<<endl;
        t[i].showdata();
        cout<<"=================================================="<<endl;
    }
    kilo k[n];
    for(int i=0; i<n; i++)
    {
         k[i].readdata();
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"=================================================="<<endl;
        k[i].dispdata();
        cout<<"=================================================="<<endl;
    }
return 0;
}