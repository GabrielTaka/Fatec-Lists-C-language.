#include<locale.h>
#include<stdlib.h>
int verifica(float buscar,float x[],int n_x)
{
    int i = 0;
    int n=0;
    while (i == 0 &&  n < n_x)
    {
        if (x[n]== buscar)
            i = 1;
        n++;}   return i;}
void conta_rep(float *x,int n_x){
    int i=0,j=0,k,z=0,cont,n_rep=0;
    float *reps;
    reps = malloc(n_x*4);
    reps[i]=x[i];
    while(i<n_x){
        if(verifica(x[i],reps,n_rep))
                return 0;
        j=0;
        cont=0;
        while(j<n_x){
            if(x[i]==x[j])
                cont++;
            j++;}
        if(cont>1)
            printf("\n%.2f ocorre %d vez",x[i],cont);
        else
            printf("\n%.2f ocorre %d vezes",x[i],cont);
        i++;
        reps[i]=x[i];
        n_rep++;}}
main()
{
    setlocale(LC_ALL,"");
    float x[]= {-1.7, 3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1.7};
    int n_x= sizeof(x)/sizeof(float);
    printf("Entre com um n°s a seream digitados: ");scanf("%d",&x);
    inverso(x);
    troca();
    acha(y);
comum(x,y;
    printf("o produto escalar é = %d",escalar(x,y));
    conta_rep(x,n_x);
