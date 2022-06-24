/* 8. Rewrite assignment 1(from assignment 6) using +=,-=, *= &
/=operator overloading. */

  /* 1. Rewrite complex class (from assignment 5) using operator
     overloading concept. i.e. overload (+,-,*,/) */

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
                /* Constructer is called.*/
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
                cout<<real<<" + "<<img<<" i "<<endl;
                cout<<endl;
            }   
            complexn operator + (complexn x )
            {
                    complexn y;
                    y.real= x.real + real;
                    y.img = x.img + img;
                    return y;   
            }
                    complexn operator - (complexn x )
                    {
                            complexn y;
                            y.real=x.real - real;
                            y.img =x.img - img;   
                            return y;
                    }
            complexn operator * (complexn x )
            {
                    complexn y;
                    y.real=(real * x.real) - (img * x.img);
                    y.img =(img * x.real) + (real * x.img);
                    return y;   
            }
                   complexn operator / (complexn x )
                    {
                            complexn y;
                            y.real=(real*x.real + img*x.img) / (x.real*x.real + x.img*x.img);
                            y.img =(x.real*x.real - x.img*x.img) / (x.real*x.real + x.img*x.img);
                            return y;
                    }
            ~complexn()
            {
                /* Destructor is called.*/
                real=0;
                img=0;
            }        
};
int main()
{
    complexn c1,c2,c;

    c1.readdata();
    cout<<endl;
    c2.readdata();
    cout<<endl;

        cout<<"First Complex number"<<endl;
        c1.showdata();
        cout<<endl; 
        cout<<"Second complex number"<<endl;
        c2.showdata();
    
    cout<<"~~~~~~~~~~~~~~~~~~~@ ADDITION @~~~~~~~~~~~~~~~~~~~"<<endl;
    c = c1 + c2;
    c.showdata(); 
    cout<<"~~~~~~~~~~~~~~~~~@ SUBTRACTION @~~~~~~~~~~~~~~~~~~"<<endl;
    c = c1 - c2;
    c.showdata();
    cout<<"~~~~~~~~~~~~~~~@ MULTIPLICATION @~~~~~~~~~~~~~~~~~"<<endl;
    c = c1 * c2;
    c.showdata();
    cout<<"~~~~~~~~~~~~~~~~~~@ DIVISION @~~~~~~~~~~~~~~~~~~~~"<<endl;
    c = c1 / c2;
    c.showdata();
    cout<<endl;
return 0;
}