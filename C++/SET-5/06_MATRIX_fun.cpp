/* 6. Create class matrix with following data members
int array[size][size] (size can vary), Use
constructors and destructors properly and for
performing various arithmetic operations write
member functions for each of thefollowing
a. Addition function to add two matrices
b. Subtraction function to add two matrices
c. Multiplication function to add two matrices
d. Division function to add two matrices 
e. Function to get data and to print data */

#include<iostream>
#include<iomanip>
using namespace std;
class matrix
{
    private:
            int r,c;
    public:
            matrix()
            {
                  cout<<endl<<"Constructer is called."<<endl;
                  r=0;
                  c=0;
            }
            void readdata(int r=2, int c=2)
            {
                int a[r][c], b[r][c]; 
                int i, j;
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<endl<<"Enter the values of First matrics"<<endl;
                for( i=0; i<r; i++)
                {
                    for( j=0; j<c; j++)
                    {
                        cin>> a[i][j]; 
                    }   
                }
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;                  
                cout<<endl<<"Enter the values of Second matrics"<<endl;
                for(i=0; i<r; i++)
                {
                    for(j=0; j<c; j++)
                    {
                        cin>> b[i][j];
                    }   
                } 
            }     
            void showdata(int r=2, int c=2)
            {
                    int a[r][c], b[r][c]; 
                    int i, j;
                    cout<<"========================================="<<endl;
                                cout<<"FIRST MATRICS :"<<endl;
                                for( i=0; i<r; i++)
                                {       
                                    for(  j=0; j<c; j++)
                                    {
                                        cout<< a[i][j]<<" ";
                                    }   
                                    cout<<endl;  
                                }
                    cout<<endl;
                                cout<<"SECOND MATRICS :"<<endl;
                                for(i=0; i<r; i++)
                                {
                                    for(j=0; j<c; j++)
                                    {
                                        cout<< b[i][j]<<" ";
                                    }   
                                    cout<<endl;  
                                }  
                    cout<<"========================================="<<endl;                                     
            }  
                                        void add(int r=2, int c=2)
                                        {
                                            int a[r][c], b[r][c]; 
                                            int i, j;
                                            cout<<"~~~~~~~~~~~~~~~~~~!! ADDITION !!~~~~~~~~~~~~~~~~~~~"<<endl;
                                            for(i=0; i<r; i++)
                                            {
                                                for(j=0; j<c; j++)
                                                {
                                                    
                                                    cout<<a[i][j]    +   b[i][j]<<"   ";
                                                }     
                                                cout<<endl;
                                            }
                                        } 
            void sub(int r=2, int c=2)
            {
                int a[r][c], b[r][c]; 
                int i, j;
                cout<<"~~~~~~~~~~~~~~~~!! SUBTRACTION !!~~~~~~~~~~~~~~~"<<endl;
                for(i=0; i<r; i++)
                {
                    for(j=0; j<c; j++)
                    {
                        cout<<a[i][j]    -   b[i][j]<<"   ";
                    }     
                    cout<<endl;
                }
            } 
                                        void multi(int r=2, int c=2)
                                        {
                                            int a[r][c], b[r][c]; 
                                            int i, j,result;
                                            cout<<"~~~~~~~~~~~~~~~~!! MULTIPLICATION !!~~~~~~~~~~~~~~~"<<endl;
                                            for(i=0; i<r; i++)
                                            {
                                                for(j=0; j<c; j++)
                                                {
                                                     for(int k=0; k<r; k++)
                                                     {
                                                        result += a[i][k]    *   b[k][j];
                                                     }
                                                     cout<<result<<" ";
                                                     result=0;    
                                                }  
                                                cout<<endl;     
                                            }
                                        } 
            void div(int r=2, int c=2)
            {
                float  a[r][c], b[r][c]; 
                int i, j;
                cout<<"~~~~~~~~~~~~~~~~~~~~~!! DIVISION !!~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                for(i=0; i<r; i++)
                {
                for(j=0; j<c; j++)
                {
                    cout<<a[i][j]    /   b[i][j]<<"   ";
                }     
                cout<<endl;
                }
            } 
            ~matrix()
            {
                cout<<"Destructor is called."<<endl;
            }
};
int main()
{   
    int r,c;
    cout<<"Enter the size rows & column of matrics you want ="<<endl;
    cin>>r>>c;
    cout<<"row ="<< r <<endl<<"coloumn ="<< c ; 
    
    matrix m;
    m.readdata(r,c);
    m.showdata(r,c);
    m.add(r,c);  
    m.sub(r,c);
    m.multi(r,c);
    m.div(r,c);
    return 0;
}