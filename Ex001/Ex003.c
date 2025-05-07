#include <stdio.h>

void mostrarPares(int matriz[3][3]) {

    for(int i = 0;i < 3;i++) {
        for(int j = 0; j < 3; i++) {
            if(matriz[i][j] % 2 == 0) {
                printf("Achei um par! Numero: %d", matriz[i][j]);
            }
        }
    }
}

void mostrarImpares(int matriz[3][3]) {

    for(int i = 0;i < 3;i++) {
        for(int j = 0; j < 3; i++) {
            if(matriz[i][j] % 2 != 0) {
                printf("Achei um impar! Numero: %d", matriz[i][j]);
            }
        }
    }
}

int somaPares(int matriz[3][3]) {
    int soma = 0;



    return soma;
}

void somaImpares() {

}

int main() {

    int matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    
    int menu = 0;

    printf("Digite um numero");
    scanf("%d", menu);

    switch(menu) {
        case 1:
            mostrarPares(matriz);
        break;

        case 2:

        break;

        case 3:

        break;

        case 4:

        break;

        case 5:

        break;
    }

    return 0;
}
