/*
Name - Bhuvnesh Verma
Roll No - 28*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    int vowelCount = 0, consonantCount = 0, digitCount = 0, spaceCount = 0;
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        if (strchr("aeiouAEIOU", ch) != NULL) {
            vowelCount++;
        }
        else if (isalpha(ch)) {
            consonantCount++;
        }
        else if (isdigit(ch)) {
            digitCount++;
        }
        else if (isspace(ch)) {
            spaceCount++;
        }
    }
    fclose(file);
    printf("Number of vowels: %d\n", vowelCount);
    printf("Number of consonants: %d\n", consonantCount);
    printf("Number of digits: %d\n", digitCount);
    printf("Number of spaces: %d\n", spaceCount);

    return 0;
}
