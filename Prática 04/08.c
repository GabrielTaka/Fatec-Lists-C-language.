#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
char concatena(char *str_destino, char *str_origem);

char concatena (char *str_destino, char *str_origem){
    int c1, i, c2 = 0;
    c1 = strlen(str_destino);
    for( i = 0; str_origem[i]!= '\0'; i++){
        str_destino[c1]= str_origem[c2];
        c1++;
        c2++;
    }
    str_destino[c1] = '\0';
    printf("%s", str_destino);

    }
char main(){
    int c1 =0, c2 = 0;
    char str1 [50], str2 [50];
    printf("Digite a primeira string:  ");
    gets(str1);
    printf("Digite a segunda string: ");
    gets(str2);
    concatena(&str1, &str2);

}
