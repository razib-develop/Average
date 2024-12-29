#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,sum,aver;
    printf("Enter any four number different\n");
    scanf(" %d %d %d %d",&a,&b,&c,&d);
    sum=a+b+c+d;
    printf("sum of the number = %d \n",sum);
    aver=sum/4;
    printf("Average of the number = %d",aver);
    return 0;
}    