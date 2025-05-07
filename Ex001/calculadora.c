#include <stdio.h>

int calculadora(int numero1, int numero2, char operacao) {

    int resultado = 0;

    switch(operacao) {

        case 'a':
        resultado = numero1 + numero2;
        break;

        case 's':
        resultado = numero1 - numero2;
        break;

        case 'm':
        resultado = numero1 * numero2;
        break;

        case 'd':
        resultado = numero1 / numero2;
        break;

    }
    
    return resultado;

}

int main() {

    int numero1 = 0;
    int numero2 = 0;
    char operador;

    printf("Digite dois numeros, e o operador aritmetico (a) adicao, (s) subtracao, (m) multiplicacao, (d) divisao\n");

    scanf("%d", &numero1);
    scanf("%d", &numero2);
    scanf(" %c", &operador);

    int resultado = calculadora(numero1, numero2, operador);
    
    printf("\nO calculo foi feito, resultado: %d \n", resultado);

    return 0;
}
