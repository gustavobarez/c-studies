#include <stdio.h>

int verificador(int numero) {
    if (numero > 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    int numero = 0;

    printf("Insira um numero para verificador se eh positivo ou negativo: \n");
    scanf("%d", &numero);

    numero=verificador(numero);
    
    printf("%d \n", numero);

    return 0;
}
