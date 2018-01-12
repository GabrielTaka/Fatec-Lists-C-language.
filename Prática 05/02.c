#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
void menu();
void abate();
void cadastrar();
void producaototal();
void consumototal();
void abatetotal();
void conabatetotal();
void numeros();

struct nasc{
    int mes;
    int ano;
};
struct gado{
    long int codigo;
    float leite;
    float alim;
    char abate [0];
    struct nasc end;

};
struct gado vetgados[2];

void menu(){
    int num;
    do{
        printf("\n\n\tFAZENDA VALE GADOS\n");
        printf("\n<1> Cadastrar gados.\n");
        printf("\n<2>Produção total da fazenda.\n");
        printf("\n<3>Consumo total da fazenda.\n");
        printf("\n<4>Produção total da fazenda após os abates.\n");
        printf("\n<5>Consumo total da fazenda após os abates.\n");
        printf("\n<6>Quantidade de abates.\n");
        printf("\n<7> Sair do sistema.\n");
        printf("\nSelecione a opção desejada:");
        scanf("%d",&num);
    }while(num!= 1 && num != 2 && num!=3 && num!=4 && num!=5 && num!=6 && num!=7);
    switch(num){
        case(1):
            cadastrar();
            break;
        case(2):
            producaototal();
            break;
        case(3):
            consumototal();
            break;
        case (4):
            abatetotal();
            break;
        case(5):
            conabatetotal();
            break;
        case(6):
            numeros();
            break;
        case(7):
            return 0;
    }
}
void cadastrar(){
    int i,x = 1;
    printf("\n\tCadastrando gados.\n");
    for(i = 0; i < 2; i++){
        printf("\n%d° GADO:\n", x);
        printf("\nInsira o código da cabeça do gado: ");
        scanf("%d", &vetgados[i].codigo);
        printf("\nQuantidade de leite produzidos em litros semanalmente: ");
        scanf("%f", &vetgados[i].leite);
        printf("\nQuantidade de alimento consumido em KG semanalmente: ");
        scanf("%f", &vetgados[i].alim);
        printf("\nMes de nascimento do gado : ");
        scanf("%d", &vetgados[i].end.mes);
        printf("\nAno de nascimento do gado : ");
        scanf("%d", &vetgados[i].end.ano);
        x++;
    }
    abate();
}
void abate(){
    int i, idade, count = 0;
    for(i = 0; i < 2; i++){
        idade = 2017 - vetgados[i].end.ano;
        if(idade > 5 || vetgados[i].leite < 40 || (vetgados[i].leite <= 70 && vetgados[i].leite >= 50 && vetgados[i].alim/7 > 50)){
            strcpy (vetgados[i].abate, "S");
            count++;
            }

        else
            strcpy (vetgados[i].abate, "N");
}
menu();
}
void producaototal(){
    int i;
    float total = 0;
    for(i = 0; i < 2; i++){
        total = total + vetgados[i].leite;
    }
    printf("O total de leite produzido semanalmente é de: %.2f litros.", total);
    menu();
}
void consumototal(){
    int i;
    float total =0;
    for(i = 0; i < 2; i++){
        total = total + vetgados[i].alim;
    }
    printf("O consumo de alimentos semanalmente é de: %.2f Kg", total);
    menu();
}
void abatetotal(){
    int i;
    float total1 = 0, total2 = 0, total3;
    char abates[0];
    strcpy(abates,"S");
    for(i = 0; i < 2; i++){
        total1 = total1 + vetgados[i].leite;
        if((strcmp(abates,vetgados[i].abate))==0){
            total2= total2 + vetgados[i].leite;
        }
    }
    total3 = total1 - total2;
    printf("\nA produção da fazenda após os abates será de: %.2f litros.", total3);
    menu();
}
void conabatetotal(){
    int i;
    float total1 = 0, total2 = 0, total3;
    char abates [0];
    strcpy(abates,"S");
    for(i = 0; i < 2; i++){
        total1 = total1 + vetgados[i].alim;
        if((strcmp(abates,vetgados[i].abate))==0){
            total2 = total2 + vetgados[i].alim;
        }
    }
    total3 = total1 - total2;
    printf("\nO consumo semanal será de: %.2f Kg", total3);
    menu();
}
void numeros(){
    int i, idade, count = 0;
    for(i = 0; i < 2; i++){
        idade = 2017 - vetgados[i].end.ano;
        if(idade > 5 || vetgados[i].leite < 40 || (vetgados[i].leite <= 70 && vetgados[i].leite >= 50 && vetgados[i].alim/7 > 50)){
            strcpy (vetgados[i].abate, "S");
            count++;
            }

        else
            strcpy (vetgados[i].abate, "N");
    }
    printf("A quantidade total de abates aos gados será de:%d ", count);
}
int main(){
    setlocale(LC_ALL,"portuguese");
    menu();
}
