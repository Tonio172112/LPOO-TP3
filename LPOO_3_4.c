#include <stdio.h>

/*4. Copiar un arreglo en otro arreglo usando punteros y funciones. Mostrando
el resultado final.*/

#define Max 1000

void copy_arr(int *arr,int dim,int *arr2);
void asignar_vec(int *arr,int dim);
void show_arr(int *arr,int dim);

int main(){
	int vec[Max],dim=0,vec2[Max];
	do{
		dim=0;
		printf(" Ingrese la dimension del vector: ");
		scanf("%d",&dim);
		if(dim<=0||dim>1000){
			printf(" Ingrese una dimension mayor o igual a 1 y menor o igual a 1000. . .\n\t");
			system("PAUSE");
		}
	}while(dim<=0||dim>1000);
	system("CLS");
	asignar_vec(vec,dim);
	printf("\n\t");
	system("PAUSE");
	system("CLS");
	copy_arr(vec,dim,vec2);
	printf(" El vector 1 fue copiado correctamente en el vector 2. . .");
	printf("\n Vector 1: ");
	show_arr(vec,dim);
	printf("\n Vector 2: ");
	show_arr(vec2,dim);
	printf("\n\t");
	system("PAUSE");
	return 0;
}

void copy_arr(int *arr,int dim,int *arr2){
	int i=0;
	for(i=0;i<dim;i++){
		*(arr2+i)=*(arr+i);
	}
}

void show_arr(int *arr,int dim){
	int i=0;
	for(i=0;i<dim;i++){
		if(i==dim-1){
			printf("%d",*(arr+i));
		}
		else{
			printf("%d, ",*(arr+i));
		}
	}
}

void asignar_vec(int *arr,int dim){
	int i=0;
	int val=0;
	printf("\t\tAsignar Vector.\n");
	for(i=0;i<dim;i++){
		val=0;
		printf(" Ingrese el valor del elemento en la posicion %d: ",i+1);
		scanf("%d",&val);
		*(arr+i)=val;
	}
}
