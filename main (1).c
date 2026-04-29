#include <stdio.h>

int main() {

    char frase[100];
    int i=0, longitud=0;

    printf("Escribe una frase: ");
    fgets(frase,100,stdin);

    while(frase[longitud] != '\0'){
        longitud++;
    }

    if(frase[longitud-1]=='\n'){
        frase[longitud-1]='\0';
        longitud--;
    }

    printf("\nLongitud de la cadena: %d", longitud);

    printf("\nPrimeros 3 caracteres: ");
    for(i=0; i<3 && i<longitud; i++){
        printf("%c", frase[i]);
    }


    printf("\nUltimos 3 caracteres: ");
    for(i=longitud-3; i<longitud; i++){
        if(i>=0){
            printf("%c", frase[i]);
        }
    }

 
    printf("\nCadena en mayusculas: ");
    for(i=0; frase[i]!='\0'; i++){
        if(frase[i]>='a' && frase[i]<='z'){
            printf("%c", frase[i]-32);
        }else{
            printf("%c", frase[i]);
        }
    }

    printf("\nCadena en minusculas: ");
    for(i=0; frase[i]!='\0'; i++){
        if(frase[i]>='A' && frase[i]<='Z'){
            printf("%c", frase[i]+32);
        }else{
            printf("%c", frase[i]);
        }
    }


    printf("\nReemplazando a por @: ");
    for(i=0; frase[i]!='\0'; i++){
        if(frase[i]=='a'){
            printf("@");
        }else{
            printf("%c", frase[i]);
        }
    }

    return 0;
}