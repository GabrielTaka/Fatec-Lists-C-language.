#include <stdio.h>
#include <locale.h>

int main(){
int vet [5][5], i, j;

for(i = 0; i < 5; i ++){
    for(j = 0; j < 5; j++){
        if(i == j)
            vet[i][j] = 1;
        else
            vet[i][j] = 0;
    }
}
for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
        printf("%d ", vet[i][j]);
    }
    printf("\n");
}
}
