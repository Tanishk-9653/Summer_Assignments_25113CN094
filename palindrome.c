#include <stdio.h>
int main()
{
    int n, original, reversed = 0, remainder;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    original = n;
    if (n < 0) {
        printf("Negative numbers are not considered palindrome.\n");
        return 0;
    }
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }
    return 0;
}
