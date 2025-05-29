#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char marca[30], cor[20], modelo[30];
    int ano, tipo, id;
    float valor;
}Carro;

Carro carros[5];

int nm_car = 0;

void cadastrar();
void listar();
void filtrar_combustivel();
void buscar();
void vendas();

int main(){
    int opc;
    do{
        printf("----------MENU----------\n");
        printf("[ 1 ] - Cadastrar veiculo\n");
        printf("[ 2 ] - Listar veiculos\n");
        printf("[ 3 ] - Filtrar por tipo de combustivel\n");
        printf("[ 4 ] - Buscar veiculo\n");
        printf("Selecione uma opcao: ");
        scanf("%d",&opc);
        system("cls");
       
        switch(opc){
            case 1:
                cadastrar();
                break;
            case 2:
                listar();
                break;
            case 3:
                filtrar_combustivel();
                break;
            case 4:
                buscar();
                break;
            case 0:
                printf("Fechando o sistema...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
        printf("Pressione enter para continuar\n");
        getchar();
        getchar();
        system("cls");
    }while(opc!=0);
    return 0;
}
void cadastrar(){
    printf("-------Cadastro-------\n");
    printf("Marca: \n");
    scanf("%s",carros[nm_car].marca);
    printf("Modelo: \n");
    scanf("%s",carros[nm_car].modelo);
    printf("Cor: \n");
    scanf("%s",carros[nm_car].cor);
    printf("Ano: \n");
    scanf("%d",&carros[nm_car].ano);
    printf("Valor: \n");
    scanf("%f",&carros[nm_car].valor);
    printf("Tipo do combustivel:\n[ 1 ] - Etanol\n[ 2 ] - Gasolina\n[ 3 ] - Flex\n[ 4 ] - Eletrico\n");
    scanf("%d",&carros[nm_car].tipo);    
    carros[nm_car].id = nm_car+1;
    nm_car++;
}
void listar(){
    printf("----Carros Cadastrados----\n");
    for(int i = 0; i < nm_car; i++){
        printf("ID: %d\n",carros[i].id);
        printf("Marca: %s\n",carros[i].marca);
        printf("Modelo: %s\n",carros[i].modelo);
        printf("Cor: %s\n",carros[i].cor);
        printf("Ano: %d\n",carros[i].ano);
        printf("Valor: %.2f\n",carros[i].valor);
        printf("Tipo do combustivel: %d\n",carros[i].tipo);
        printf("---------------------------------\n");
    }
}
void filtrar_combustivel(){
    int tipo;
    printf("-----Filtrar por Combustivel-----");
    printf("Deseja filtrar baseado em qual combustivel?:\n[ 1 ] - Etanol\n[ 2 ] - Gasolina\n[ 3 ] - Flex\n[ 4 ] - Eletrico\n");
    scanf("%d",&tipo);
    for(int i = 0; i < nm_car; i++){
        if(carros[i].tipo == tipo){
            printf("ID: %d\n",carros[i].id);
            printf("Marca: %s\n",carros[i].marca);
            printf("Modelo: %s\n",carros[i].modelo);
            printf("Cor: %s\n",carros[i].cor);
            printf("Ano: %d\n",carros[i].ano);
            printf("Valor: %.2f\n",carros[i].valor);
            printf("Tipo do combustivel: %d\n",carros[i].tipo);
            printf("---------------------------------\n");
        }
    }
}
void buscar(){
    int id;
    printf("---------Busca---------\n");
    printf("Digite o ID do carro: ");
    scanf("%d",&id);
    for(int i = 0; i < nm_car; i++){
        if(carros[i].id == id){
            printf("ID: %d\n",carros[i].id);
            printf("Marca: %s\n",carros[i].marca);
            printf("Modelo: %s\n",carros[i].modelo);
            printf("Cor: %s\n",carros[i].cor);
            printf("Ano: %d\n",carros[i].ano);
            printf("Valor: %.2f\n",carros[i].valor);
            printf("Tipo do combustivel: %d\n",carros[i].tipo);
            printf("---------------------------------\n");
        }
    }
}

