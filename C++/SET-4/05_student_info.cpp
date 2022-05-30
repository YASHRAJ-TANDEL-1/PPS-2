/* 5. Create a student with the following data members rollno,
name, marks[6],per, class
 Write member functions for each of the following
a. To get the data
b. To display the data
c. To calculate percentage
d. To calculate class based on percentage */
 
#include<iostream>
#include<iomanip>
using namespace std;
class student
{    
    public:

    class stud
    {
    private:
            int roll;
            string name;
            float percentage,marks[6],total=0;
    public:
            void getdata()
            {
                cout<<"Enter the Roll number of student :";
                cin>>roll;
                cout<<"Enter the Name of student :";
                cin.ignore();
                getline(cin,name);
                for (int i = 0; i < 6; i++)
                {
                    cout<<"Enter marks of subject "<<i+1<<":";
                    cin>>marks[i];
                    total=total+marks[i];
                } 
            }
            void showdata()
            {
                cout<<"Name :"<<name<<endl;
                cout<<"Roll number :"<<roll<<endl;
                percentage=total/6;
                for(int i=0; i<6; i++)
                {
                    cout<<"marks of subject "<<i+1<<":"<<marks[i]<<endl;
                }
                cout<<"Percentage :"<<percentage<<"%"<<endl;
            }
    }s[30];     
};
int main()
{
    int n,i,j;
    cout<<"Enter the number of class you want :"<<endl;
    cin>>n;
     class student c[n];
        int a[n];
        for ( i = 0; i < n; i++)
        {
            cout<<"Enter number of student in class "<<i+1<<":";
            cin>>a[i];
            for ( j = 0; j < a[i]; j++)
            {
                c[i].s[j].getdata();
            }  
        }
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"!!!!STUDENT ID!!!!"<<endl;
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < a[i]; j++)
            {
                c[i].s[j].showdata();
            }  
        }
}
