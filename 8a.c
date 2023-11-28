/*
Name - Bhuvnesh Verma
Roll No - 28*/
#include <stdio.h>
struct Cricketer {
    char name[50];
    int age;
    int testMatchesPlayed;
    int runsInTest;
    int ODIMatchesPlayed;
    int runsInODI;
};

int main() {
    struct Cricketer cricketers[5];
    FILE *file = fopen("CRICK_FL.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    for (int i = 0; i < 5; ++i) {
        printf("Enter details for Cricketer %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", cricketers[i].name);
        printf("Age: ");
        scanf("%d", &cricketers[i].age);
        printf("Test Matches Played: ");
        scanf("%d", &cricketers[i].testMatchesPlayed);
        printf("Runs in Test Matches: ");
        scanf("%d", &cricketers[i].runsInTest);
        printf("ODI Matches Played: ");
        scanf("%d", &cricketers[i].ODIMatchesPlayed);
        printf("Runs in ODI Matches: ");
        scanf("%d", &cricketers[i].runsInODI);
        fprintf(file, "%s %d %d %d %d %d\n", cricketers[i].name, cricketers[i].age,
                cricketers[i].testMatchesPlayed, cricketers[i].runsInTest,
                cricketers[i].ODIMatchesPlayed, cricketers[i].runsInODI);
    }
    fclose(file);
    file = fopen("CRICK_FL.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1; 
    }
    printf("\nCricketer Information from CRICK_FL file:\n");
    for (int i = 0; i < 5; ++i) {
        fscanf(file, "%s %d %d %d %d %d\n", cricketers[i].name, &cricketers[i].age,
               &cricketers[i].testMatchesPlayed, &cricketers[i].runsInTest,
               &cricketers[i].ODIMatchesPlayed, &cricketers[i].runsInODI);
        printf("Name: %s, Age: %d, Test Matches Played: %d, Runs in Test: %d, ODI Matches Played: %d, Runs in ODI: %d\n",
               cricketers[i].name, cricketers[i].age, cricketers[i].testMatchesPlayed,
               cricketers[i].runsInTest, cricketers[i].ODIMatchesPlayed, cricketers[i].runsInODI);
    }
    fclose(file);
    return 0;
}