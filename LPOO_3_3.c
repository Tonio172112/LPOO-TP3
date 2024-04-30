#include <stdio.h>

/*3. Encontrar el mayor y el menor elemento de un arreglo usando punteros y
funciones.*/

#define Max 1000

void min_max(int *arr,int dim,int *min,int *max);
void asignar_vec(int *arr,int dim);

int main(){
	int min=0,max=0;
	int vec[Max],dim=0;
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
	min_max(vec,dim,&min,&max);
	printf(" El valor mayor es: %d",max);
	printf("\n El valor menor es: %d\n",min);
	system("PAUSE");
	return 0;
}

void min_max(int *arr,int dim,int *min,int *max){
	int i=0;
	for(i=0;i<dim;i++){
		if(i==0){
			*min=*(arr+i);
			*max=*(arr+i);
		}
		else{
			if(*(arr+i)<*min){
				*min=*(arr+i);
			}
			if(*(arr+i)>*max){
				*max=*(arr+i);
			}
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
