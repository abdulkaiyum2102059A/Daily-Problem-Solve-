#include<stdio.h>
int main()
{
    int n,num,i,count;

    scanf("%d",&num);

    for(n=1;n<=num;n++){

        count=0;

        for(i=2;i<=n/2;i++){
            if(n%i==0){
                count++;
                break;
            }


            }

            if(count==0&&n!=1){
                printf("  %d  ",n);}
        }



        return 0;
    }






















