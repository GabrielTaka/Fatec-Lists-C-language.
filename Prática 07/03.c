#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char concatena (char *str_destino, char *str_origem);

char concatena (char *str_destino,char *str_origem){
    int c1,i,c2 = 0;
    c1 = strlen(str_destino);
    for(i = 0; str_origem[i]!= '\0'; i++){
        str_destino[c1] = str_origem[c2];
        c1++;
        c2++;
    }
    str_destino[c1] = '\0';
    printf("Frase concatenada: %s",str_destino);


}
main(){
    setlocale(LC_ALL,"portuguese");
    char frase1 [100];
    char frase2 [100];
    printf("Digite a primeira frase: ");
    gets(frase1);
    printf("Digite a segunda frase: ");
    gets(frase2);
    concatena(&frase1,&frase2);

}



