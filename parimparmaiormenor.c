int main(){
	int n1, n2;
	
	printf("digite dois numeros");
	scanf("%d%d", &n1, &n2);
	
	
	if(n1 > n2 && (n1%2 != 0) && (n2%2 != 0)){
		printf("%d maior numero e impar \n %d menor numero e impar", n1, n2);
	}else if(n1 < n2 && (n1%2 != 0) && (n2%2 != 0)){
		printf("%d menor numero e impar \n %d maior numero e impar", n1, n2);
	}else if(n1 > n2 && (n1%2 == 0) && (n2%2 != 0)){
		printf("%d maior numero par \n menor numero impar", n1, n2);
	}else if(n1 < n2 && (n1%2 == 0) && (n2 != 0)){
		printf("%d menor numero par \n %d maior numero impar", n1, n2);
	}else if(n1 > n2 && (n1%2 != 0) && (n2%2 == 0)){
		printf("%d maior numero impar \n %d menor numero par", n1, n2);
	}else if(n1 < n2 && (n1%2 != 0) && (n2 == 0)){
		printf("%d menor numero impar \n %d maior numero par", n1, n2);
	}else if(n1 > n2 && (n1%2 == 0) && (n2%2 == 0)){
		printf("%d maior numero par \n %d menor numero par", n1, n2 );
	}else if(n1 < n2 && (n1%2 == 0) && (n2%2 == 0)){
		printf("%d menor numero par \n %d maior numero par", n1, n2 );
	}else if(n1 == n2 && n1%2 == 0){
		printf("%d %d numeros iguais pares", n1, n2);
	}else {
		printf("%d %d numeros iguais impares", n1, n2);
	}
	
	return 0;
}
