#include<stdio.h>
 int main(){
    float radius;
    printf(" enter the radius of circle\n");
    scanf("%f",&radius);
    printf("diamater of the circle is %f\n",2*radius);
    printf("circumferance of the circle %f\n",2*3.14*radius);
    printf("area of the circle %f\n",3.14*radius*radius);
    return 0;
 }