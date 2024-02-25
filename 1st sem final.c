#include <stdio.h>
#include <string.h>

void replaceOccurrences(char* str1, const char* str2, const char* str3) {
    int str1Len = strlen(str1);
    int str2Len = strlen(str2);
    int str3Len = strlen(str3);

    int i, j, k, match;

    for (i = 0; i <= str1Len - str2Len; i++) {
        // Check if the substring starting at index i matches str2
        match = 1;
        for (k = 0; k < str2Len; k++) {
            if (str1[i + k] != str2[k]) {
                match = 0;
                break;
            }
        }

        // If the match is found, replace str2 with str3
        if (match) {
            for (j = str1Len - 1; j >= i + str2Len; j--) {
                str1[j + str3Len - str2Len] = str1[j];
            }
            for (j = 0; j < str3Len; j++) {
                str1[i + j] = str3[j];
            }
            i += str3Len - 1; // Move the index i to the end of str3
            str1Len += str3Len - str2Len; // Update str1 length
        }
    }
}

int main() {
    char str1[1000];
    char str2[100];
    char str3[100];

    printf("Enter the first string: ");
    scanf("%999[^\n]%*c", str1);

    printf("Enter the string to be replaced: ");
    scanf("%99[^\n]%*c", str2);

    printf("Enter the replacement string: ");
    scanf("%99[^\n]%*c", str3);

    replaceOccurrences(str1, str2, str3);

    printf("Modified string: %s\n", str1);

    return 0;
}

