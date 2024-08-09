#define ex2
#include<stdio.h>
#include<locale.h>

#ifdef ex1
/*As ligacoes telefonicas são cobradas pela sua duracao. O sistema registra os instantes em que a ligacao foi iniciada e concluida.
Escreva um programa que recebe via teclado dois instantes dados em horas, minutos e segundo e determina o intervalo de tempo (em horas, minutos e segundos) decorrido entre eles.*/
main()
{
    int segundos1,minutos1,horas1,segundos2,minutos2,horas2,intervalo;
    char resp;

    do
    {
        setlocale(LC_ALL,"");
        printf("Digite o primeiro instante em horas, minutos e segundos\n");
        scanf("%d %d %d",&horas1,&minutos1,&segundos1);

        horas1=(horas1*60*60);
        minutos1*=60;
        segundos1=segundos1+minutos1+horas1;

        do
        {
            printf("Digite o segundo instante em horas, minutos e segundos\n");
            scanf("%d %d %d",&horas2,&minutos2,&segundos2);

            horas2=horas2*60*60;
            minutos2*=60;
            segundos2=segundos2+minutos2+horas2;

            if(segundos2<=segundos1)
            {
                printf("O segundo tempo precisa ser maior que o primeiro\n");
            }
        }
        while(segundos2<=segundos1);

        intervalo=segundos2-segundos1;

        horas1=(intervalo/60/60);
        segundos1=intervalo;
        segundos1-=(horas1*60*60);
        minutos1=(intervalo/60);
        minutos1-=(horas1*60);

        printf("O intervalo entre os dois instantes é de %d hora(s) %d minuto(s) e %d segundo(s)\n",horas1,minutos1,segundos1);

        do
        {
            printf("Deseja continuar?(S/N)\n");
            scanf(" %c",&resp);
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
    }
    while(resp=='S' || resp=='s');
}


#endif // ex1

#ifdef ex2
/*Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario pensou.
Digite via teclado os simbolos =, > ou < a cada pergunta. Utilize o comando if-else.*/

main(){

int num1=1,num99=99,media;
char simbo,resp;

do{
setlocale(LC_ALL,"");

printf("=====================================================================\n");
printf("Pense em um número entre 1 e 99 para que eu possa adivinhar!\nUtilize > caso seja maior, < para menor e = se eu adivinhei o número!\n");
printf("=====================================================================\n\n");

while(simbo!='=')
{
printf("O seu número é maior, menor ou igual a %d?\n",media=(num1+num99)/2);
scanf("%c",&simbo);

if(simbo=='>'){
num1=media;
media=(num1+num99)/2;
getchar();

}
else if(simbo=='<')
{
num99=media;
media=(num1+num99)/2;
getchar();

}
}

printf("Acertei!!!\n");

 do
        {
            printf("Deseja continuar?(S/N)\n");
            scanf(" %c",&resp);
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
    }
    while(resp=='S' || resp=='s');
}

#endif // ex2