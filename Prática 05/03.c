#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
void menu();
int estoque();
int setores();
int total();
struct produto{
    char nome [15];
    char setor[0];
    int quantidade;
    float preco;
};
struct produto vetprodutos[2];

void menu(){
    int num;
    do{
        printf("\n\tBEM VINDO AO MENU!\n");
        printf("\n<1>Cadastrar produto.\n");
        printf("\n<2>Analisar produtos no setor.\n");
        printf("\n<3>Capital investido no supermercado.\n");
        printf("\n<4>Sair do sistema.\n");
        printf("\nEscolha a operação desejada: ");
        scanf("%d", &num);
    }while(num!=1 && num!=2 && num!= 3 && num!=4);
    switch(num){
        case(1):
            estoque();
            break;
        case(2):
            setores();
            break;
        case(3):
            total();
            break;
        case(4):
            exit(0);
}
}
int estoque(){
        int i, x = 1;
        for(i = 0; i < 2; i++){
        printf("\n\nCadastrando o %d° produto.\n", x);
        printf("\nInsira o nome do produto: ");
        scanf("%s", &vetprodutos[i].nome);
        printf("\nInsira o setor do produto: ");
        scanf("%s", &vetprodutos[i].setor);
        printf("\nInsira a quantidade do produto: ");
        scanf("%d", &vetprodutos[i].quantidade);
        printf("\nInsira o preço do produto: ");
        scanf("%f", &vetprodutos[i].preco);
            x++;
    }
        menu();
}
int setores(){
    int i, x = 1, count = 0;
    char coluna [50];
    printf("Digite o setor desejado: ");
    scanf("%s", &coluna);
    for(i = 0; i < 2; i++){
    if((strcmp(coluna,vetprodutos[i].setor))==0)
        count++;
        }
    printf("\nO setor %s possui %d produtos difetentes\n",coluna, count);
    menu();
}
int total(){
    int i;
    float total = 0;
    for(i = 0; i < 2; i++){
        total = total + vetprodutos[i].quantidade * vetprodutos[i].preco;
    }
    printf("\nO capital investido em produtos foi de: %.2f\n", total);
    menu();
}
int main(){
    setlocale(LC_ALL,"portuguese");
    menu();
}
