#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main () {
	setlocale(LC_ALL,"");
	float val, temph;
	char cpf[11], nome[40], email[40], pedido, refrig[15], suc[15], doce[15], prat[20], salg[15], lanc[15];
	int np[5], idade, menu, quarto;
	do {
	printf("\n BEM VINDO AO JORDAN´S HOTEL:\n");
	printf("MENU DO HOTEL:\n");
	printf("\n 1- Fazer checkin:\n");
	printf("\n 2- Informe o quarto que deseja ficar hospedado\n");
	printf("\n 3- Informe seu pedido:\n");
	printf("\n 0- Sair:\n");
	scanf("%d",&menu);

	switch(menu) {
	case 1:
	printf("Informe seu nome:\n");
	scanf("%s",&nome);
	printf("Informe o seu email:\n");
	scanf("%s",&email);
	printf("Informe seu cpf:\n");
	scanf("%s",&cpf);
	printf("Informe sua idade:\n");
	scanf("%s",&idade);	
	printf("Quanto tempo voce deseja ficar hospedado(a)?:\n");
	scanf("%f",&temph);
	val = temph * 300;
	printf("O valor da hospedagem de acordo com o numero de dias de hospedagem sera %.2f :\n", val);
	
	
	if (idade>=16)
	{
		printf("Parabens! Registro confirmado");
	}
	else if (idade<16)
	{
		printf("Registro negado");
	
	}
	break;
	case 2:
	printf("Checkin concluido!:\n");
	printf("Informe o numero de pessoas:\n");
	printf("Quartos disponiveis:\n");
	printf("\n 1- Quarto familia (Comporta ate 5 pessoas, contendo 1 cama de casal e 3 de solteiro, 1 banheiro com banheira, 1 televisao e 1 frigobar)");
	printf("\n 2- Quarto calouro (Comporta ate 3 pessoas, contendo 1 cama de casal e 1 de solteiro, 1 banheiro com chuveiro, 1 tevelevisao e 1 frigobar)");
	printf("\n 3- Quarto de casal (Comporta ate 2 pessoas, contendo 1 cama de casal, 1 banheiro com banheira, 1 televisao e 1 frigobar)");
	scanf("%s",&quarto);
	printf("Otima escolha!\n");
	break;	
	default:
	return 1;

	case 3:
		printf("Selecione o que deseja pedir ");
		printf("\n 1- Refrigerantes:Coca-Cola R$6.00, - Coca Zero R$6.00 - Guarana R$6.00 - Guarana Zero R$6.00 - Pepsi R$6.00 - Fanta Uva R$6.00 - Fanta Laranja R$6.00:\n");
		printf("\n 2- Pratos:Arroz, Feijao, Bife e Fritas R$30.00 - Bife a Parmegiana R$40.00 - Risoto de Camarão R$55.00:\n");
		printf("\n 3- Suco:Laranja R$10.00 - Maracuja R$10.00 - Abacaxi R$10.00 - Abacaxi com Hortela - Limao R$10.00:\n");
		printf("\n 4- Doce: KIT-KAT R$8.00 - BIS R$5.00 - Suflair R$8.00 - Negresco R$7.00:\n");
		printf("\n 5- Salgado:Coxinha R$6.00 - Presunto e Queijo R$6.00 - Croquete R$6.00 - Pastel R$ 8.00:\n");
		printf("\n 6- lanches:X-Burguer 20.00 - X-Salada R$22.00 - X-Bacon R$28.00 - X-Tudo R$32.00:\n");
		scanf("%s",&pedido);
		printf("Otima escolha, chegara no seu quarto em 15 minutos!\n");
		
		break;
		return 1;

	}
	}
	
	while(menu !=0);
	return 0;	
}
