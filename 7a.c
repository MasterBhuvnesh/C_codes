/*
Name - Bhuvnesh Verma 
Roll No - 28
*/
#include <stdio.h>
struct Cricketer {
    char name[50];
    int age;
    int runs;
};
int main() {
    struct Cricketer cricketers[20];
    for (int i = 0; i < 20; i++) {
        printf("Enter details for Cricketer %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", cricketers[i].name);
        printf("Age: ");
        scanf("%d", &cricketers[i].age);
        printf("Runs: ");
        scanf("%d", &cricketers[i].runs);
    }
    int totalRuns = 0;
    for (int i = 0; i < 20; i++) {
        totalRuns += cricketers[i].runs;
    }
    double averageRuns = (double)totalRuns / 20;
    printf("\nCricketers who scored more than average runs (%.2f):\n", averageRuns);
    for (int i = 0; i < 20; i++) {
        if (cricketers[i].runs > averageRuns) {
            printf("Name: %s, Age: %d, Runs: %d\n", cricketers[i].name, cricketers[i].age, cricketers[i].runs);
        }
    }

    return 0;
}

