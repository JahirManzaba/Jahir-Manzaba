#include <stdio.h>

int main() {
    int inicio, fin, incremento;
    printf("Ingrese el numero inicial: ");
    scanf("%d", &inicio);
    printf("Ingrese el numero final: ");
    scanf("%d", &fin);
    printf("Ingrese el valor de incremento: ");
    scanf("%d", &incremento);
    if (incremento == 0) {
        printf("El incremento no puede ser 0.\n");
        return 1;
    }
    if (inicio <= fin) {
        for (int i = inicio; i <= fin; i += incremento) {
            printf("%d\n", i);
        }
    } else {
        for (int i = inicio; i >= fin; i += incremento) {
            printf("%d\n", i);
        }
    }
    return 0;}
