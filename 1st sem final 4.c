#include<stdio.h>
void fun(int x){
x=30;
}
void main()
{
    int y=20;
    fun(y);printf("%d",y);
}
