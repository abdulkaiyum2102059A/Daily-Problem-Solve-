#include<stdio.h>
#include<ctype.h>
int main(){
char word[100];
int vowels=0,consonants=0,i;

scanf("%s",word);

for(i=0;word[i]!='\0';i++){

    char ch=tolower(word[i]);

    if(ch>='a'&&ch<='z'){
        if(ch=='a'||ch=='e'||ch=='o'||ch=='i'||ch=='u'){
            vowels++;
        }

        else{
            consonants++;
        }
    }
}

printf("%d\n",vowels);
printf("%d",consonants);

return 0;
}

