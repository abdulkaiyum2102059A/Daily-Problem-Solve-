#include <stdio.h>

void stringreverse(char str[]) {
    int i = 0, len = 0, j ;

    while (str[i] != '\0') {
        i++;
        len++;
    }


    for (j = 0, i = len-1; i >= 0; i--, j++) {
        str[j] = str[i];
    }
}

int main() {
    char str1[20] = {"abdul kaiyum"};

    stringreverse(str1);

    printf("%s", str1);

    return 0;
}

