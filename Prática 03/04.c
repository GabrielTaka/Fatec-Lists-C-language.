#include <stdio.h>
#include <locale.h>

int main(){
int veta[5], vetb [8], i, z;
setlocale(LC_ALL,"portuguese");
printf("\tPOPULANDO O PRIMEIRO VETOR!\n\n");

for(i = 0; i < 5; i++){
    printf("Insira o %d° do vetor: ", i+1);
    scanf("%d",&veta[i]);
}
printf("\t\nPOPULANDO SEGUNDO VETOR!\n\n");
for (i = 0; i < 8; i++){
    printf("Insira o %d° do vetor: ", i + 1);
    scanf("%d", &vetb[i]);
}
printf("Números iguais nos vetores: ");
for(i = 0; i < 5; i ++){
    for (z = 0; z < 8; z++){
        if(veta[i] == vetb[z])
            printf("%d,", veta[i]);
    }
}
}
