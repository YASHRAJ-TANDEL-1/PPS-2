// Assume that vehicle class is defined as base class with price and year of manufacturing.
// Derive two classes namely bus and truck from base class with bus with seating capacity
// and truck with loading capacity. Develop classes with necessary member functions to get
// and put data. Demonstrate its use in main ().

#include<iostream>
#include<iomanip>
using namespace std;
class vehicle
{
    protected:
            float price,YOM;
    public:
            void get()
            {
                cout<<"Enter the price :"<<" ";
                cin>>price;
                cout<<"Years of manufactured :"<<" ";
                cin>>YOM;
            }
            void show()
            {
                cout<<"TOTAL PRICE :"<<price<<endl;
                cout<<"YEARS OF MANUFACTURING :"<<YOM<<endl;
            }
};
class bus : public vehicle
{
    private:
            float SP;
    public:
            void get()
            {
                vehicle :: get();
                cout<<"SP :"<<" ";
                cin>>SP;
            }
            void show()
            {
                cout<<"--------------- BUS ---------------"<<endl;
                vehicle :: show();
                cout<<"SEATING CAPACITY OF BUS :"<<SP<<endl;
                cout<<"----------------------------------"<<endl;
            }
};
class truck : public vehicle
{
    private:
            float LP;
    public:
            void get()
            {
                vehicle :: get();
                cout<<"LP :"<<" ";
                cin>>LP;
            }
            void show()
            {
                cout<<"-------------- TRUCK --------------"<<endl;
                vehicle :: show();
                cout<<"LOADING OF CAPACITY OF TRUCK :"<<LP<<" TONS OF KG"<<endl;
                cout<<"----------------------------------"<<endl;
            }
};
int main()
{
    bus B1;
    B1.get();
    B1.show();
    truck T1;
    T1.get();
    T1.show();
    return 0;
}