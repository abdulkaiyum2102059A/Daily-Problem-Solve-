#include<stdio.h>
int main()
{

    int marks;
    scanf("%d",&marks);

    if(marks>100&&marks<0){
            printf(" it is not valid");

    }
    else{
        switch(marks/10){

        case 10:
        case 9:
        case 8:

        printf("your grade is A+");
        break;

        case 7:

        printf("your grade is A");
        break;

        case 6:

        printf("your grade is b");
        break;

        case 5:

        printf("your grade is c");
        break;

        case 4:

        printf("your grade is d");
        break;

       default :
        printf("your grade is f");



        }
    }









}
