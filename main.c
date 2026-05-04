#include <stdio.h>

// funciones
void mostrarMenu();
float sumar(float a, float b);
float restar(float a, float b);
float multiplicar(float a, float b);
void dividir(float a, float b);

int main() {
    int opcion;
    float num1, num2;

    do {
        mostrarMenu();
        printf("\nSeleccione una opcion: ");
        scanf("%d", &opcion);

        // solo pedimos números si la opción es de operación 1 al 4
        if (opcion >= 1 && opcion <= 4) {
            printf("\nIngrese el primer numero: ");
            scanf("%f", &num1);
            printf("\nIngrese el segundo numero: ");
            scanf("%f", &num2);
        }

        switch (opcion) {
            case 1:
                printf("\nResultado: %.2f + %.2f = %.2f\n", num1, num2, sumar(num1, num2));
                break;
            case 2:
                printf("\nResultado: %.2f - %.2f = %.2f\n", num1, num2, restar(num1, num2));
                break;
            case 3:
                printf("\nResultado: %.2f * %.2f = %.2f\n", num1, num2, multiplicar(num1, num2));
                break;
            case 4:
                dividir(num1, num2);
                break;
            case 5:
                printf("\nSaliendo del programa. ¡Hasta luego!\n");
                break;
            default:
                printf("\nOpcion no valida. Intente de nuevo.\n");
        }
        
        printf("\n-------------------------------\n");

    } while (opcion != 5);

    return 0;
}

// definicion de funciones 

void mostrarMenu() {
    printf("\n--- CALCULADORA BASICA ---\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. Salir\n");
}

float sumar(float a, float b) {
    return a + b;
}

float restar(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

void dividir(float a, float b) {
    if (b == 0) {
        printf("\nError: No se puede dividir por cero.\n");
    } else {
        printf("\nResultado: %.2f / %.2f = %.2f\n", a, b, a / b);
    }
}







