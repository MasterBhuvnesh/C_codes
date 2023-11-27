/*
Name - Bhuvnesh Verma
Roll No - 28
*/
#include <stdio.h>
#include <string.h>

int areStringsEqual(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return 0;
        }
        str1++;
        str2++;
    }
    return (*str1 == '\0' && *str2 == '\0');
}

int main() {
    char string1[100];
    char string2[100];
    printf("Enter the first string: ");
    scanf("%s", string1);
    printf("Enter the second string: ");
    scanf("%s", string2);
    if (areStringsEqual(string1, string2)) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    return 0;
}
#include <stdio.h>
#include <ctype.h>

int main() {
    // Open the file in read mode
    FILE *file = fopen("your_file.txt", "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1; // Exit with an error code
    }

    // Initialize counters
    int vowelCount = 0, consonantCount = 0, digitCount = 0, spaceCount = 0;
    char ch;

    // Read each character from the file
    while ((ch = fgetc(file)) != EOF) {
        // Check if the character is a vowel
        if (strchr("aeiouAEIOU", ch) != NULL) {
            vowelCount++;
        }
        // Check if the character is a consonant
        else if (isalpha(ch)) {
            consonantCount++;
        }
        // Check if the character is a digit
        else if (isdigit(ch)) {
            digitCount++;
        }
        // Check if the character is a space
        else if (isspace(ch)) {
            spaceCount++;
        }
    }

    // Close the file
    fclose(file);

    // Display the counts
    printf("Number of vowels: %d\n", vowelCount);
    printf("Number of consonants: %d\n", consonantCount);
    printf("Number of digits: %d\n", digitCount);
    printf("Number of spaces: %d\n", spaceCount);

    return 0; // Exit successfully
}
