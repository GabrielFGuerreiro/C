#define ex5
#include<stdio.h>
#include<locale.h>

#ifdef ex1
/*Escreva um programa que receba dois numeros inteiros e execute as seguintes funçoes:
    - Verificar se o numero digitado e' positivo ou negativo. Sendo que o valor de
      retorno sera' 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    - Se os 2 numeros sao positivos, retorne a soma dos N numeros existentes entre
      eles.
    - Se os 2 numeros sao negativos, retorne a multiplicacao dos N numeros existente
      entre eles.
    - Se 1. numero for positivo e o 2. negativo faca a divisao entre eles.*/

int verifica(int num1);
int verifica(int num2);
int conta(int x,int teste1,int y,int teste2);
char recomecar();

int main(void)
{
    int num1,num2,codig1,codig2,result;
    char resp;

    do
    {
        setlocale(LC_ALL,"");
        printf("Digite dois números quaisquer\n");
        scanf("%d %d",&num1,&num2);

        codig1=verifica(num1);
        codig2=verifica(num2);

        result=conta(num1,codig1,num2,codig2);

        printf("%d\n",result);

        resp=recomecar();

    }
    while(resp=='S' || resp=='s');
}


int verifica(int x)
{
    int teste;

    if(x>0)
    {
        teste=1;
    }
    else if(x=0)
    {
        teste=-1;
    }
    else
        teste=0;

    return teste;
}


int conta(int x,int teste1,int y,int teste2)
{
    float z;
    if(teste1==1 && teste2==1)
    {
        x=x+y;
    }
    else if(teste1==0 && teste2==0)
    {
        x=x*y;
    }
    else if(teste1==1 && teste2==0)
    {
        x=(float)x/(float)y;
    }
    else if(teste1==0 && teste2==1)
    {
        x=(float)y/(float)x;
    }
    return x;
}


char recomecar()
{
    char resp;
    do
    {
        printf("Deseja recomeçar?(S/N)\n");
        resp=getche();
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
        printf("Até logo!\n");

    return resp;
}

#endif // ex1




#ifdef ex2
/*Escreva um programa que receba um numero N via teclado.
  Escreva uma funcao que retorne a soma dos algarismos do resultado de N!. O resultado deve ser mostrado na funcao main().
  Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos e´ 2 + 4 = 6.*/

int conta(int num);
char recomecar();

int main(void){

int num,soma;
char resp;

do{
    do
    {
setlocale(LC_ALL,"");
printf("Digite um valor maior ou igual a zero\n");
scanf("%d",&num);
     }
     while(num<0);

soma=conta(num);

printf("A soma dos algarismos do resultado de %d! é %d\n\n",num,soma);

resp=recomecar();

}while(resp=='S' || resp=='s');
}


int conta(int x){
int result,fat;

for(fat=1;x>1;x=x-1){
fat=x*fat;
}
printf("O fatorial do número é %d\n",fat);

while(fat>0){
result=(fat%10)+result;
fat=fat/10;
}

return result;
}


char recomecar()
{
    char resp;
    do
    {
        printf("Deseja recomeçar?(S/N)\n");
        resp=getche();
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
        printf("Até logo!\n");

    return resp;
}

#endif // ex2
