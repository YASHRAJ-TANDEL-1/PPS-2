/* 3. Create a class book with following data members
bookname, authorname, rate, qty
Write member functions for each of the following
a. To get the data
b. To display the data
c. To calculate the total price of the book 
USING CONSTRUCTOR AND DESTRUCTOR*/

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
                total_price=0;
                qty=0;
            }
            void readdata()
            {
                cout<<"INFORMATION OF BOOKS"<<endl;
                cout<<"Enter the Book name of book"<<" ";
                cin.ignore();
                getline(cin,bname);
                cout<<"Enter the Author name of book"<<" ";
                cin.ignore();
                getline(cin,aname);
                cout<<"Enter the rate of book"<<" ";
                cin>>rate;
                cout<<"Enter the quantity of book"<<" ";
                cin>>qty;
            }    
            void displaydata()
            {
                total_price=rate*qty;
                cout<<setw(15)<<bname<<setw(15)<<aname<<setw(15)<<qty<<setw(15)<<total_price<<endl; 
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
    cout<<setw(15)<<"BOOK NAME"<<setw(15)<<"AUTHOR NAME"<<setw(15)<<"QUANTITY"<<setw(15)<<"TOTAL AMOUNT"<<endl;
     for(int i=0; i<n; i++)
    {
         b[i].displaydata();
    }
    return 0;

}