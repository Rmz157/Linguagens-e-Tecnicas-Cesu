#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main(int argc, char *argv[]) {
	
	float r, area, b, B, h, areat;
	printf("Informe o valor do RAIO:");
	scanf("%f", &r);
	
	area = pi *(r*r);
	
	printf("A area do circulo de raio %f = %f\n", r, area);
	
	printf("Para calcular a area do trapezio informe a base b:");
	scanf("%f", &b);
	
	printf("Agora informe a base B:");
	scanf("%f", &B);
	
	printf("E por ultimo informe h:");
	scanf("%f", &h);
	
	areat = (B+b) * h / 2;
	
	printf("A area do trapezio com base %f e base %f e de altura %f = %f", b,B,h,areat);
	
	return 0;
}
