#include <stdio.h>

int contador(int *numero1, int *numero2) {

    int numeroInicial = *numero1;
    int numeroFinal = *numero2;
    int soma = 0;

    while (numeroInicial < numeroFinal) {
        numeroInicial++;
        soma = soma + numeroInicial;
    }

    soma = soma - numeroFinal;

    return soma; 
    
}

int main() {

    int numero1 = 0;
    int numero2 = 0;

    printf("Digite um numero \n");
    scanf("%d", &numero1);
    printf("Digite outro numero \n");
    scanf("%d", &numero2);

    int resultado = contador(&numero1,&numero2);

    printf("Resultado: \n");
    printf("%d\n", resultado);

    return 0;
}
