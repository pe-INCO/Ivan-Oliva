
#include <stdio.h>

int main() {
{
    
 int i, j , temp, n;
 int arreglo[6] = {50, 26, 7, 9, 15, 27};
 
 n = sizeof(arreglo)/sizeof(arreglo[0]);
 
     for (i = 0; i < n-1; i++) {
         
         for ( j = i+1; j < n; j++) {
             
             if (arreglo[i]>arreglo[j]) {
                 
            
                 temp = arreglo [i];
                 arreglo [i] = arreglo[j];
                 arreglo[j] = temp;
            printf("%d\n", arreglo[i]);
            printf("%d\n", arreglo[j]);
                
               
             }
             
             
         }
     }
 
 
    for (i = 0; i < n-1; i++) {
        printf("%d", arreglo[i]);
        
            
        }
    }
 
 
    return 0;
}
