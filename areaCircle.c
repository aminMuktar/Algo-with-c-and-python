#include<stdio.h>
#define PI 3.14
#define areaofcircle(x) ((PI)*(x)*(x))
int main(){
float area;
int radius;
printf("enter the radius:");
scanf("%d",&radius);
area=areaofcircle(radius);
printf("\narea of the circle with radius %d is %f \n",radius,area);
return 0;
}
