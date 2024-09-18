#include<stdio.h>
int main()
{
    int num,i,count;

    printf("enter the num:- ");
    scanf("%d",&num);

    for(i=1;num!=0;i++)
    {
        num=num/10;
        count++;
    }
    printf("num of count: %d",count);
    
}