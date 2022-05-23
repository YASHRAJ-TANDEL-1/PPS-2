#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n,roll[100],marks[100];
   clrscr();
   printf("enter the number of student");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("\n roll number =");
      scanf("%d",&roll[i]);
      printf("\n marks=");
      scanf("%d",&marks[i]);
   }
   for(i=0;i<n;i++)
   {
      printf("\n roll number=%d",roll[i]);
      printf("\n maARKS=%d",marks[i]);
   }
   getch();
}