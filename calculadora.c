#include<stdio.h>

int main()
{
	char op;
	int resultado, n1, n2, res;
	
	printf("Digite os dois numeros que voce quer fazer a operacao:\n");
	scanf("%d%d", &n1, &n2);
	
	fflush(stdin);
	
	printf("Digite a operacao que pretende fazer:\n / = Divisao\n * multiplicacao\n + = soma\n - = subtracao\n");
	scanf("%c", &op);
	
	if(op == '/' ){
		res = n1 / n2;
		printf("%d", res);
	}else if(op == '*'){
		res = n1 * n2;
		printf("%d", res);
	}else if(op == '+'){
		res = n1 + n2;
		printf("%d", res);
	}else if(op == '-'){
		res = n1 - n2;
		printf("%d", res);
	}else {
		printf("digite uma operacao valida");
	}
	
	return 0;
}