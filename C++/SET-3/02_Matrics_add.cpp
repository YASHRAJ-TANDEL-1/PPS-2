/* WAP to add two matrices using default argument */

#include<iostream>
#include<iomanip>
using namespace std;
void AddMatrics(int r=2, int c=2)
{
    int a[r][c], b[r][c], i, j;
    cout<<endl<<"Enter the values of First matrics"<<endl;
    for( i=0; i<r; i++)
    {
        for( j=0; j<c; j++)
        {
             cin>> a[i][j]; 
        }   
    }                  
    cout<<endl<<"Enter the values of Second matrics"<<endl;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
             cin>> b[i][j];
        }   
    }
                      cout<<"FIRST MATRICS :"<<endl;
                      for( i=0; i<r; i++)
                      {
                            
                             for( j=0; j<c; j++)
                             {
                                 cout<<a[i][j]<<" ";
                             }   
                             cout<<endl;  
                      }
                     cout<<"SECOND MATRICS :"<<endl;
                     for(i=0; i<r; i++)
                     {
                             for(j=0; j<c; j++)
                             {
                                 cout<< b[i][j]<<" ";
                             }   
                             cout<<endl;  
                     }
    cout<<endl<<"Sumation of two matrics is "<<endl;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
             cout<<a[i][j]    +   b[i][j]<<"   ";
        }     
        cout<<endl;
    }  
}
int main()
{
    int r,c;
    cout<<"Enter the size rows & column of matrics you want ="<<endl;
    cin>>r>>c;
    cout<<"row="<<r <<endl<<"coloumn="<<c;
    AddMatrics(r,c);
    return 0;
}      
  
  