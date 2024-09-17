#include <stdio.h>

void bubbleSortDecrescente(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Quantos números deseja inserir? ");
    scanf("%d", &n);
    
    int numeros[n];
    printf("Insira os números: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }

    bubbleSortDecrescente(numeros, n);

    printf("Números ordenados em ordem decrescente: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    return 0;
}