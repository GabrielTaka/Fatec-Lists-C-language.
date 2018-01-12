#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int leitura ();
int calculo();
struct ponto{
    int x1;
    int y1;
    int x2;
    int y2;
    int r;

}ponto1;

struct ponto *ponteiro;

int leitura (){
    ponteiro = &ponto1;
    printf("Digite o valor de x1: ");
    scanf("%d", &(*ponteiro).x1);
    printf("Digite o valor de y1: ");
    scanf("%d", &(*ponteiro).y1);
    printf("Digite o valor de x2: ");
    scanf("%d", &(*ponteiro).x2);
    printf("Digite o valor de y2: ");
    scanf("%d", &(*ponteiro).y2);

}

int calculo (){

    (*ponteiro).r = sqrt(pow((*ponteiro).x1 - (*ponteiro).x2,2) + pow((*ponteiro).y1 - (*ponteiro).y2,2));
}
int main(){
    setlocale(LC_ALL,"portuguese");
    leitura();
    calculo();
    printf("A distância será de: %d", (*ponteiro).r);
}
