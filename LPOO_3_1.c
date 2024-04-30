#include <stdio.h>

/*1. Intercambiar el valor de dos variables usando punteros y funciones.
Mostrando los valores iniciales y valores finales.*/

void change_values(int *val1,int *val2);

int main(){
	int n1=0, n2=0;
	printf(" Ingrese 2 valores numericos separados por un espacio: ");
	scanf("%d %d",&n1,&n2);
	printf("\n Antes del cambio los valores son: ");
	printf("\n Numero 1: %d",n1);
	printf("\n Numero 2: %d",n2);
	change_values(&n1,&n2);
	printf("\n Despues del cambio los valores son: ");
	printf("\n Numero 1: %d",n1);
	printf("\n Numero 2: %d\n\t",n2);
	system("PAUSE");
	return 0;
}

void change_values(int *val1,int *val2){
	int aux=0;
	aux=*val1;
	*val1=*val2;
	*val2=aux;
}
