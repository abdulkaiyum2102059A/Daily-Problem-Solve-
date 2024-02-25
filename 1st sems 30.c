#include<stdio.h>
int main()
{

char str1[20]={"abdul kaiyum"};
char str2[20];

int i=0,len=0,j;

while(str1[i]!='\0'){
    i++;
    len++;
}

printf("%d",len);

for(j=0,i=len-1;i>=0;i--,j++)
{
    str2[j]=str1[i];
}

printf("\n%s",str2);


}


