#include <stdio.h>

	void imprime () {
	printf("Example\n");
}
	int soma (int A, int B){
	int res;
	res = A + B;
	return res;
}
	int subtrair (int A, int B){
	int res2;
	res2 = A - B;
	return res2;
	}
	int multiplicacao (int A, int B){
	int res3;
	res3 = A*B;
	return res3;
	}
	float divisao (int A, int B){
	float res4;
	res4 = A/B;
	return res4;
	}
	float media (int A, int B){
	float res5; 
	res5 = (A+B)/2;
	return res5;
	}
	float porcentagem (int A, int B){
	float res6; 
	res6 = (A*B)/100;
	return res6;
	}

int main () {
	int v1,v2;
	scanf("%d", &v1);
	scanf("%d", &v2);
	printf("------MENU------\n");
	
	int op;
	printf("Escolha a operacao\n1.Soma\n2.Subtracao\n3.Multipicacao\n4.Divisao\n5.Media\n6.Porcentagem\n");
	scanf("%d", &op);
	
	imprime ();
	int res = soma(v1,v2); 
	int res2 = subtrair(v1,v2);
	int res3 = multiplicacao(v1,v2);
	float res4 = divisao(v1,v2);
	float res5 = media(v1,v2);
	float res6 = porcentagem(v1,v2);
	
	switch(op) {
		
		case 1:
			printf("Soma= %d\n", res);
		break;
		case 2:
			printf("Subtracao = %d\n", res2);
		break;
		case 3:
			printf("Multiplicacao = %d\n", res3);
		break;
		case 4:
			printf("Divisao = %.3f\n", res4);
		break;
		case 5: 
			printf("Media = %.3f", res5);
		break;
		case 6:
			printf("Porcentagem = %.3f\n", res6);
		break;
	}
	
	
	return 0; 	
}
