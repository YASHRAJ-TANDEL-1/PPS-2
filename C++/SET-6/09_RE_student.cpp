/* 9. Rewrite student class (from assignment 5) using comparison
overloaded operators < & >. */

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
            void operator > (student x)
            {
                if(percentage > x.percentage)
                {
                    cout<<"STUDENT_1 HAVING HIGHER PERCENTAGE"<<endl;
                }
            }
            void operator < (student x)
            {
                if(percentage < x.percentage)
                {
                    cout<<"STUDENT_2 HAVING HIGHER PERCENTAGE"<<endl;
                }
            }
};
int main()
{
    student s1,s2;
    s1.getdata();
    s2.getdata();
    cout<<setw(20)<<"ROLL NUMBER"<<setw(20)<<"NAME"<<setw(20)<<"PERCENTAGE"<<setw(20)<<"GRADE"<<endl;
    cout<<endl;
    s1.showdata();
    s2.showdata();
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    s1 > s2 ;
    s1 < s2 ;
    return 0;
}
