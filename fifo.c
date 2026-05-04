#include <stdio.h>

#define MAX 5

int main() {
    
    int estructura[MAX];
    int final = -1;
    int opcion, valor, modo;
    
    printf("Estructura a usar:\n1. LIFO (Pila)\n2. FIFO (Cola)\nOpcion:");
    scanf("%d", &modo);
    
    if (modo != 1 && modo != 2){
        printf("Opcion Invalida.\n");
        
    }
    
    do {
        printf("\n--- MENU %s ---", (modo == 1) ? "LIFO" : "FIFO");
        printf("\n1. Insertar (Encolar/Apilar)");
        printf("\n2. Eliminar (Desencolar/Desapilar)");
        printf("\n3. Mostrar");
        printf("\n4. Salir");
        printf("\nOpcion: ");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1: // INSERTAR
            if (final == MAX - 1){
                printf("Error: No hay espacio.\n");
                
            } else {
                printf("Numero a insertar: ");
                scanf("%d", &valor);
                final++;
                estructura[final] = valor;
                printf("Insertado en posicion %d.\n", final);
                
            }
            break;
            
        case 2: //BORRAR ALV
            if (final == -1) {
                printf("Error: No hay elementos. \n");
            } else {
                if (modo == 1) { //LIFO
                printf("Saliendo: %d (Ultimo en entrar)\n", estructura[final]);
                final--;
            }
            else { //FIFO
            printf("Saliendo: %d (Estaba en pos 0)\n", estructura [0]);
            //Recorrido de todo el desmadre a la izquierda
            for (int i = 0; i < final; i++) {
                estructura[i] = estructura [i + 1];
            }
            final--;
            }
        }
        
        break;
        
        case 3: //MOSTRAR
            if (final == -1){
                printf("La estructura esta vacia. \n");
            } else {
                printf("Contenido: ");
                for (int i = 0; i <= final; i++){
                    printf("[%d]", estructura[i]);
                }
                printf("\n");
            }
        break;
        
    case 4:
    printf("Fin del programa.\n");
    break;
    
    default:
    printf("Opcion no valida.\n");
    }
    while (opcion != 4);
    
    return 0;
}