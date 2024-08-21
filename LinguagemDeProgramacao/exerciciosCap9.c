#define ex6
#include<stdio.h>
#include<locale.h>

#ifdef ex1
/*Escreva um programa que receba n valores via teclado e receba tambem a operação a ser executada.
Quando for digitado "=" o programa deve mostrar o resultado acumulado dos n valores.
As operações aritmeticas e a entrada de dados devem ser funcoes que recebe os valores usando ponteiros.
As variaveis sao LOCAIS na funcao main().*/


entrada(int *pnum);
operacao(char *opera,int *pnum1,int *pnum2);

int main()
{
int num1,num2,cont=1;
char opera;

int *pnum1,*pnum2;
pnum1=&num1;
pnum2=&num2;

char *popera;
popera=&opera;

setlocale(LC_ALL,"");
printf("Soma(+) Subtração(-) Multiplicação(*) Divisão(/) Resultado(=)\n\n");

while(1)
{
    printf("[%dº] Valor:",cont);
    cont++;
    entrada(pnum1);
    printf("\n");

    printf("[%dº] Valor:",cont);
    cont++;
    entrada(pnum2);
    printf("\n");

    operacao(popera,pnum1,pnum2);
    printf("\n");

    if(opera=='=')
    {
        break;
    }

}

printf("\nO resultado acumulado foi %d",*pnum1);
}


entrada(int *pnum)
{

scanf("%d",pnum);
}


operacao(char *opera,int *pnum1,int *pnum2)
{
int x;
do
{
    printf("Operação:");
    scanf(" %c",opera);
    if(*opera!='+' && *opera!='-' && *opera!='*' && *opera!='/' && *opera!='=')
    {
        printf("ERRO\n");
    }
}
while(*opera!='+' && *opera!='-' && *opera!='*' && *opera!='/' && *opera!='=');


printf("%d %d %d",*pnum1,*pnum2,x);

if(*opera=='+')
{
x=((*pnum1)+(*pnum2));
pnum1=x;

}

if(*opera=='-')
{
x=(*pnum1)-(*pnum2);

}

if(*opera=='*')
{
x=(*pnum1)*(*pnum2);
}

if(*opera=='/')
{
x=(*pnum1)/(*pnum2);
}

}

#endif // ex1


#ifdef ex2
/*Escreva um programa que receba uma letra via teclado usando ponteiro.
Escreva uma funcao que pesquise se esta letra existe no vetor abaixo usando ponteiros.
Imprima o resultado da pesquisa no video na funcao main(). Passe como informacao
para a funcao a letra digitada e o vetor usando ponteiros e faca a pesquisa
usando ponteiros.(utilize o comando return).
O vetor deve ser declarado como variavel LOCAL na funcao main().

vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y*/

pesquisa(char *pc,char *pvet);
char saida();

main()
{
char vetc[]={'b','d','f','h','j','k','m','o','q','s','u','w','y','\0'};
char *pvet;
pvet=&vetc[0];

char c,resp;
char *pc;
pc=&c;

int x;

do{

printf("Digite uma letra\n");
scanf(" %c",pc);

x=pesquisa(pc,pvet);

if(x==1)
{
printf("A letra '%c' existe no vetor\n",*pc);
}
else
{
setlocale(LC_ALL,"");
printf("A letra '%c' não existe no vetor\n",*pc);
}

resp=saida();

}while(resp=='n' || resp=='N');
}



pesquisa(char *pc,char *pvet)
{
int cont=0,x=0;

for(cont=0;*(pvet+cont)!='\0';cont++)
{
    if(*pc==*(pvet+cont))
    {
        return x=1;
    }
}

return x=0;
}



char saida()
{

char resp;

do
{
printf("Deseja encerrar o programa?(S/N)\n");
resp=getch();
if(resp!='s' && resp!='S' && resp!='n' && resp!='N')
    {
        printf("Valor inválido\n");
    }
}while(resp!='s' && resp!='S' && resp!='n' && resp!='N');


if(resp=='S' || resp=='s')
    {
        printf("\nAté logo!\n");
        exit(0);
    }
else
    system("cls");

return resp;
}

#endif // ex2