#include<stdio.h>

int numreverse(int x){
int sum=0;

while(x!=0){
   int digit=x%10;
    sum=sum*10+digit;
    x=x/10;

}
return sum;

}
int main()
{
    int n;
    scanf("%d",&n);

    int reverse=numreverse(n);

    printf("%d",reverse);
}
