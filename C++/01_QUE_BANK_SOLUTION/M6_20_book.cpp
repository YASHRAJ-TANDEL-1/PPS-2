// Declare a class called book having members like book_title, publisher and
// author_name. Overload operators << and >> for class book. Define function main.

#include<iostream>
#include<iomanip>
using namespace std;
class book
{
    private:
            string title,pub,author;
    public:
            book()
            {
                title="";
                pub="";
                author="";
            }
            void get()
            {
                cout<<"Title :"<<" ";
                getline(cin,title);
                cout<<"Publisher :"<<" ";
                getline(cin,pub);
                cout<<"Author :"<<" ";
                getline(cin,author);
            }
            void show()
            {
                cout<<"TITLE OF BOOK :"<<title<<endl;
                cout<<"NAME OF PUBLISHER :"<<pub<<endl;
                cout<<"NAME OF AUTHOR :"<<author<<endl;
            }
            void operator > (book x)
            {
                if(title > x.title)
                {
                    cout<<"BOOK-1 TITLE IS LARGE"<<endl;
                }
                else
                {
                    cout<<"BOOK-2 TITLE IS LARGE"<<endl;
                }
            }
            ~book()
            {
                title="";
                pub="";
                author="";
            }
};
int main()
{
    book b1,b2;
    b1.get();
    b2.get();
    cout<<"BOOK-1"<<endl;
    b1.show();
    cout<<"BOOK-2"<<endl;
    b2.show();
    cout<<endl;
    b1 > b2;
    return 0;
}