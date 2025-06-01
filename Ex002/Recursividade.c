#include <stdio.h>

int fatorial(int number) {

    int resultado = 0;
    if(number <= 1) {
        return (1);
    } else {
        for(int i = 1; i <= number; i++) {
            resultado = fatorial(number-1) * number;
        }
    }
    
    return (resultado);

}

int main() {

    int numero = 0;

    printf("Digite um numero para descobrir o fatorial:");
    scanf("%d", &numero);
    
    int resultado = fatorial(numero);

    printf("\nResultado: %d \n", resultado);

    return 0;
}
