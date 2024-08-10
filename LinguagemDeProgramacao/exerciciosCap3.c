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

#ifdef ex3
/*Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva uma funcao para cada operacoes aritmeticas e passe como parametro os 2
valores recebidos na funcao main(). Retorne os resultados usando o comando return e imprima os 4 resultados no video na funcao main().*/

int somar(int num1,int num2);
int subtrair(int num1,int num2);
int multiplicar(int num1,int num2);
float dividir(int num1,int num2);
char recomecar();

main(){
int num1,num2,soma,mult,sub;
float divi;
char resp;

do{
setlocale(LC_ALL,"");
printf("Digite dois valores\n");
scanf("%d %d",&num1,&num2);

soma=somar(num1,num2);
sub=subtrair(num1,num2);
mult=multiplicar(num1,num2);
divi=dividir(num1,num2);

printf("\nSoma:%d\nSubtração:%d\nMultiplicação:%d\nDivisão:%.1f\n",soma,sub,mult,divi);

resp=recomecar();

}while(resp=='S' || resp=='s');
}

int somar(int x,int y){
x=x+y;
return x;
}


int subtrair(int x,int y){
x=x-y;

return x;
}


int multiplicar(int x,int y){
x=x*y;

return x;
}


float dividir(int x,int y){
float z;
z=(float)x/(float)y;

return z;
}

char recomecar()
{
    char resp;
    do
    {
        printf("\nDeseja recomeçar?(S/N)\n");
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

#endif // exe3

#ifdef ex4
/*Reescreva o programa do exercicio anterior para receber via teclado n valores. Os n valores nao sao definidos previamente.*/

int soma(int rsoma,int num2);
int sub(int rsub,int num2);
int mult(int rmult,int num2);
float divi(int rdivi,int num2);
char recomecar();

main(){
int num1,num2,rsoma,rsub,rmult,cont=1;
float rdivi;
char resp;

    do
    {
    setlocale(LC_ALL,"");
    printf("--------------------------\nConta nº [%d]\n",cont);
    printf("Digite 000 se quiser parar\n--------------------------\n");
    printf("Digite o [%dº] valor:",cont);
    scanf("%d",&num1);
    rsoma=num1;
    rsub=num1;
    rmult=num1;
    rdivi=num1;
        while(1){
            cont++;
            printf("Digite o [%dº] valor:",cont);
            scanf("%d",&num2);
            if(num2==000)
            {
            break;
            }
            printf("\nSoma:%d\nSubtração:%d\nMultiplicação:%d\nDivisão:%.2f\n\n",rsoma=soma(rsoma,num2),rsub=sub(rsub,num2),rmult=mult(rmult,num2),rdivi=divi(rdivi,num2));
            printf("--------------------------\nConta nº [%d]\n",cont);
            printf("Digite 000 se quiser parar\n--------------------------\n");
                }
cont=1;
resp=recomecar();

}while(resp=='S' || resp=='s');
}

int soma(int x,int y){
x=x+y;
return x;
}


int sub(int x,int y){
x=x-y;

return x;
}


int mult(int x,int y){
x=x*y;

return x;
}


float divi(int x,int y){
float z;
z=(float)x/(float)y;

return z;
}

char recomecar()
{
    char resp;
    do
    {
        printf("\nDeseja recomeçar?(S/N)\n");
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
#endif // ex4

#ifdef ex5
/*Escreva um programa que receba n valores inteiros via teclado na funcao main().
Faca uma calculadora com as 4 operacoes aritmeticas.(utilize o comando switch).
As operacoes aritmeticas devem ser funcoes. O resultado acumulado deve ser  mostrado na funcao main().*/
int soma(int rsoma,int num2);
int sub(int rsub,int num2);
int mult(int rmult,int num2);
float divi(int rdivi,int num2);
char recomecar();

main(){
int num1,num2,result,rsoma,rsub,rmult,rdivi,cont=0;
float resultd;
char conta,resp;

    do
    {
            setlocale(LC_ALL,"");
            cont++;
            printf("--------------------------\nConta nº [%d]\n",cont);
            printf("Digite 000 se quiser parar\n--------------------------\n");
            printf("Digite o [1º] valor:");
            scanf("%d",&num1);
            result=num1;
            resultd=num1;
            if(num1==000)
            {
            continue;
            }

            while(1){
            cont++;
            printf("Digite o [%dº] valor:",cont);
            scanf("%d",&num2);
            if(num2==000)
            {
            break;
            }
            do{
            printf("\nQual operação será realizada?\nSoma(+) Subtração(-) Multiplicação(*) Divisão(/)\n");
            scanf(" %c",&conta);
            if(conta!='+' && conta!='-' && conta!='*' && conta!='/'){
            printf("ERRO\n");
            }
            }while(conta!='+' && conta!='-' && conta!='*' && conta!='/');
            switch(conta){
            case '+':
                printf("=%d\n",result=soma(result,num2));
                resultd=result;
            break;

            case '-':
                printf("=%d\n",result=sub(result,num2));
                resultd=result;
            break;

            case '*':
                printf("=%d\n",result=mult(result,num2));
                resultd=result;
            break;

            case '/':
                printf("=%.2f\n",resultd=divi(resultd,num2));
                result=resultd;
            break;
            }
            printf("\n------------\nConta nº [%d]\n------------\n",cont);
                }


resp=recomecar();
if(resp=='S' || resp=='s'){
cont=0;

}
}while(resp=='S' || resp=='s');
}

int soma(int x,int y){
x=x+y;
return x;
}


int sub(int x,int y){
x=x-y;

return x;
}


int mult(int x,int y){
x=x*y;

return x;
}


float divi(int x,int y){
float z;
z=(float)x/(float)y;

return z;
}

char recomecar()
{
    char resp;
    do
    {
        printf("\nDeseja recomeçar?(S/N)\n");
        resp=getche();
        if(resp!='s' && resp!='S' && resp!='n' && resp!='N')
        {
            printf("\nERRO\n");
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
#endif // ex5