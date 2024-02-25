#include<stdio.h>
int main()
{
    int a=5,b=3,c,i;

    for(i=0;i<10;i+=3);
    {
        c=a+b*i;
        a=b%i;
        b=c-i;
    }
    printf("%d %d  %d",a,b,c);
}
