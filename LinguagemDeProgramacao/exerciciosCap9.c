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


