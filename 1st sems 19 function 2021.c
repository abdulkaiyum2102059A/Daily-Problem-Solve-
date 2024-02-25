#include <stdio.h>

int main() {
    FILE *inputFile, *oddFile, *evenFile;
    int num;

    inputFile = fopen("NUMB.txt", "r");
    oddFile = fopen("ODD.txt", "w");
    evenFile = fopen("EVEN.txt", "w");

    if (inputFile == NULL || oddFile == NULL || evenFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    while (fscanf(inputFile, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);
        } else {
            fprintf(oddFile, "%d\n", num);
        }
    }

    fclose(inputFile);
    fclose(oddFile);
    fclose(evenFile);

    printf("Numbers have been separated into ODD.txt and EVEN.txt files.\n");

    return 0;
}

