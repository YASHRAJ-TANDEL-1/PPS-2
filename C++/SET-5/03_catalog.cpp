/*Declare a class catalog with following data memberstitle,
author, year_of_publication, no_of_copies
create array of 15 objects, Use constructors and
destructors properly and write member function for
each of the following
a. To get the data
b. To display the data
c. To search the particular title, if exists then display that
particular record */

#include<iostream>
#include<iomanip>
using namespace std;
class catalog
{
    private:
            int year_p,num_c;
            string author,title;
    public:
            catalog()
            {
                cout<<"Constructer is called."<<endl;
                year_p=0;
                num_c=0;
                author="";
                title="";
            }
            void getdata()
            {
                cout<<"Enter the title of book :";
                cin.ignore();
                getline(cin,title);
                cout<<"Enter the name of author :";
                cin.ignore();
                getline(cin,author);
                cout<<"Enter year of publication :";
                cin>>year_p;
                cout<<"Enter number of copies :";
                cin>>num_c;
            }    
            void showdata()
            {
                cout<<setw(20)<<title<<setw(20)<<author<<setw(20)<<year_p<<setw(20)<<num_c<<endl;
            }    
            void search(catalog b[],int n)
            {
                string stitle;
                cout<<"Enter the title you want search:";
                cin.ignore();
                getline(cin,stitle);
                int flag=0;
                for(int i=0 ;i<n ;i++)
               {
                   if(b[i].title==stitle)
                    {
                        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ !!! LISTED !!! ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                        b[i].showdata();
                        flag++;
                    }
               }
                if(flag==0)
               {
                   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!!! ERROR 404 NOT FOUND !!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
               }
              
            }
            ~catalog()
            {
                cout<<"Destructor is called."<<endl;
            }
};
int main()
{
    int n;
    cout<<"Enter the number of data you want enter"<<endl;
    cin>>n;
    catalog b[n];
    for(int i=0; i<n; i++)
    {
         b[i].getdata();
    }
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ !!! LIST OF BOOKS !!! ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<setw(20)<<"TITLE"<<setw(20)<<"AUTHOR"<<setw(20)<<"YEAR OF PUBLICATION"<<setw(20)<<"NUMBER OF COPIES"<<endl;
    for(int i=0; i<n; i++)
    {
         b[i].showdata();
    }
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    catalog t;
    t.search(b,n);
return 0;
}