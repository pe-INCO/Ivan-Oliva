#include <stdio.h>

float notas[3][4];

void ingresarNotas() {
    int i, j;
    for(i = 0; i < 3; i++) {
        printf("\nEstudiante %d:\n", i + 1);
        for(j = 0; j < 4; j++) {
            printf("  Materia %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }
}

void mostrarMatriz() {
    int i, j;
    printf("\nMatriz de notas:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%.2f ", notas[i][j]);
        }
        printf("\n");
    }
}

void promedioEstudiantes() {
    int i, j;
    float suma;
    
    for(i = 0; i < 3; i++) {
        suma = 0;
        for(j = 0; j < 4; j++) {
            suma += notas[i][j];
        }
        printf("Promedio del estudiante %d: %.2f\n", i + 1, suma / 4);
    }
}

void promedioMaterias() {
    int i, j;
    float suma;
    
    for(j = 0; j < 4; j++) {
        suma = 0;
        for(i = 0; i < 3; i++) {
            suma += notas[i][j];
        }
        printf("Promedio de la materia %d: %.2f\n", j + 1, suma / 3);
    }
}

void notaMayor() {
    int i, j, posI = 0, posJ = 0;
    float mayor = notas[0][0];
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            if(notas[i][j] > mayor) {
                mayor = notas[i][j];
                posI = i;
                posJ = j;
            }
        }
    }
    
    printf("\nNota más alta: %.2f\n", mayor);
    printf("Posición: Estudiante %d, Materia %d\n", posI + 1, posJ + 1);
}

int main() {
    int opcion;
    
    do {
        printf("\n--- MENU ---\n");
        printf("1. Ingresar notas\n");
        printf("2. Mostrar matriz\n");
        printf("3. Promedio por estudiante\n");
        printf("4. Promedio por materia\n");
        printf("5. Nota mas alta\n");
        printf("6. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1: ingresarNotas(); break;
            case 2: mostrarMatriz(); break;
            case 3: promedioEstudiantes(); break;
            case 4: promedioMaterias(); break;
            case 5: notaMayor(); break;
        }
        
    } while(opcion != 6);

    return 0;
}