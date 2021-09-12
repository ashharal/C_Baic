//8. WAP to accept five subject marks and find out total and average of the marks.
#include<stdio.h>
int main()
{
 int a,b,c,d,e,total;
 float avg;
 
 printf("enter the value of 5 variables");
 scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
 
 total=a+b+c+d+e;
 avg =total/5;
 
 printf("total =%d and avg=%.2f",total,avg);
 return 0;
 }
