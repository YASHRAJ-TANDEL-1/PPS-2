// Declare a class called bird having two private data members called name and weight.
// Define following functions :
// ● default constructor for reading data members from key board
// ● overloaded constructor with two arguments to be used for initialization of data
// members.
// ● display function to display data members.
// ● overloaded member operator >= to compare weight of two bird objects,
// returning false if weight of first bird object is less than that of second & true
// otherwise.
// Define function main to illustrate use of above functions.


#include<iostream>
#include<iomanip>
using namespace std;
class bird
{
    private:
            string name;
            float weight;
    public:
            bird()
            {
                name=" ";
                weight=0;
            }
            void get()
            {
                cout<<"Weight :"<<" ";
                cin>>weight;
                cout<<"Name :"<<" ";
                cin.ignore();
                getline(cin,name);
            }
            void show()
            {
                cout<<"NAME OF BIRD :"<<name<<endl;
                cout<<"WEIGHT OF BIRD :"<<weight<<" KG"<<endl;
            }
            bird operator >= (bird x)
            {
                if(weight >= x.weight)
                {
                    cout<<"TRUE"<<endl;
                }
                else
                {
                    cout<<"FALSE"<<endl;
                }
            }
};
int main()
{
    bird b1,b2;
    cout<<"------------------"<<endl;
    cout<<"BIRD-1"<<endl;
    b1.get();
    cout<<"------------------"<<endl;
    cout<<"BIRD-2"<<endl;
    b2.get();
    cout<<"------------------"<<endl;
    b1.show();
    cout<<"------------------"<<endl;
    b2.show();
    cout<<"------------------"<<endl;
    b1 >= b2;
    cout<<"------------------"<<endl;
    return 0;
}