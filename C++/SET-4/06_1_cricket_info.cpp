/* Create a class player with the following data members
name, age, runs, hi, lo, tsts, avg
Write member functions for each of the following
a. To get the data
b. To display the data
c. To calculate the average of the player
   USING CONSTRUCTOR AND DESTRUCTOR */

#include<iostream>
#include<iomanip>
using namespace std;
class player
{
    private:
            string name;
            int age;
            int run;
            int HI,LO,test;
            float avg;
    public:
            player()
            {
                cout<<"Constructer is called."<<endl;
                age=0;
                run=0;
                HI=0;
                LO=0;
                test=0;
                avg=0;
            }
            void getdata()
            {
                cout<<"~~~# DETAILS OF PLAYER #~~~"<<endl;
                cout<<"Enter the Name of player"<<endl;
                cin.ignore();
                getline(cin,name);
                cout<<"Enter the Age of player"<<endl;
                cin>>age;
                cout<<"Enter the Run of player"<<endl;
                cin>>run;
                cout<<"Enter the Highest Score of player"<<endl;
                cin>>HI;
                cout<<"Enter the Lowest Score of player"<<endl;
                cin>>LO;
                cout<<"Enter the Number of Test Match of player"<<endl;
                cin>>test;
            } 
            void showdata()
            {
                avg=run/test;
                cout<<setw(15)<<name<<setw(15)<<age<<setw(15)<<run<<setw(15)<<HI<<setw(15)<<LO<<setw(25)<<test<<setw(15)<<avg<<endl; 
            } 
            ~player()
            {
                cout<<"Destructor is called."<<endl;
            }         
};
int main()
{
    int n;
    cout<<"Enter the number of player deatail you want"<<endl;
    cin>>n;
    player p[n];
    for(int i=0; i<n; i++)
    {
         p[i].getdata();
    }
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<setw(15)<<"NAME"<<setw(15)<<"AGE"<<setw(15)<<"RUN"<<setw(15)<<"HIGEST SCORE"<<setw(15)<<"LOWEST SCORE"<<setw(25)<<"NUMBER OF TEST MATCH"<<setw(15)<<"AVERAGE"<<endl;
    for(int i=0; i<n; i++)
    { 
      p[i].showdata();
    }  
    return 0;
}
