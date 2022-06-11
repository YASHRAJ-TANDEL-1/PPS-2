/* 5. Create class complex with following data members
real and imaginary, Use constructors and destructors properly
and for performing various arithmetic operations
write member functions for each of the
following
a. Addition function to add two complex no.
b. Subtraction function to sub two complex no.
c. Multiplication function to multi two complex no.
d. Division function to div two complex no.
e. Function to get data and to print data. */

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
            void add(complexn x ,complexn y)
            {
                    real=x.real + y.real;
                    img =x.img + y.img;   
            }
                    void sub(complexn x ,complexn y)
                    {
                            real=x.real - y.real;
                            img =x.img - y.img;   
                    }
            void multi(complexn x ,complexn y)
            {
                    real=x.real * y.real;
                    img =x.img * y.img;   
            }
                    void div(complexn x ,complexn y)
                    {
                            real=x.real / y.real;
                            img =x.img / y.img;   
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
    c.add(c1,c2);
    c.showdata(); 
    cout<<"~~~~~~~~~~~~~~~~~@ SUBTRACTION @~~~~~~~~~~~~~~~~~~"<<endl;
    c.sub(c1,c2);
    c.showdata();
    cout<<"~~~~~~~~~~~~~~~@ MULTIPLICATION @~~~~~~~~~~~~~~~~~"<<endl;
    c.multi(c1,c2);
    c.showdata();
    cout<<"~~~~~~~~~~~~~~~~~~@ DIVISION @~~~~~~~~~~~~~~~~~~~~"<<endl;
    c.div(c1,c2);
    c.showdata();
    cout<<endl;
return 0;
}
