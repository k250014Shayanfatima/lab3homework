#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer between 65 and 90: ");
    scanf("%d", &num);
    if (num >= 65 && num <= 90) {
        printf("%d = %c\n", num, num);
    } else {
        printf("Invalid input! Please enter a number between 65 and 90.\n");
    }
    return 0;
}
