#include <stdio.h>
#include <math.h>

int main(){
int e=0, menor=0, mayor=0, i=0;
printf("Ingrese un numero: ");
scanf ("%d", &e);
menor=e; 
mayor=e;
for (i=0; i<4; i++){
	printf("Ingrese 4 numeros: ");
	scanf ("%d", &e);
	if (e>mayor){
		mayor=e;
	}
	else if(e<menor){
		menor=e;
	}
}
printf ("El numero menor es %d \nEl numero mayor es %d", menor, mayor);
}

