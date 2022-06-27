/* 6. Write a program to compare two date class objects by
overloading <, >, ==,!= operators. */

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
                            //Contructor is called.
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
                        void nextday(date d)
                        {
                                /* MONTHS HAVING 31 DAYS */
                                if ( (d.day==31) && (d.month==1) || (d.month==3) || (d.month==5) || (d.month==6) || (d.month==8) || (d.month==10) ) 
                                {
                                    d.month += 1;
                                    d.day = 1;
                                    d.showdata();
                                }
                                /* MONTHS HAVING 30 DAYS */
                                else if ( (d.day==30) && (d.month==2) || (d.month==4) || (d.month==6) || (d.month==8) || (d.month==9) || (d.month==11) ) 
                                {
                                    d.month += 1;
                                    d.day = 1;
                                    d.showdata();
                                }
                                /* FEBRUARY MONTH WITH LEAP YEAR */
                                else if( (d.day==29) && (d.month==2) && (d.year%4)==0 )
                                {
                                    d.day=1;
                                    d.month+=1;
                                    d.showdata();
                                }
                                else if( (d.day==29) && (d.month==2) && (d.year%4)!=0 )
                                {
                                    cout<<"!!! ERROR 404 NOT FOUND !!!"<<endl<<"___ (DATE NOT EXCITED) ___"<<endl;
                                }
                                /* FEBRUARY MONTH WITHOUT LEAP YEAR */
                                else if ( (d.day==28) && (d.month==2) && ( (d.year % 4) == 0) )
                                {
                                    d.day += 1;
                                    d.showdata();
                                } 
                                else if ( (d.day==28) && (d.month==2) && ( (d.year % 4) != 0) )
                                {
                                    d.month += 1;
                                    d.day = 1;
                                    d.showdata();
                                } 
                                /* FOR DECEMBER MONTH (WHOLE YEAR CHANGES) */
                                else if( (d.day==31) && (d.month==12) )
                                {
                                    d.month = 1;
                                    d.day = 1;
                                    d.year += 1;
                                    d.showdata();
                                }
                                else if( (d.day<=0 || d.day>=32) || (d.month<=0 || d.month>=13) || (d.year<=0) )
                                {
                                    cout<<"!!! ERROR 404 !!!"<<endl<<"(DATE NOT EXCITED)"<<endl;
                                }
                                /* NORMAL INCREMENT */
                                else
                                {
                                    d.day += 1;
                                    d.showdata();
                                }
                        }
                        void operator > (date d)
                        {
                            if( day > d.day && month > d.month && year > d.year)
                            {
                                cout<<"DATE ONE IS BIGGER"<<endl;
                            }    
                        }  
                        void operator < (date d)
                        {
                            if( day < d.day && month < d.month && year < d.year)
                            {
                                cout<<"DATE TWO IS BIGGER"<<endl;
                            }    
                        }  
                        void operator == (date d)
                        {
                            if( day == d.day && month == d.month && year == d.year)
                            {
                                cout<<"BOTH DATE ARE SAME"<<endl;
                            }    
                        }  
                        void operator != (date d)
                        {
                            if( day != d.day && month != d.month && year != d.year)
                            {
                                cout<<"BOTH DATE ARE NOT SAME"<<endl;
                            }    
                        }  
                        ~date()
                        {
                            // Destructor is called.
                            day=0;
                            month=0;
                            year=0;
                        }     
};
int main()
{
    date d1,d2;
    d1.getdata();
    d1.nextday(d1);
    cout<<endl;
                d2.getdata();
                d2.nextday(d2);
                cout<<endl;
    cout<<"-----------------DATE ONE------------------"<<endl;
    d1.showdata();
    cout<<"-----------------DATE TWO------------------"<<endl;
    d2.showdata();
    cout<<"---------------- COMPARING ----------------"<<endl;
    d1 > d2 ;
    d1 < d2 ;
    d1 == d2 ;
    d1 != d2 ;
    cout<<"-------------------------------------------"<<endl;
return 0;
}

