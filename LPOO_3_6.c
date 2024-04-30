#include <stdio.h>
#include <string.h>

//se me borro todo y ni ganas de poner el enunciado :p

int count(char *arr,char L);

int main(){
	char arr[100];
	char L;
	int size = 0;
	printf(" Ingrese un arreglo: ");
	fgets(arr,100,stdin);
	size=strlen(arr);
	arr[size-1] = '\0';
	printf("\n Su array es: %s",arr);
	printf("\n Ingrese el elemento a buscar dentro del array: ");
	fflush(stdin);
	L=getchar();
	printf(" La cantidad de ocurrencias de '%c' en %s es de: %d\n\t",L,arr,count(arr,L));
	system("PAUSE");
	return 0;
}

int count(char *arr,char L){
	int i=0;
	int ocurrencias=0;
	for(i=0;*(arr+i)!='\0';i++){
		if(*(arr+i)==L){
			ocurrencias++;
		}
	}
	return ocurrencias;
}
