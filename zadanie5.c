#include <stdio.h>

int main() {
    int n;

    printf("Podaj liczbe elementow: ");
    scanf("%d", &n);

    int tab[n];

    printf("Podaj %d liczb:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    printf("Wczytana tablica:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
