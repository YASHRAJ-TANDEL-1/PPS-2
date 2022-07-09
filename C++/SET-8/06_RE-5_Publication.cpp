/* 6. Modify above program with two base classes. One as
publication and create another sales (member totalsales). Now,
Derive two classes books (member page_count), tape(member
mins) from publication and sales. Use necessary constructors,
destructors and functions */

#include<iostream>
#include<iomanip>
using namespace std;
class publication //BASE CLASS
{   
    protected:
            float price;
            string title;
    public:
            publication()
            {
                title=" ";
                price=0;
            }
            void read()
            {
                cout<<"TITLE OF BOOK :"<<" ";
                cin>>title;
                cout<<"PRICE OF BOOK :"<<" ";
                cin>>price;
            }
            void show()
            {
                cout<<"TITLE OF BOOK :"<<title<<endl;
                cout<<"PRICE OF BOOK :"<<price<<endl; 
            }
            ~publication()
            {
                title=" ";
                price=0;
            }
};
class sales //BASE CLASS
{
    protected:
            float stotal;
    public:
            sales()
            {
                stotal=0;
            }
            void read()
            {
                cout<<"sales :"<<" ";
                cin>>stotal;
            }
            void show()
            {
                cout<<"TOTAL NUMBER OF SALES :"<<stotal<<endl;
            }
            ~sales()
            {
                stotal=0;
            }
};
class books : public publication , public sales //DERIVED CLASS
{
    private:
            int page_count;
    public:
            books()
            {
                page_count=0;
            }
            void read()
            {
                publication :: read();
                sales :: read();
                cout<<"PAGE COUNT :"<<" ";
                cin>>page_count;
            }
            void show()
            {
                publication :: show();
                sales :: show();
                cout<<"NUMBER OF PAGES READ :"<<page_count<<endl;
            }
            ~books()
            {
                page_count=0;
            }
};
class tape : public publication , public sales //DERIVED CLASS
{
    private:
            float min;
    public:
            tape()
            {
                min=0;
            }
            void read()
            {
                publication :: read();
                sales :: read();
                cout<<"min :"<<" ";
                cin>>min;
            }
            void show()
            {
                cout<<"--------------------------------"<<endl;
                publication :: show();
                sales :: show();
                cout<<"TIME SPEND TO READ BOOK :"<<min<<endl;
                cout<<"--------------------------------"<<endl;
            }
            ~tape()
            {
                min=0;
            }
};
int main()
{
    tape T1;
    T1.read();
    T1.show();
    books B1;
    B1.read();
    B1.show();
    return 0;
}