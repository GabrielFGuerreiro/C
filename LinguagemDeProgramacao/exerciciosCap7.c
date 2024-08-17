#define ex1
#include<stdio.h>
#include<locale.h>



#ifdef ex1


/*Escreva um programa que tem uma estrutura da dados com os membros abaixo.
Receba dados via teclado em uma funcao e imprima estes conteudos no video, em outra funcao, no seguinte formato.
estrutura: char, int, long, float, double, unsigned char, unsigned int, unsigned long
            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long*/


struct dados{char charac;int num;long longo;float deci;double decib;unsigned char charau;unsigned int numu;unsigned long longou;};
struct dados infos;

recebe();
imprime();
saida();

int main(void){
char resp;
do{

recebe();
imprime();
resp=saida();

}while(resp=='N' || resp=='n');

}

recebe(){
setlocale(LC_ALL,"");
printf("Digites seis valores numéricos\n");
scanf("%d %ld %f %lf %u %lu",&infos.num,&infos.longo,&infos.deci,&infos.decib,&infos.numu,&infos.longou);

printf("Digites dois caracteres\n");
scanf(" %c",&infos.charac);
scanf(" %c",&infos.charau);
}

imprime(){
printf("        10        20        30        40        50        60        70\n");
printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
printf("    %-2c        %-6d    %-11ld         %-10.2f          %-10.2lf\n",infos.charac,infos.num,infos.longo,infos.deci,infos.decib);
printf("          %-2c                  %-5u               %-10ld\n",infos.charau,infos.numu,infos.longou);
}

int saida()
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
        }
        while(resp!='s' && resp!='S' && resp!='n' && resp!='N');


        if(resp=='S' || resp=='s')
        {
            printf("\nAté logo!\n");
            exit(0);
        }
        else
            system("cls");

        return resp;
}
#endif // ex1