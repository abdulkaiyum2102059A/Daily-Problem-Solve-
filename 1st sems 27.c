#include<stdio.h>
int main()
{
    int a=1,b=1,c,i;
    for(i=0;i<10;i++);{
            c=a+b;
            a=b;
            b=c;

            printf("%d %d %d",a,b,c);
            }

    }

