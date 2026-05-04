#include <stdio.h>
#include <ctype.h>

int main() {
    int opcion;
 
    int total_estudiantes = 0, aprobados = 0, reprobados = 0;
    float suma_total = 0, suma_aprobados = 0, suma_reprobados = 0;
    
    do {
        printf("\n--- SISTEMA DE CALIFICACIONES ---\n");
        printf("1. Ingresar calificaciones\n");
        printf("2. Ver estadisticas\n");
        printf("3. Reiniciar datos\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: {
                char continuar;
                do {
                    float nota;
                    printf("\nIngrese la calificacion del estudiante %d (0-100): ", total_estudiantes + 1);
                    scanf("%f", &nota);

               
                    if (nota >= 0 && nota <= 100) {
                        total_estudiantes++;
                        suma_total += nota;

                        if (nota >= 60) {
                            aprobados++;
                            suma_aprobados += nota;
                        } else {
                            reprobados++;
                            suma_reprobados += nota;
                        }
                        
                        printf("¿Desea ingresar otra calificacion? (s/n): ");
                        scanf(" %c", &continuar); // El espacio antes de %c limpia el buffer
                    } else {
                        printf("Error: La calificacion debe estar entre 0 y 100.\n");
                        continuar = 's'; // Reintentar
                    }
                } while (tolower(continuar) == 's');
                break;
            }

            case 2:
                if (total_estudiantes == 0) {
                    printf("\nNo hay datos registrados aun.\n");
                } else {
                    printf("\n======= RESULTADOS =======\n");
                    printf("Total de calificaciones: %d\n", total_estudiantes);
                    printf("Promedio general: %.2f\n", suma_total / total_estudiantes);
                    
                    printf("Estudiantes aprobados: %d (%.2f%%)\n", 
                            aprobados, (float)aprobados / total_estudiantes * 100);
                    printf("Estudiantes reprobados: %d (%.2f%%)\n", 
                            reprobados, (float)reprobados / total_estudiantes * 100);
                    
                  
                    if (aprobados > 0)
                        printf("Promedio de aprobados: %.2f\n", suma_aprobados / aprobados);
                    if (reprobados > 0)
                        printf("Promedio de reprobados: %.2f\n", suma_reprobados / reprobados);
                    printf("==========================\n");
                }
                break;

            case 3:
                total_estudiantes = aprobados = reprobados = 0;
                suma_total = suma_aprobados = suma_reprobados = 0;
                printf("\nDatos reiniciados correctamente.\n");
                break;

            case 4:
                printf("Saliendo del sistema...\n");
                break;

            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 4);

    return 0;
}