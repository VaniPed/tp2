#include <stdio.h>
#include <math.h>

int main() {
	float a=0, b=0, c=0, raiz=0, x1=0, x2=0;//declaracion de variables
	
	printf ("Ingrese el valor de a: ");//que ingrese el valor de a
	scanf ("%f", &a);
	
	printf ("Ingrese el valor de b: ");//que ingrese el valor de b
	scanf ("%f", &b);
	
	printf ("Ingrese el valor de c: ");//que ingrese el valor de c
	scanf ("%f", &c);
	
	raiz= b*b-4*a*c;//operacion debajo de la raiz
	
	if (raiz >= 0){//si es mayor igual que 0, haga la operacoion de x1 y x2
		x1 = ((-1*b)+ sqrt(raiz))/(2*a);
		x2 = ((-1*b)- sqrt(raiz))/(2*a);
		
		printf ("Las raices son:\n %.2f \n %.2f", x1, x2);
	}
	else if (raiz<0){//si es menor, diga error
		printf ("Error");
	}
	
	
	return 0;
}
