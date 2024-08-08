#define ex1
#include<stdio.h>
#include<locale.h>

#ifdef ex1
/* Escreva um programa que receba via teclado um tempo em segundos e converta para horas, minutos e segundos.
Ex.: recebe 3850 segundos que converte para 1h 4min 10s.*/

int main(void)
{
    int segundos,minutos,horas;

    setlocale(LC_ALL,"");
    printf("Digite um tempo em segundos\n");
    scanf("%d",&segundos);

    horas=(segundos/60/60);
    segundos-=(horas*60*60);
    minutos=(segundos/60);
    segundos-=(minutos*60);
    printf("O valor convertido para horas,minutos e segundos é:%1dh %1dmin %1ds",horas,minutos,segundos);
    return 0;
}
#endif // ex1

                        //==========//

#ifdef ex2
/*Escreva um programa que receba dados via teclado para variaveis do tipo short,long, int, float, double e um char e imprima-os no video no seguinte formato:
             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char*/
int main(void){
int num;
float deci;
double deci2;
char charac;
short int numshort;
long int numlong;

setlocale(LC_ALL,"");
printf("Digite um número inteiro qualquer\n");
scanf("%d",&num);

printf("Digite dois números quaisquer\n");
scanf("%f %lf",&deci,&deci2);

printf("Digite um caracter qualquer\n");
scanf(" %c",&charac);

printf("Digite três números inteiros quaisquer\n");
scanf("%hd %ld",&numshort,&numlong);

printf("%5hd %25ld %45d\n%15.f %35.lf %55c\n",numshort,numlong,num,deci,deci2,charac);
return 0;
}

#endif // ex2

                        //==========//

#ifdef ex3
/*Escreva um programa que determine o menor multiplo de um numero inteiro. Este multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via teclado.
Ex: menor multiplo de 13 maior que 100. Resultado: 104.*/
int main(void){
int num,limite,cont,mult;

setlocale(LC_ALL,"");
printf("Digite um numero inteiro qualquer\n");
scanf("%d",&num);

printf("Digite um valor qualquer\n");
scanf("%d",&limite);

for(cont=1;mult<limite;cont++){
mult=num*cont;
}
printf("O menor multiplo de %d e maior que %d é %d\n",num,limite,mult);

return 0;
}

#endif // ex3

#ifdef ex4
/*Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma variável auxiliar.*/
int main(void)
{
    int A=10,B=15;
    printf("A=%d B=%d\n",A,B);

    A=A+B;
    printf("A=%d B=%d\n",A,B);

    B=B+A;
    printf("A=%d B=%d\n",A,B);

    A=B-A;
    printf("A=%d B=%d\n",A,B);

    B=B-2*A;
    printf("A=%d B=%d\n",A,B);
    return 0;
}
#endif // ex4

                        //==========//


#ifdef ex5
/*Faça um programa para ler um numero inteiro, positivo de tres digitos, e gerar outro número formado pelos dígitos invertidos do número lido.
Ex:   NúmeroLido = 123
      NúmeroGerado = 321*/
int main(void){
int num1,num2;

do{
setlocale(LC_ALL,"");
printf("Digite um número positivo de três digitos\n");
scanf("%d",&num1);
if(num1<=99 ||num1<0 ||num1>999){
printf("O número precisa ser maio que zero e com três digitos\n");
}
}while(num1<=99 ||num1<0 ||num1>999);

while(num1!=0){
num2=num1%10;
num1/=10;
printf("%d",num2);
}

return 0;
}

#endif // ex5


