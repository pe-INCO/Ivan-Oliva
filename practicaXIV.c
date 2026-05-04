#include <stdio.h>

int main() {
    int arreglo[10];
    int tamaño = 0;
    int opcion, i, pos, valor;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Inicializar arreglo (valores 0-4)\n");
        printf("2. Mostrar arreglo\n");
        printf("3. Agregar elemento al final\n");
        printf("4. Insertar elemento en posicion\n");
        printf("5. Eliminar elemento por posicion\n");
        printf("6. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {

            case 1:
                tamaño = 10;
                for(i = 0; i < tamaño; i++) {
                    arreglo[i] = i % 5; // valores "aleatorios" simples 0-4
                }
                printf("Arreglo inicializado.\n");
                break;

            case 2:
                if(tamaño == 0) {
                    printf("Arreglo vacio.\n");
                } else {
                    printf("Arreglo: ");
                    for(i = 0; i < tamaño; i++) {
                        printf("%d ", arreglo[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                if(tamaño < 10) {
                    printf("Ingresa valor: ");
                    scanf("%d", &valor);
                    arreglo[tamaño] = valor;
                    tamaño++;
                } else {
                    printf("Arreglo lleno.\n");
                }
                break;

            case 4:
                if(tamaño < 10) {
                    printf("Posicion (0 a %d): ", tamaño);
                    scanf("%d", &pos);
                    printf("Valor: ");
                    scanf("%d", &valor);

                    if(pos >= 0 && pos <= tamaño) {
                        for(i = tamaño; i > pos; i--) {
                            arreglo[i] = arreglo[i-1];
                        }
                        arreglo[pos] = valor;
                        tamaño++;
                    } else {
                        printf("Posicion invalida.\n");
                    }
                } else {
                    printf("Arreglo lleno.\n");
                }
                break;

            case 5:
                if(tamaño > 0) {
                    printf("Posicion a eliminar (0 a %d): ", tamaño-1);
                    scanf("%d", &pos);

                    if(pos >= 0 && pos < tamaño) {
                        for(i = pos; i < tamaño-1; i++) {
                            arreglo[i] = arreglo[i+1];
                        }
                        tamaño--;
                    } else {
                        printf("Posicion invalida.\n");
                    }
                } else {
                    printf("Arreglo vacio.\n");
                }
                break;

            case 6:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion no valida.\n");
        }

    } while(opcion != 6);

    return 0;
}