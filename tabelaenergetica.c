#include<stdio.h>

int main()
{
    char cara;

    printf("Digite um valor da tabela para saber seu consumo energetico:\nA\nB\nC\nD\nE\n");
    scanf("%c", cara);

    if(cara == 'a' ){
	    printf("Ventilador, Televisao");
	}else if(cara == 'b'){
		printf("Aparelho de Som, Batedeira");
	}else if(cara == 'c'){
		printf("Fogao eletrico, Liquidificador");
	}else if(cara == 'd'){
	    printf("Freezer, Geladeira, Maquina de Lavar");
	}else if(cara == 'e'){
        printf("Ar-condicionado, Micro-ondas");
    }
    else {
		printf("digite uma opeção valida");
	}

    return 0;
}