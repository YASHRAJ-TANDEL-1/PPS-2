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

    cout<<endl<<"sumation of two matrics is "<<endl;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
             cout<<a[i][j] + b[i][j]<<"  ";
             if(j==r-1)
             {
                 cout<<endl;
             }
        }     
    }  
}
int main()
{
    int r,c;
    cout<<"Enter the size of matrics you want ="<<endl;
    cin>>r>>c;
    cout<<"row="<<r <<endl<<"coloumn="<<c;

    AddMatrics(r,c);
    return 0;
}      
  
  
