#include<stdio.h>
int main() 
{
   int r;
   float PI = 3.14, area, ci;
 
   printf("\nEnter radius of circle: ");
   scanf("%d", &r);
 
   area = PI * r * r;
   printf("\nArea of circle : %f ", area);
 
   ci = 2 * PI * r;
   printf("\nCircumference : %f ", ci);
 
   return (0);
}



