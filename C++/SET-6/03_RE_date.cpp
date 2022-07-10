/* 3. Rewrite date class (from assignment 5) using operator
overloading concept. i.e. overload (++) operator */

#include<iostream>
#include<iomanip>
using namespace std;
class date
{
    private:
            int day,month,year;
    public:
            date()
            {
                cout<<"Contructor is called."<<endl;
                day=0;
                month=0;
                year=0;
            }
            void getdata()
            {
                cout<<"Enter day :";
                cin>>day;
                cout<<"Enter month :";
                cin>>month;
                cout<<"Enter year :";
                cin>>year;
            }    
            void showdata()
            {
                cout<<"DATE :"<<day<<" / "<<month<<" / "<<year<<"."<<endl;
            }
            void  operator ++()
            {
                /* MONTHS HAVING 31 DAYS */
                if ( (d.day==31) && (d.month==1) || (d.month==3) || (d.month==5) || (d.month==6) || (d.month==8) || (d.month==10) ) 
                {
                    d.month ++;
                    d.day = 1;
                    d.showdata();
                }
                /* MONTHS HAVING 30 DAYS */
                else if  ( (d.day==30) && (d.month==2) || (d.month==4) || (d.month==6) || (d.month==8) || (d.month==9) || (d.month==11) ) 
                {
                    d.month ++;
                    d.day = 1;
                    d.showdata();
                }
                /* FEBRUARY MONTH WITH LEAP YEAR */
                else if ( (d.day==29) && (d.month==2) && (d.year%4)==0 )
                {
                    d.day=1;
                    d.month++;
                    d.showdata();
                }
                else if( (d.day==29) && (d.month==2) && (d.year %4)!=0 )
                {
                    cout<<"!!! ERROR 404 NOT FOUND !!!"<<endl<<"___ (DATE NOT EXCITED) ___"<<endl;
                }
                /* FEBRUARY MONTH WITHOUT LEAP YEAR */
                else if ( (d.day==28) && (d.month==2) && ( (d.year % 4) == 0) )
                {
                    d.day ++;
                    d.showdata();
                } 
                else if ( (d.day==28) && (d.month==2) && ( (d.year % 4) != 0) )
                {
                    d.month ++;
                    d.day = 1;
                    d.showdata();
                } 
                /* FOR DECEMBER MONTH (WHOLE YEAR CHANGES) */
                else if( (d.day==31) && (d.month==12) )
                {
                    d.month = 1;
                    d.day = 1;
                    d.year ++;
                    d.showdata();
                }
                else if( (d.day<=0 || d.day>=32) || (d.month<=0 || d.month>=13) || (d.year<=0) )
				{
					cout<<"!!! ERROR 404 !!!"<<endl<<"(DATE NOT EXCITED)"<<endl;
				}
                /* NORMAL INCREMENT */
                else
                {
                    d.day ++;
                    d.showdata();
                }
            }  
            ~date()
            {
                cout<<"Destructor is called."<<endl;
            }     
};
int main()
{
     date d;
     d.getdata();
     d.showdata();
     d ++;
return 0;
}