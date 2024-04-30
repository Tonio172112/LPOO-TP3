#include <stdio.h>

/*2. Encontrar la suma y el promedio de los elementos de un arreglo usando
punteros y funciones.*/
#define max 1000
void sum_prom(int *arr,int dim,int *sum,float *prom);
void asignar_vec(int *arr,int dim);

int main(){
	int sum=0;
	float prom=0;
	int vec[max],dim=0;
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
	sum_prom(vec,dim,&sum,&prom);
	printf("\n La suma de los elementos del vector es: %d",sum);
	printf("\n El promedio de los elementos del vector es: %g\n\n\t",prom);
	system("PAUSE");
	return 0;
}

void sum_prom(int *arr,int dim,int *sum,float *prom){
	int i=0;
	for(i=0;i<dim;i++){
		*sum+=*(arr+i);
	}
	*prom=(float)*sum/dim;
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
