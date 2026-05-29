#include <stdio.h>
int main()
{
    int n, rev = 0, sign = 1;
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    if (n < 0) {
        sign = -1;
        n = -n;
    }
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    printf("%d\n", sign * rev);
    return 0;
}
