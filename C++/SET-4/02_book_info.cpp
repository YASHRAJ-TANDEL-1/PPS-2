/* Create a class item with the following data members item
code, cost, qty, total_price
 Write member functions for each of the following
a. To get the data
b. To display the data
c. To calculate the total price of the item */

#include<iostream>
#include<iomanip>
using namespace std;
class book
{
    private:
            float code,cost,total_price;
            int qty;
    public:
            void readdata()
            {
                cout<<"~~~!!!INFORMATION OF BOOKS!!!~~~"
                cout<<"Enter the code of book"<<" ";
                cin>>code;
                cout<<"Enter the cost of book"<<" ";
                cin>>cost;
                cout<<"Enter the quantity of book"<<" ";
                cin>>qty;
            }    
            void displaydata()
            {
                    total_price=cost*qty;
                cout<<setw(15)<<code<<setw(15)<<cost<<setw(15)<<qty<<setw(15)<<total_price<<endl; 
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
 cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<setw(15)<<"CODE"<<setw(15)<<"COST"<<setw(15)<<"QUANTITY"<<setw(15)<<"TOTAL AMOUNT"<<endl;
     for(int i=0; i<n; i++)
    {
         b[i].displaydata();
    }
    return 0;

}
