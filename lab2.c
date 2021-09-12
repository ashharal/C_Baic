//calculate simple interest

#include<stdio.h>
int main()
{
int amount, rate, n,simple_intrest;
printf("enter the amount :");
scanf("%d",&amount);

printf("\nenter the number of years:");
scanf("%d",&n);

printf("\nenter the rate of simpple intrest:");
scanf("%d ",&rate);
simple_intrest = (amount*rate*n)/100;
printf("simple interest = %d",simple_intrest);
return 0;
}
 

