#include <stdio.h>
#include <locale.h>
#include <conio.h>
void menu();
void popula();
void procura(int idade, float valor);

struct carros {
    char marca[15];
    int ano;
    char cor [10];
    float preco;
};

struct carros vetcarro[2];
void popula(){
    int i;
    for(i = 0; i < 2; i++){
        printf("Digite a marca do %d° veículo: ", i + 1);
        scanf("%s", &vetcarro[i].marca);
        printf("Digite o ano do carro: ");
        scanf("%d", &vetcarro[i].ano);
        printf("Digite a cor do carro: ");
        scanf("%s", &vetcarro[i].cor);
        printf("Digite o preço do carro: ");
        scanf("%f", &vetcarro[i].preco);
    }
    menu();
}
void procura (int idade, float valor){
    int i;
    for(i = 0; i < 2; i++){
        if(idade >= vetcarro[i].ano && valor >= vetcarro[i].preco){
            printf("Marca: %s\n", vetcarro[i].marca);
            printf("Ano: %d\n", vetcarro[i].ano);
            printf("Cor: %s\n", vetcarro[i].cor);
            printf("Preço: %.2f\n", vetcarro[i].preco);
        }
    }
}
void menu(){
    int num;
    int idade;
    float valor;
    do{
        printf("<1> Popular carros.\n");
        printf("<2> Procurar carro.\n");
        printf("Escolha uma opção: ");
        scanf("%d", &num);
    }while(num!= 2 && num!= 1);
    switch (num){
    case(1):
        popula();
        break;
    case(2):
        printf("Digite o ano desejado: ");
        scanf("%d", &idade);
        printf("Digite o preço: ");
        scanf("%f", &valor);
        procura(idade, valor);
        break;
    }

}





main(){
    setlocale(LC_ALL,"portuguese");
    menu();
}


