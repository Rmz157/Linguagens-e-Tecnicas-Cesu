#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vet_notas[10];
	int i, num;
	
	printf("Cadastre as notas dos alunos");
	for (i=0; i<10; i++) scanf("%d", &vet_notas [1]);
	system("cls");
	
	printf("Qual nota deseja ver (N do Aluno)?");
	scanf("%d", &vet_notas[num]);
	if(num>=0 && num<10) printf("%d", &vet_notas[num]);
	else printf("Nota não cadastrada");
	
	return 0;
}
