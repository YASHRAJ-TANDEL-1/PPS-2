/* 2. Rewrite matrix class (from assignment 5) using operator
overloading concept. i.e. overload (+,-,*,/) */

#include<iostream>
#include<iomanip>
using namespace std;
class matrix
{
    private: 
            float m[5][5];
    public:
            matrix()
            {
                /* Constructer is called.*/
                for(int i=0 ;i<3 ;i++)
    	        {
                    for(int j=0 ;j<3 ;j++)
                    {
			            m[i][j]=0;
                    }
		        }
	        }
            void getdata()
            {
                for(int i=0 ;i<3 ;i++)
    	        {
                    for(int j=0 ;j<3 ;j++)
                    {
			            cin>>m[i][j];
                    }
		        }
            }
            void showdata()
            {
                for(int i=0 ;i<3 ;i++)
    	        {
                    for(int j=0 ;j<3 ;j++)
                    {
			            cout<<m[i][j]<<" ";
                    }
                    cout<<endl;
		        }
            }
            matrix operator +(matrix a)
            {
                matrix  b;
                for(int i=0 ;i<3 ;i++)
                {
                    for(int j=0 ;j<3 ;j++)
                    {
                        b.m[i][j] = m[i][j] + a.m[i][j];
                    }
                    cout<<endl;
                }
                return b;
            }
            matrix operator -(matrix a)
            {
                matrix  b;
                for(int i=0 ;i<3 ;i++)
                {
                    for(int j=0 ;j<3 ;j++)
                    {
                        b.m[i][j] = m[i][j] - a.m[i][j];
                    }
                    cout<<endl;
                }
                return b;
            }
            matrix operator *(matrix a)
            {
                matrix  b;
                for(int i=0 ;i<3 ;i++)
                {
                    for(int j=0 ;j<3 ;j++)
                    {
                        for(int k=0 ;k<3 ;k++)
                        {
                            b.m[i][j] = m[i][j] * a.m[i][j];
                        }
                        cout<<endl;
                    } 
                }
                return b;
            }
            matrix operator /(matrix a)
            {
                matrix  b;
                for(int i=0 ;i<3 ;i++)
                {
                    for(int j=0 ;j<3 ;j++)
                    {
                        for(int k=0 ;k<3 ;k++)
                        {
                            b.m[i][j] = m[i][j] / a.m[i][j];
                        }
                        cout<<endl;
                    } 
                }
                return b;
            }
            ~matrix()
            {
                /* Destructor is called.*/
                for(int i=0 ;i<3 ;i++)
    	        {
                    for(int j=0 ;j<3 ;j++)
                    {
			            m[i][j]=0;
                    }
		        }
            }
};
int main()
{
    matrix x,y,z;

    cout<<"Enter value of first 3x3 matrix"<<endl;
    x.getdata();
    cout<<"Enter value of second 3x3 matrix"<<endl;
    y.getdata();
    
    cout<<"FIRST MATRIXS"<<endl;
    x.showdata();
    cout<<"SECOND MATRIXS"<<endl;
    y.showdata();

    z=x+y;
    cout<<"ADDITION"<<endl;
    z.showdata(); 

    z=x-y;
    cout<<"SUBTRACTION"<<endl;
    z.showdata();

    z=x*y;
    cout<<"MULTIPLICATION"<<endl;
    z.showdata();

    z=x/y;
    cout<<"DIVISION"<<endl;
    z.showdata();
return 0;
}
