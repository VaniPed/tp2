#include <stdio.h>

int main() {
	float num = 0;
	float promedio;
	float suma;
	float contador = 0;
	
	for (int i=0; i<10; i++){
		printf ("Ingrese 10 numeros: \n", i + 1);
		scanf ("%f", &contador);
		suma = suma + contador;
	}
	promedio = suma /10;
	printf ("\n El promedio es: %.2f", promedio);
	
	return 0;
}

