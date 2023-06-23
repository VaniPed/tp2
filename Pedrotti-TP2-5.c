#include <stdio.h>

int main() {
	int num = 0;
	int menor = 0;
	int mayor = 0;
	
	printf ("Ingrese un numero: ");
	scanf ("%d", &num);
	menor = num;
	mayor = num;
	
	for (int i=0; i<5; i++){
		printf ("Ingrese 5 numeros: ");
		scanf ("%d", &num);
		
		if (num > mayor){
			mayor = num;
		} 
		else if (num < menor) {
			menor = num;
		}
	}
	
	printf ("El numero mayor es: %d", mayor);
	printf ("\n El numero menor es: %d", menor);
	
	return 0;
}
