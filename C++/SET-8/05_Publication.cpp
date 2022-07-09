/* 5. Create a class publication with title and price. Use necessary
constructors, destructors and functions. Derive two classes books
(member page_count), tape(member mins). Write necessary functions. */

#include<iostream>
#include<iomanip>
using namespace std;
class publication
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
class books : public publication
{
    protected:
            int page_count;
    public:
            books()
            {
                page_count=0;
            }
            void read()
            {
                publication :: read();
                cout<<"PAGE COUNT :"<<" ";
                cin>>page_count;
            }
            void show()
            {
                publication :: show();
                cout<<"NUMBER OF PAGES READ :"<<page_count<<endl;
            }
            ~books()
            {
                page_count=0;
            }
};
class tape : public books
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
                books :: read();
                cout<<"min :"<<" ";
                cin>>min;
            }
            void show()
            {
                cout<<"--------------------------------"<<endl;
                books :: show();
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
    return 0;
}