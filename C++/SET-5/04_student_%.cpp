/* Create a student with the following data membersrollno, name,
marks[6], per, class
Write member functions for each of the following
a. To get the data
b. To display the data
c. To calculate percentage
d. To calculate class based on percentage
e. To sort the students percentagewise
f. Use constructors and destructors */
#include<iostream>
#include<iomanip>
using namespace std;
class student
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
            char grade()
            {
                    if (percentage>=90)
                    cout<<"! DISTINCTION !"<<endl;
                    else if (percentage>=70)
                    cout<<"! FIRST CLASS !"<<endl;
                    else if (percentage>=60)                          

                    cout<<"! SECOND CLASS !"<<endl;
                    else if (percentage>=35)
                    cout<<"! THIRD CLASS !"<<endl;
                    else
                    cout<<"! FAILED !" <<endl<<"...............................! BETTER LUCK NEXT TIME !.............................."<<endl;
                    return 0;
            }
            void showdata()
            {
                percentage=total/6;
                cout<<setw(20)<<roll<<setw(20)<<name<<setw(20)<<percentage<<setw(20)<<grade()<<endl;
            }
            void sort(student b[],int n)
            {
               for(int i=0 ;i<n-1 ;i++)
               {
                   for(int j=1 ;j<n ;j++)
                   {
                       if(b[j].percentage > b[i].percentage)
                       {
                           student temp;
                           temp=b[i];
                           b[i]=b[j];
                           b[j]=temp;
                       }
                   }
               }
            }
};
int main()
{
    int n,i,j;
    cout<<"Enter the number of student data you want :"<<endl;
    cin>>n;
        student b[n];
        for ( i = 0; i < n; i++)
        {
            b[i].getdata();
        }
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ STUDENT ID ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl; // WITHOUT SORTING
        cout<<setw(20)<<"ROLL NUMBER"<<setw(20)<<"NAME"<<setw(20)<<"PERCENTAGE"<<setw(20)<<"GRADE"<<endl;
        for ( i = 0; i < n; i++)
        {
            b[i].showdata();
        }
        student s;
        s.sort(b,n);
        cout<<"--------------------------------- !!! RESULT !!! -----------------------------------"<<endl; // WITH SORTING
        for ( i = 0; i < n; i++)
        {
            b[i].showdata();
        }
        cout<<"___________________________________! WORK HARD !_____________________________________"<<endl;
        return 0;
}
