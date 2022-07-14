// Define a class complex with real and imaginary as two data member with default &
// parameterized constructors, function to initialize and display data of class. It should
// overload the + operator to add two complex objects. Write a complete C++ program to
// demonstrate use of complex class

#include<iostream>
#include<iomanip>
using namespace std;
class complexn
{
    private:
            float real;
            float img;
    public:
            complexn()
            {
                // Default constructor.
                real=0;
                img=0;
            }
            complexn(float r , float i)
            {
                /* Parameterized Constructer is called.*/
                real=r;
                img=i;
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
            ~complexn()
            {
                /* Destructor is called.*/
            }     
};
int main()
{
    complexn c1(9,5);
    complexn c2(5,3);
    complexn c3;
    

        cout<<"First Complex number"<<endl;
        c1.showdata();
        cout<<endl; 
        cout<<"Second complex number"<<endl;
        c2.showdata();
    
    cout<<"~~~~~~~~~~~~~~~~~~~@ ADDITION @~~~~~~~~~~~~~~~~~~~"<<endl;
    c3 = c1 + c2; 
    c3.showdata();
    return 0;
}