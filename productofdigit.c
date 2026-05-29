#include <stdio.h>
int main(){
    long n;
    if (scanf("%ld", &n) != 1)
        return 0;
    long prod = 1;
    long temp = n < 0 ? -n : n;
    if (temp == 0)
        prod = 0;
    while (temp > 0) {
        prod *= temp % 10;
        temp /= 10;
    }
    printf("%ld", prod);
    return 0;
}
