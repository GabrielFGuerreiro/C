#define ex1
#include<stdio.h>
#include<locale.h>

#ifdef ex1


/*Receba 2 string de ate 10 caracteres via teclado na funcao main(). Fa�a uma funcao para compara-las usando ponteiros e retorne como resultado se
sao IGUAIS 1 ou se sao DIFERENTES 0 para a funcao main(). Imprima o resultado na funcao main(). Declare os vetores como variavel global*/

int compara(pc1,pc2);
char saida();

char st1[10],st2[10];


main(){

int cont=0,result;
char *pc1,*pc2,resp;

pc1=st1; //ou pc1=&st1[0]
pc2=st2;

do{
setlocale(LC_ALL,"");
printf("Digite duas strings de até 10 caracteres\n");
scanf("%s %s",pc1,pc2);

result=compara(pc1,pc2);

if(result==1)
{
    printf("As strings são iguais! (1)\n");
}
else
{
    printf("As strings são diferentes! (0)\n");
}

resp=saida();

}while(resp=='n' || resp=='N');
}


int compara(char *x,char *y){

int i,z=0;

for(i=0;*(x+i)!='\0' && *(y+i)!='\0';i++)
{
     if(*(x+i)!=*(y+i))
    {
        return z=0;
    }
}

if(*(x+i)=='\0' && *(y+i)=='\0')
{
return z=1;
}

}


char saida()
{

char resp;
    do
        {
            printf("\nDeseja encerrar o programa?(S/N)\n");
            resp=getch();
            if(resp!='s' && resp!='S' && resp!='n' && resp!='N')
            {
                        printf("Valor inv�lido\n");
            }
        }
        while(resp!='s' && resp!='S' && resp!='n' && resp!='N');


        if(resp=='S' || resp=='s')
        {
            printf("\nAt� logo!\n");
            exit(0);
        }
        else
            system("cls");

        return resp;
}
#endif // ex1


#ifdef ex2
/*Escreva um programa que receba uma letra via teclado usando ponteiro. Escreva  uma funcao que pesquise esta letra existe
no vetor abaixo usando ponteiros.Imprima o resultado da pesquisa no video na funcao main().
Passe como informacao para a funcao a letra digitada usando ponteiros.(utilize o comando return).
O vetor deve ser declarado como variavel global.

vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y*/

int pesquisa(pc);
char saida();

char vet[]={'b','d','f','h','j','k','m','o','q','s','u','w','y'};

main(){
char letra;
int result;

char *pc;
pc=&letra;

printf("Digite uma letra\n");
scanf(" %c",pc);

result=pesquisa(pc);

if(result==1)
{
setlocale(LC_ALL,"");
printf("A letra existe no vetor\n");
}

else
printf("A letra n�o existe no vetor\n");

}


int pesquisa(char *pc){

int cont=0;

for(cont=0;vet[cont]!='\0';cont++)
{
    if(*pc==vet[cont])
    {
        return *pc=1;
    }
}

return *pc;
}

char saida()
{

char resp;
    do
        {
            printf("\nDeseja encerrar o programa?(S/N)\n");
            resp=getch();
            if(resp!='s' && resp!='S' && resp!='n' && resp!='N')
            {
                        printf("Valor inv�lido\n");
            }
        }
        while(resp!='s' && resp!='S' && resp!='n' && resp!='N');


        if(resp=='S' || resp=='s')
        {
            printf("\nAt� logo!\n");
            exit(0);
        }
        else
            system("cls");

        return resp;
}
#endif // ex2
