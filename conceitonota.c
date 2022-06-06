#include<stdio.h>

int main(){
	int nota;
	int mat;
	
	printf("Digite a matricula do aluno:\n");
	scanf("%d", &mat);
	
	printf("Digite a nota do aluno:\n");
	scanf("%d", nota);
	
	if(nota < 0 || nota > 10){
		printf("Digite um numero valido");
	}else if(nota >= 9){
		printf("%d\n Conceito A", mat);
	}else if(nota >= 8 && nota < 9){
		printf("%d\n Conceito B", mat);
	}else if(nota >= 6 && nota < 8){
		printf("%d\n Conceito C", mat);
	}else if(nota >= 3 && nota < 6){
		printf("%d\n Conceito D", mat);
	}else{
		printf("%d\nConceito E", mat);
	}
	
	
	return 0;
}