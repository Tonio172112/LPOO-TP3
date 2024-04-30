#include <stdio.h>

/*5. Concatenar dos cadenas usando punteros y funciones.*/
char* CONCAT(const char *cadena1,const char *cadena2);
int main() {
    char cadena1[100], cadena2[100];
    printf("\n Ingrese la primera cadena: ");
    scanf("%s", cadena1);
    printf("\n Ingrese la segunda cadena: ");
    scanf("%s", cadena2);
    printf("\n Las cadenas concatenadas son: %s\n\t", CONCAT(cadena1,cadena2));
	system("PAUSE");
    return 0;
}


char* CONCAT(const char *cadena1,const char *cadena2){
    int i = 0, j = 0;
	char *resultado;
    while (cadena1[i] != '\0') {
        resultado[j] = cadena1[i];
        i++;
        j++;
    }
    i = 0;
    while (cadena2[i] != '\0') {
        resultado[j] = cadena2[i];
        i++;
        j++;
    }
    resultado[j] = '\0';
    return resultado;
}

