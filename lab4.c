//WAP to convert Fahrenheit temp in degree Celsius.

#include<stdio.h>
int main()
{
 double f,c;
 printf("\n enter temperature in fahrenheit ");
 scanf("%lf",&f);
 
 c=0.5556*(f-32);
 
 printf("temprature in celcius is %lf ",c);
 return 0;
 }
 
