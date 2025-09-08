#include <stdio.h>

int main() {
    int num, reverse = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    reverse = (num % 10) * 100              // last digit → hundreds place
             + ((num / 10) % 10) * 10       // middle digit → tens place
             + (num / 100);                 // first digit → ones place

    printf("Reverse of %d is %d\n", num, reverse);

    return 0;
}
