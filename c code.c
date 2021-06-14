//program to calculate the area of a circle
#include <stdio.h>
int main()
{
float area,radius;

printf("ENTER THE RADIUS OF A CIRCLE\n");
scanf("%f",&radius); 

area=(3.142*radius*radius);
printf("area of the circle %f",area);

return 0;
}