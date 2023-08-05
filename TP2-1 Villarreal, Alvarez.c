#include <stdio.h>
#include <math.h>

int main(){
int num=0, t=0, resultado=0;
for (t=0; t<10; t++){
	printf("Ingresar 10 numeros enteros\n");
	scanf ("%d", &num);
	if (num%3==0){
		resultado++;
	}
}
printf("La cantidad de numeros divisibles por 3 son: %d\n", resultado);
return 0;
}

