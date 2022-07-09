/* Define Inheritance. Explain public, private and protected
   inheritance with example. */

/* INHERITANCE :- It is the process of creating new classes ,called dericed classes ,from base classes. */

#include<iostream>
#include<iomanip>
using namespace std;
class A //BASE CLASS
{
   protected:
         string fname;
   public:
         A()
         {
            fname=" ";
         }
         void get()
         {
            cout<<"WRITE YOUR FIRST NAME :"<<" ";
            cin>>fname;
         }
         void show()
         {
            cout<<"YOUR FIRST NAME :"<<fname<<endl;
         }        
};
class B : public A //DERIVED CLASS
{
   private:
         string lname;
   public:
         void get()
         {
            A :: get();
            cout<<"WRITE YOUR LAST NAME :"<<" ";
            cin>>lname;
         }
         void show()
         {
            A :: show();
            cout<<"YOUR LAST NAME :"<<lname<<endl;
         }
};
class C : private A 
{
   private:
         string namef;
   public:
         void get()
         {
            A :: get();
            cout<<"WRITE YOUR FATHER NAME :"<<" ";
            cin>>namef;
         }
         void show()
         {
            A :: show();
            cout<<"YOUR FATHER'S NAME :"<<namef<<endl;
         }
};
class D : protected A
{
   private:
         string namem;
   public:
         void get()
         {
            A :: get();
            cout<<"WRITE YOUR MOTHER NAME :"<<" ";
            cin>>namem;
         }
         void show()
         {
            A :: show();
            cout<<"YOUR MOTHER'S NAME :"<<namem<<endl;
         }
};
int main()
{
   cout<<"--------- PUBLIC -----------"<<endl;
   B D1;
   D1.get();
   D1.show();
   cout<<"--------- PRIVATE -----------"<<endl;
   C D2;
   D2.get();
   D2.show();
   cout<<"--------- PROTECTED -----------"<<endl;
   D D3;
   D3.get();
   D3.show();
   cout<<"--------------------"<<endl;
   return 0;
}

