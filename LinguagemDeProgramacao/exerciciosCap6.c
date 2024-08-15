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
