#include <stdio.h>
int main() {
    int n, target, count = 0, digit;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Enter digit to count: ");
    scanf("%d", &target);
    if (n < 0) n = -n;
    if (n == 0 && target == 0) count = 1;
    while (n != 0) {
        digit = n % 10;
        if (digit == target) count++;
        n /= 10;
    }
    printf("Frequency = %d\n", count);
    return 0;
}
