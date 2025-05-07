#include <stdio.h>

int calculateMedia(int numbers[10]) {
    int sumnumbers = 0;
    for(int i = 0; i < 10; i++) {
        sumnumbers += numbers[i];
    }

    return sumnumbers / 10;
}

int higherThanMedia(int numbers[10]) {

    int media = calculateMedia(numbers);

    for(int i = 0; i < 10; i++) {
        if (numbers[i] > media) {
            printf("Number higher than media: %d \n", numbers[i]);
        }
    }
}

int main() {

    int num[10];

    printf("Insert 10 numbers \n");

    for(int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
        printf("Number: %d \n", num[i]);
    }

    printf("Media %d \n", calculateMedia(num));
    higherThanMedia(num);

    return 0;
}