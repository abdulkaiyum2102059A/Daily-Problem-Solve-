#include<stdio.h>
char stringreverse(char str){

int i=0,len=0,j=0;

while(str1[i]!='\0'){
    i++;
    len++;
}


for(j=0,i=len-1;i>=0;i--,j++)
{
    str[j]=str1[i];
}

return str;


}




int main()
{

char str1[20]={"abdul kaiyum"};



char str2[20]=reversestring(str1);

printf("%s",str2);

}

