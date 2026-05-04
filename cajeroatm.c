

#include <stdio.h>

int main() {
    float saldo = 5000.00;
    int opcion;
    float monto;

    do {
        printf("\n--- CAJERO ATM ---\n");
        printf("1. Consultar saldo\n");
        printf("2. Depositar dinero\n");
        printf("3. Retirar dinero\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("\nSu saldo actual es: $%.2f MXN\n", saldo);
                break;

            case 2:
                monto = 0;
                // Validación de depósito
                while (monto < 100 || monto > 20000 || (int)monto % 100 != 0) {
                    printf("\nIngrese monto a depositar (Multiplos de $100, min $100, max $20,000): $");
                    scanf("%f", &monto);
                    
                    if (monto < 100 || monto > 20000 || (int)monto % 100 != 0) {
                        printf("Error: Monto no valido o fuera de los limites.\n");
                    }
                }
                saldo += monto;
                printf("Deposito exitoso. Nuevo saldo: $%.2f\n", saldo);
                break;

            case 3:
                monto = 0;
                // Validación de retiro
                while (monto < 50 || monto > 5000 || (int)monto % 50 != 0 || monto > saldo) {
                    printf("\nIngrese monto a retirar (Multiplos de $50, max $5,000): $");
                    scanf("%f", &monto);

                    if (monto > saldo) {
                        printf("Error: Fondos insuficientes (Saldo actual: $%.2f).\n", saldo);
                    } else if (monto < 50 || monto > 5000 || (int)monto % 50 != 0) {
                        printf("Error: El monto debe ser multiplo de $50 y maximo $5,000.\n");
                    }
                }
                saldo -= monto;
                printf("Retiro exitoso. Nuevo saldo: $%.2f\n", saldo);
                break;

            case 4:
                printf("\n--- RESUMEN FINAL ---\n");
                printf("Saldo final de la cuenta: $%.2f MXN\n", saldo);
                printf("Gracias por usar el cajero ATM. ¡Buen dia!\n");
                break;

            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }

    } while (opcion != 4);

    return 0;
}

