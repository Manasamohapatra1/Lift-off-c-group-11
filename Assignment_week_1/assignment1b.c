#include<stdio.h>

int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num<0) printf("The number is negative\n");
    else if(num==0)printf("The number is 0\n");
    else if(num>0)printf("The number is positive\n");
    else printf("the number is invalid");
    return 0;
}