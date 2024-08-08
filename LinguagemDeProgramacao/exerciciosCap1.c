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

                        