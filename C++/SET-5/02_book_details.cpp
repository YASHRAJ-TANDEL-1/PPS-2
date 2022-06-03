/* Create class book with following data members book name,
author name, Qty, price
 Read data for 10 books, Use constructors and
destructors properly and writemember function for
each of the following
a. To get the data
b. To display the data
c. To find total price (i.e. qty * price)
d. Sort it according to the total price */


#include<iostream>
#include<iomanip>
using namespace std;
class book
{
    private:
            float rate,total_price;
            int qty;
            string bname,aname;
    public:
            book()
            {
                cout<<"Constructer is called"<<endl;
                rate=0;
                qty=0;
                bname="";
                aname="";
            }
            void readdata()
            {
                cout<<"INFORMATION OF BOOKS"<<endl;
                cout<<"Enter the Book name of book"<<" ";
                cin.ignore();
                getline(cin,bname);
                cout<<"Enter the rate of book"<<" ";
                cin>>rate;
                cout<<"Enter the Author name of book"<<" ";
                cin.ignore();
                getline(cin,aname);
                cout<<"Enter the quantity of book"<<" ";
                cin>>qty;
            }    
            void displaydata()
            {
                total_price=rate*qty;
                cout<<setw(15)<<bname<<setw(15)<<aname<<setw(15)<<qty<<setw(15)<<total_price<<endl; 
            }    
            void sortingprice(book b[],int n)
            {
               for(int i=0 ;i<n-1 ;i++)
               {
                   for(int j=1 ;j<n ;j++)
                   {
                       if(b[j].total_price < b[i].total_price)
                       {
                           book temp;
                           temp=b[i];
                           b[i]=b[j];
                           b[j]=temp;
                       }
                   }
               }
            }
            ~book()
            {
                cout<<"Destructor is called"<<endl;
            }
};
int main()
{
    int n;
    cout<<"Enter the number of book deatail you want"<<endl;
    cin>>n;
    book b[n];
    for(int i=0; i<n; i++)
    {
         b[i].readdata();
    }
    book t;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~ !!! WITHOUT SORTING TOTAL PRICE !!! ~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<setw(15)<<"BOOK NAME"<<setw(15)<<"AUTHOR NAME"<<setw(15)<<"QUANTITY"<<setw(15)<<"TOTAL AMOUNT"<<endl;
    for(int i=0; i<n; i++)
    {
         b[i].displaydata();
    }
    t.sortingprice(b,n);
    cout<<"#-#-#-#-#-#-#-#-#-#-# !!! SORTING BY TOTAL PRICE !!! #-#-#-#-#-#-#-#-#-#-#-#"<<endl;
    cout<<setw(15)<<"BOOK NAME"<<setw(15)<<"AUTHOR NAME"<<setw(15)<<"QUANTITY"<<setw(15)<<"TOTAL AMOUNT"<<endl;
    for(int i=0; i<n; i++)
    {
         b[i].displaydata();
    }

    return 0;

}