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