#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
struct student
{
    char name[20];
    int semester;
    float percentage;
}s[10];
int main()
{
     int i,n;
     cout<<"how many data you want :";
     cin>>n;
     for(i=0;i<n;i++)
     {
         cout<<"Name of student     :";
         cin>>s[i].name;
         cout<<"which semester      :";
         cin>>s[i].semester;
         cout<<"Percentage          :";
         cin>>s[i].percentage;
     }
     for(i=0;i<n;i++)
     {
         cout<<"Name of student  "<<s[i].name       <<endl;
         cout<<"which semester   "<<s[i].semester   <<endl;
         cout<<"Percentage       "<<s[i].percentage <<endl;
     }
     return 0;
}
