#include <stdio.h>
int main() {
    int age;
    float gpa;

    printf("===================================\n");
    printf("         MY PERSONAL PROFILE       \n");
    printf("===================================\n");
    printf("Name\t:\tSiwapat Butkote\n");
    printf("Major\t:\tComputer technique\n");
    printf("===================================\n");

    printf("Enter your age (Integer): ");
    scanf("%d", &age);
    printf("Enter your GPA (Float): ");
    scanf("%f", &gpa);
    printf("===================================\n");
    printf("Age\t:\t%d\n", age);
    printf("GPA\t:\t%.2f\n", gpa);
    printf("===================================\n");

    printf("===================================\n");
    printf("           PROFILE SUMMARY         \n");
    printf("===================================\n");
    printf("Your Age\t:\t%d years old\n", age);
    printf("Your GPA\t:\t%.2f\n", gpa);
    printf("===================================\n");
    return 0;
}
