#include<stdio.h>
void main()
// sum of first and last digits.//
{
    int num,i,first,last;

    printf("enter the num:");
    scanf("%d",&num);

    last=num%10;

    for(i=1;num!=0;i++)
    {
        first=num;
        num=num/10;


    }

      printf("\nfirst %d last %d",first,last);
      printf("\nsum of first and last digits: %d",first+last);
}