#include <stdio.h>

int potega(int a, int b) {
    int wynik = 1;
    for (int i = 1; i <= b; i++) {
        wynik *= a;  
    }
    return wynik;
}

int main() {
    int a, b;
    
    printf("Podaj liczbę naturalną a: ");
    scanf("%d", &a);
    
    printf("Podaj liczbę naturalną b: ");
    scanf("%d", &b);
    
    if (b < 0) {
        printf("Potęga nie może być liczbą ujemną.\n");
    } else {
        printf("%d do potęgi %d wynosi: %d\n", a, b, potega(a, b));
    }
    
    return 0;
}
