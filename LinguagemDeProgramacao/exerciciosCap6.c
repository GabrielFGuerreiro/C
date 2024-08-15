#define ex4
#include<stdio.h>
#include<locale.h>

#ifdef ex1
/*Escreva um programa que receba via teclado 2 numeros inteiros e imprima-os no video com o resultado das
4 operacoes aritmeticas.*/

char recomeca();

int main(){
int num1,num2,soma,sub,mult;
float divi;
char resp;

do{

setlocale(LC_ALL,"");
printf("Digite dois números inteiros\n");
scanf("%d",&num1);
scanf("%d",&num2);

soma=num1+num2;
sub=num1-num2;
mult=num1*num2;
divi=(float)num1/(float)num2;

printf("Soma:%d\nSubtração:%d\nMultiplicação:%d\nDivisão:%.2f\n",soma,sub,mult,divi);

resp=recomeca();

}while(resp=='S' || resp=='s');
}


char recomeca()
{
char resp;
    do
        {
            printf("Deseja recomeçar?(S/N)\n");
            resp=getch();
            if(resp!='s' && resp!='S' && resp!='n' && resp!='N')
            {
                        printf("ERRO\n");
            }
        }
        while(resp!='s' && resp!='S' && resp!='n' && resp!='N');


        if(resp=='S' || resp=='s')
        {
            system("cls");
        }
        else
            printf("\nAté logo!\n");

        return resp;
}

#endif // ex1


#ifdef ex2
//Reescreva o exercicio anterior utilizando operadores de atribuicao composta.

char recomeca();

int main(){
int num1,num2,soma,sub,mult,a,b,c,d;
float divi;
char resp;

do{

setlocale(LC_ALL,"");
printf("Digite dois números inteiros\n");
scanf("%d",&num1);
scanf("%d",&num2);

soma=num1;
soma+=num2;

sub=num1;
sub-=num2;

mult=num1;
mult*=num2;

divi=num1;
divi/=num2;

printf("Soma:%d\nSubtração:%d\nMultiplicação:%d\nDivisão:%.2f\n",soma,sub,mult,divi);

resp=recomeca();

}while(resp=='S' || resp=='s');
}


char recomeca()
{
char resp;
    do
        {
            printf("Deseja recomeçar?(S/N)\n");
            resp=getch();
            if(resp!='s' && resp!='S' && resp!='n' && resp!='N')
            {
                        printf("ERRO\n");
            }
        }
        while(resp!='s' && resp!='S' && resp!='n' && resp!='N');


        if(resp=='S' || resp=='s')
        {
            system("cls");
        }
        else
            printf("\nAté logo!\n");

        return resp;
}
#endif // ex2


#ifdef ex3
/*Escreva um programa para determinar a idade de uma pessoa, em anos, meses e dias, recebendo via teclado a data
(dia, mes e ano) do seu nascimento e a data (dia, mes e ano) atual.*/
char recomeca();

int main(){
int nascidia,nascimes,nasciano,atdia,atmes,atano,result;
char resp;

do{
setlocale(LC_ALL,"");
printf("Digite a sua data de aniversário (dia,mês,ano)\n");
scanf("%d %d %d",&nascidia,&nascimes,&nasciano);

printf("Digite a data atual (dia,mês,ano)\n");
scanf("%d %d %d",&atdia,&atmes,&atano);

result=(atano*365 + atmes*30 + atdia) - (nasciano*365 + nascimes*30 + nascidia);


nasciano=result/365;
result=result%365;

nascimes=result/30;
result=result%30;

nascidia=result;

printf("Você possui %d anos,%d meses e %d dias\n\n",nasciano,nascimes,nascidia);

resp=recomeca();

}while(resp=='S' || resp=='s');
}


char recomeca()
{
char resp;
    do
        {
            printf("Deseja recomeçar?(S/N)\n");
            resp=getch();
            if(resp!='s' && resp!='S' && resp!='n' && resp!='N')
            {
                        printf("ERRO\n");
            }
        }
        while(resp!='s' && resp!='S' && resp!='n' && resp!='N');


        if(resp=='S' || resp=='s')
        {
            system("cls");
        }
        else
            printf("\nAté logo!\n");

        return resp;
}
#endif // ex3


#ifdef ex4
/*Escreva um programa que receba via teclado 2 numeros inteiros e execute as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e
imprima-os no video no formato decimal e hexadecimal.*/
char recomeca();

int main(){
char resp;
int a,b;
int num1,num2;

do{
setlocale(LC_ALL,"");
printf("Digite dois números inteiros\n");
scanf("%d %d",&num1,&num2);
system("cls");

printf("[AND]\nDec.:%d\nHex.:%x\n\n",num1 & num2,num1 & num2);
printf("[OU]\nDec.:%d\nHex.:%x\n\n",num1 | num2,num1 | num2);
printf("[OU EXCLUSIVO]\nDec.:%d\nHex.:%x\n\n",num1 ^ num2,num1 ^ num2);
printf("[NOT]\n|1ºnúmero|\nDec.:%d\nHex.:%x\n|2ºnúmero|\nDec.:%d\nHex.:%x\n\n",~num1,~num1,~num2,~num2);
printf("[Desloc. a direita]\n|1ºnúmero|\nDec.:%d\nHex.:%x\n|2ºnúmero|\nDec.:%d\nHex.:%x\n\n",num1>>3,num1>>3,num2>>3,num2>>3);
printf("[Desloc. a esquerda]\n|1ºnúmero|\nDec.:%d\nHex.:%x\n|2ºnúmero|\nDec.:%d\nHex.:%x\n\n",num1<<1,num1<<1,num2<<1,num2<<1);
resp=recomeca();

}while(resp=='S' || resp=='s');
}





char recomeca()
{
char resp;
    do
        {
            printf("Deseja recomeçar?(S/N)\n");
            resp=getch();
            if(resp!='s' && resp!='S' && resp!='n' && resp!='N')
            {
                        printf("ERRO\n");
            }
        }
        while(resp!='s' && resp!='S' && resp!='n' && resp!='N');


        if(resp=='S' || resp=='s')
        {
            system("cls");
        }
        else
            printf("\nAté logo!\n");

        return resp;
}
#endif // ex4