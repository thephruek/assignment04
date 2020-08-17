#include <stdio.h>

int main() {
    int k, x = 2;
    printf("Enter number : ");
    scanf("%d", &k);
    printf("Factoring Result : ");
    while (k != 1) {
        while (k % x == 0) {
            printf("%d ", x);
            k = k / x;
            if (k != 1) {
                printf("x ");
            }
            else
                printf(" ");
        }
        x++;
    }
    return 0;
}
