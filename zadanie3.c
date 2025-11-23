#include <stdio.h>

int main() {
    int a, b;
    int c = 0;
    int potega = 1;

    printf("Podaj a: ");
    scanf("%d", &a);
    printf("Podaj b: ");
    scanf("%d", &b);

    while (potega <= b) {
        potega *= a;
        c++;
    }

    printf("Pierwsze c takie, że %d^c > %d to: %d\n", a, b, c);

    return 0;
}
