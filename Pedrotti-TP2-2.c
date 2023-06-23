#include <stdio.h>

int main() {
	int num = 0;
	int contador = 0;
	
	
	for (int i=0; i<10; i++){
		printf ("Ingrese 10 numeros: ");
		scanf ("%d", &num);	
		
		if (num %3 == 0){
			contador ++;
		}
		
	}
	
	printf ("La cantidad es: %d", contador);
	
	return 0;
}
