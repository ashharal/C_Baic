//WAP which calculate speed for time and distance.

#include<stdio.h>
int main()
{
  int time , distance, Speed;
 printf("enter the distance in meter");
 scanf("%d",&distance);
 
 printf("enter the time in seconds");
 scanf("%d",&time);
 
 Speed=(distance/time);
 
 printf("speed = %d meter per sec",Speed);
 return 0;
 }
