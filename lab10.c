//10. WAP to find out perimeter of the Square and Rectangle.
//Perimeter of square=sum of all four sides

#include<stdio.h>
int main(){
 int a,l,b,ps,pr;
 printf("enter the side of square ");
 scanf("%d",&a);
 
 printf("\n enter the length and breadth of reactangle ");
 scanf("%d%d",&l,&b);
 
 ps=4*a;
 pr=2*(l+b);
 
 printf("\n perimeter of square is %d and perimeter of reactanle is %d",ps,pr);
 return 0;
 }
