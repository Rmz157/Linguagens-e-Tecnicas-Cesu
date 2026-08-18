#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	/*int n;
	printf("Insira o valor de N:");
	scanf("%d", &n);
	printf("O numero %d, seu antecessor %d e seu sucessor %d", n, n-1, n+1);
	*/
	
	int a,b,c,maiorTemp, maior;
	printf("Insira três valores para identificar o maior:");
	scanf("%d %d %d", &a,&b,&c);
	
	maiorTemp = ((a+b+abs(a-b))/2);
	maior = ((maiorTemp+c+abs(maiorTemp-c))/2);
	printf("O maior entre |%d|%d|%d| = %d ", a,b,c,maior);
	
	return 0;
}
