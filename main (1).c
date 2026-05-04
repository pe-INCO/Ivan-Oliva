#include <stdio.h>

int arreglo[10] = {10, 45, 54, 87, 96, 45, 71, 58, 45, 69};
int numero_buscado;

int busqueda() {
    int encontrado = 0;

    for (int i = 0; i < 10; i++) {
        if (arreglo[i] == numero_buscado) {
            printf("Encontrado en la posicion: %d\n", i);
            encontrado = 1;
            break;
        }
    }

    if (encontrado == 0) {
        printf("No se encontro el numero\n");
    }

    return 0;
}

int main() {
    printf("Ingrese el numero a buscar: ");
    scanf("%d", &numero_buscado);

    busqueda();

    return 0;
}