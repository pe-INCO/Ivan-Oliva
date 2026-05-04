#include <stdio.h>

void quicksort(int arr[], int inicio, int fin){
    int i = inicio;
    int j = fin;
    int pivote = arr[(inicio + fin)/2];
    int temp;

    while(i <= j){
        while(arr[i] < pivote){
            i++;
        }
        while(arr[j] > pivote){
            j--;
        }

        if(i <= j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if(inicio < j){
        quicksort(arr, inicio, j);
    }
    if(i < fin){
        quicksort(arr, i, fin);
    }
}

void insertionSort(int arr[], int n){
    int i, j, key;

    for(i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void mostrar(int arr[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr1[7] = {8, 3, 1, 7, 0, 10, 2};
    int arr2[7] = {8, 3, 1, 7, 0, 10, 2};

    int n = 7;

    printf("Arreglo original:\n");
    mostrar(arr1, n);

    quicksort(arr1, 0, n - 1);
    printf("\nOrdenado con Quick Sort:\n");
    mostrar(arr1, n);

    insertionSort(arr2, n);
    printf("\nOrdenado con Insertion Sort:\n");
    mostrar(arr2, n);

    return 0;
}