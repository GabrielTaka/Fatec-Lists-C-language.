#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int i,num = 0, vet[num];
    for(i = 0; i <= num;i++){
        printf("Insira um n�mero, 0 para o sistema: ");
        scanf("%d", &vet[i]);
        if(vet[i] != 0)
            num++;
        else
            break;
    }
    int aux = vet[0], aux2 = vet[0];
    for(i = 0; i<=num;i++){
        if(aux<vet[i]){
            aux = vet[i];
    }
        if(vet[i]==0){
            continue;
                if(aux2>vet[i])
                   aux2 = vet[i];
    }
    }

    if(num == 1)
        printf("\n\nVoc� digitou apenas um n�mero!");
    else
        printf("\n\nVoc� digitou %d n�meros!", num);
    if(num == 0)
        printf("\n\nN�o existe maior n�mero!");
    else
        printf("\n\nO maior n�mero digitado foi %d", aux);
    if(num == 0)
        printf("\n\nN�o existe menor n�mero!");
    else
        printf("\n\nO menor n�mero digitado foi %d", aux2);


}
