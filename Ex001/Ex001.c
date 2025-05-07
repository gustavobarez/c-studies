#include <stdio.h>

void numerosPares() {

}

void numerosImpares() {

}

void somaPares() {

}

void somaImpares() {

}

int main() {

    int num[10];
    printf("Digite 10 numeros \n");

    for(int i=0; i<10; i++) {
        scanf(" %d", &num[i]);
        printf("\n Numero registrado: %d", num[i], "\n");
    }

    return 0;
}