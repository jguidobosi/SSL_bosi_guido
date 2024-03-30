#include <stdio.h>
#include <string.h> 

int main() {
    
    char nombre[30] = "";
    char inputCompaniero[3] = "";
    char inputDocente[3] = "";

    printf("Como te llamas?\n");
    scanf("%s", nombre);

    while (strcmp(inputCompaniero, "si") != 0 && strcmp(inputCompaniero, "no") != 0){
        printf("Sos companiero de cursada SSL? (si/no)\n");
        scanf("%2s", &inputCompaniero);
    }
    
    if(strcmp(inputCompaniero, "si") == 0){
            printf("Hola %s, un gustazo!\n", nombre);
    } else {
        while (strcmp(inputDocente, "si") != 0 && strcmp(inputDocente, "no") != 0){
            printf("Sos el/la docente? (si/no)\n");
            scanf("%2s", &inputDocente);
        }
        if(strcmp(inputDocente, "si") == 0){
            printf("Hola profesor/a %s. Un gusto cursar como su alumno.\n", nombre);
        } else {
            printf("Hola %s...\n", nombre);
        }
    }

    return 0;
}