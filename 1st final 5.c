
#include<stdio.h>
int main()
{
    int rev=0,num,rem;

    printf("enter an odd num:");
    scanf("%d",&num);

    if(num%2==0){
        printf("error, give a odd number");
        return 0;
    }

    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }

    printf("%d",rev);
}
