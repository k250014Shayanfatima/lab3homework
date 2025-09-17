#include <stdio.h>   // for input/output

int main() {
    int mark1, mark2, mark3;
    int total;
    float percentage;

    printf("Enter marks of subject 1: ");
    scanf("%d", &mark1);

    printf("Enter marks of subject 2: ");
    scanf("%d", &mark2);

    printf("Enter marks of subject 3: ");
    scanf("%d", &mark3);
    total = mark1 + mark2 + mark3;
    percentage = (total / 300.0) * 100;

    printf("\nTotal Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
