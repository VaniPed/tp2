#include <stdio.h>
#include <math.h>

int main(){
float num=0, t=0, suma=0, promedio=0;
for (t=0; t<10; t++){
	printf("Ingresar 10 numeros reales\n");
	scanf ("%f", &num);
	suma=suma+num;
}
promedio= suma/10;
printf("El rpomedio es:%f", promedio);
return 0;
}

