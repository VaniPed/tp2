#include <stdio.h>

int main() {
	int num=0, a1=1, a2=1, mem=0;
	
	printf("Ingrese un numero: ");
	scanf ("%d", &num);
	
	for (int i=2; i<num; i++){
		mem = a1 + a2;
		a1 = a2;
		a2 = mem;
	}
	
	printf ("\n El valor de la sucesion para el numero ingresado es: %d", mem);
	return 0;
}

