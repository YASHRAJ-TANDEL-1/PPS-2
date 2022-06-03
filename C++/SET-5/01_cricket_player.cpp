/* Create a class player with following data members
Player,name, Team name, Batting average, Read data for 10
payers, Use constructors and destructors properly and write
member function for each of the following
a. To get the data
b. To display the data
c. Sort it according to the batting average
d. Print a team wise sorted list of player’s name with their batting
average */

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class player
{
    private:
            string p_name,t_name;
            float bavg;
    public:
            player()
            {
                cout<<"Constructer is called."<<endl;
                p_name="";
                t_name="";
                bavg=0;
            }
            void getdata()
            {
                    cout<<"!!!! PLAYER DETAILS !!!!"<<endl;;
                    cout<<"Enter the name of player :"<<endl;
                    cin.ignore();
                    getline(cin,p_name);
                    cout<<"Enter the batting average of player :"<<endl;
                    cin>>bavg;
                    cout<<"Enter the team name of player :"<<endl;
                    cin.ignore();
                    getline(cin,t_name);
            }
            void showdata()
            {
                  cout<<setw(20)<<p_name<<setw(20)<<t_name<<setw(20)<<bavg<<endl;
            }
            void sortingavg(player p[],int n)
            {
               for(int i=0 ;i<n-1 ;i++)
               {
                   for(int j=1 ;j<n ;j++)
                   {
                       if(p[j].bavg < p[i].bavg)
                       {
                           player temp;
                           temp=p[i];
                           p[i]=p[j];
                           p[j]=temp;
                       }
                   }
               }
            }
            void sortingteam(player p[],int n)
            {
               for(int i=0;i<n-1;i++)
               {
                   for(int j=1 ;j<n ;j++)
                   {
                       if(p[j].bavg < p[i].bavg)
                       {
                           player temp;
                           temp=p[i];
                           p[i]=p[j];
                           p[j]=temp;
                       }
                   }
               }
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
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    player s;
    s.sortingavg(p,n);
    cout<<"#-#-#-#-#-#-#-#-#-#-# !!! SORTING BY BATTING AVERAGE !!! #-#-#-#-#-#-#-#-#-#-#-#"<<endl;
    cout<<setw(20)<<"PLAYER NAME"<<setw(20)<<"TEAM NAME"<<setw(20)<<"BATTING AVERAGE"<<endl;
    for(int i=0; i<n; i++)
    {
         p[i].showdata();
    }
    s.sortingteam(p,n);
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~ !!! SORTING BY TEAM NAME !!! ~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<setw(20)<<"PLAYER NAME"<<setw(20)<<"TEAM NAME"<<setw(20)<<"BATTING AVERAGE"<<endl;
    for(int i=0 ;i<n ;i++)
    {
        p[i].showdata();
    }
    return 0;
}