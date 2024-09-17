#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int trocado;
    for (i = 0; i < n - 1; i++) {
        trocado = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                trocado = 1;
            }
        }
        // Se não houve troca, a lista já está ordenada
        if (trocado == 0) {
            break;
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

    bubbleSort(numeros, n);

    printf("Números ordenados em ordem crescente: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    return 0;
}