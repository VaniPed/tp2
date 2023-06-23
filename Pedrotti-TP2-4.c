#include <stdio.h>

int main() {
	int num=0, factorial=1;
	
	printf ("Ingrese un numero:");
	scanf ("%d", &num);
	
	for (int i=1; i<=num; i++){
		factorial = factorial * i;
	}
	
	printf ("\n El factorial es: %d", factorial);
	
	return 0;
}

