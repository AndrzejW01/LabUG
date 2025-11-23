#include <stdio.h>

int main() {
    int n;

    printf("Podaj liczbe elementow: ");
    scanf("%d", &n);

    int t[n], kwadraty[n];

    printf("Podaj %d liczb:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }

    for (int i = 0; i < n; i++) {
        kwadraty[i] = t[i] * t[i];
    }

    printf("Tablica kwadratow:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", kwadraty[i]);
    }
    printf("\n");

    return 0;
}
