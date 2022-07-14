// Declare a class called item having data members item_code, item_name, cost and
// discount. Derive two classes from class item, namely employee and customer. The class
// employee has data members like employee_id and amount. The class customer has data
// members like customer_name and amount. Define following functions
// ● to initialize data members.
// ● to display the values of members.
// ● to compute amount to be paid for purchased item.
// main to create objects of both derived classes and to show usage of above functions.


#include<iostream>
#include<iomanip>
using namespace std;
class item
{
    protected:
            float code,cost,dis;
            string name;
    public:
            void get()
            {
                cout<<"Name :"<<" ";
                getline(cin,name);
                cout<<"code :"<<" ";
                cin>>code;
                cout<<"cost :"<<" ";
                cin>>cost;
                cout<<"Discount :"<<" ";
                cin>>dis;
            }
            void show()
            {
                cout<<"----------------------------------------- ITEM ----------------------------------------------------"<<endl;
                cout<<setw(20)<<"NAME OF ITEM"<<setw(20)<<"ITEM CODE"<<setw(20)<<"ITEM RATE"<<setw(20)<<"DISCOUNT"<<endl;
                cout<<setw(20)<<name<<setw(20)<<code<<setw(20)<<cost<<setw(20)<<dis<<" %"<<endl;
                cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            }
};
class employee : public item
{
    private:
            string ename,eamount;
    public:
            void get()
            {
                item :: get();
                cout<<"emp name :"<<" ";
                cin.ignore();
                getline(cin,ename);
                cout<<"salary :"<<" ";
                cin>>eamount;
            }
            void show()
            {
                item :: show();
                cout<<"------------------------------------------ EMPLOYEE ---------------------------------------------------"<<endl;
                cout<<setw(20)<<"EMPLOYEE NAME"<<setw(20)<<"SALARY"<<endl;
                cout<<setw(20)<<ename<<setw(20)<<eamount<<endl;
                cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
            }
};
class customer : public item
{
    private:
            string cname;
            float camount;
    public:
            void get()
            {
                item :: get();
                cout<<"cust name :"<<" ";
                cin.ignore();
                getline(cin,cname);
                camount= cost - (cost * ( dis / 100 ) );
            }
            void show()
            {
                item :: show();
                cout<<"--------------------------------------- CUSTOMER ------------------------------------------------------"<<endl;
                cout<<setw(20)<<"CUSTOMER NAME"<<setw(20)<<"TOTAL AMMOUNT"<<endl;
                cout<<setw(20)<<cname<<setw(20)<<camount<<endl;
                cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
            }
};
int main()
{
    employee E1;
    E1.get();
    E1.show();
    customer C1;
    C1.get();
    C1.show();
    return 0;
}