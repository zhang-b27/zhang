#include<stdio.h>
int main(void)
{
    int a,b,c,d,sum;
    float aver;
    a=10,b=20,c=30,d=40;
    sum=a+b+c+d;
    aver=(a+b+c+d)/4.0;
    printf("sum is %d average is %.1f\n",sum,aver);
    return 0;
} 