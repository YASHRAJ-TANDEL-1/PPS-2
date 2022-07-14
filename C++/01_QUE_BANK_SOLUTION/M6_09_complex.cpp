// Define a class complex with real and imaginary as two data member, add necessary
// constructors and member function to initialize and display data of class. Class should
// overload the + operator to add two complex objects and return the results. Invoke the
// statements like C3=C1+C2 in main ().

// 10. Write a C++ program that overloads + operator to add two complex numbers

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
            ~complexn()
            {
                /* Destructor is called.*/
                real=0;
                img=0;
            }     
};
int main()
{
    complexn c1,c2,c3;

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
    c3 = c1 + c2;
    c3.showdata(); 
    return 0;
}