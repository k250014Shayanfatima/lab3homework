#include <stdio.h>

int main() {
    float basic, hra, da, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    hra = 0.10 * basic;
    da = 0.05 * basic;
    gross = basic + hra + da;

    printf("HRA = %.2f\n", hra);
    printf("DA = %.2f\n", da);
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}
