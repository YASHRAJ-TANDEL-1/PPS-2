/* 41. Define a class complex with real and imaginary as two data
member, add necessary constructors and member function to
initialize and display data of class. Class should overload the +
operator to add two complex objects and return the results. Invoke
the statements like C3=C1+C2 in main (). */

#include<iostream>
#include<iomanip>
using namespace std;
class complexn
{
    public:
           float real;
           float img;
           complexn()
            {
                cout<<"Constructer is called."<<endl;
                real=0;
                img=0;
            }
            void readdata()
            {
                cout<<"Enter the real number :";
                cin>>real;
                cout<<"Enter the imaginary :";
                cin>>img;
            } 
            void showdata()
            {
                cout<<real<<"+"<<img<<"i"<<endl;
                cout<<endl;
            }   
            complexn operator+(complexn x)
            {
                    complexn y;
                    y.real=x.real + real;
                    y.img =x.img + img;
                    return y;   
            }
            ~complexn()
            {
                cout<<"Destructor is called."<<endl;
            }        
};
int main()
{
    complexn c1,c2,c;

    c1.readdata();
    cout<<endl;
    cout<<"First Complex number"<<endl;
    c1.showdata();

        c2.readdata();
        cout<<endl;  
        cout<<"Second complex number"<<endl;
        c2.showdata();
    
    cout<<"~~~~~~~~~~~~~~~~~~~@ ADDITION @~~~~~~~~~~~~~~~~~~~"<<endl;
    c = c1 + c2;
    c.showdata();
    cout<<endl;
return 0;
}
