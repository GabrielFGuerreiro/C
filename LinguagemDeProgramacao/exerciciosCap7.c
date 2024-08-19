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


#ifdef ex2

/*Escreva um programa com a estrutura de dados abaixo. Defina um vetor de estruturas de 4 elementos.
Receba os dados pelo teclado em uma funcao e imprima-os no video em uma funcao. Utilize vetor de estruturas.
Faça um menu com uma opcao para saida do programa. estrutura: nome, end, cidade, estado, cep*/

entrada();
lista();
saida();

struct dados {char nome[20];char end[20];char cidade[15];char estado[15];int cep};
struct dados cadastro[4];

main(){

int menu;

while(1){
setlocale(LC_ALL,"");
printf("        Menu\n\n1 - Entrada de dados\n2 - Lista dos dados\n3 - Encerrar programa\n");
printf("\nDigite sua opção\n");
scanf("%d",&menu);

    switch(menu)
    {

    case 1:

        system("cls");
        entrada();

        break;

    case 2:

        system("cls");
        lista();

        break;

    case 3:

        system("cls");
        saida();

        break;

    default:

        system("cls");
        printf("Você escolheu uma opção inválida\n");

        break;
    }

}
}


entrada(){

int cont;

for(cont=0;cont<4;cont++)
{
printf("Digite seus dados para realizar o cadastro Nº[%d]:\n",cont+1);
printf("Nome:");
scanf(" %s",&cadastro[cont].nome);

printf("Endereço:");
scanf(" %s",&cadastro[cont].end);

printf("Cidade:");
scanf(" %s",&cadastro[cont].cidade);

printf("Estado:");
scanf(" %s",&cadastro[cont].estado);

printf("CEP:");
scanf("%d",&cadastro[cont].cep);
printf("\n");
}

}

lista(){
int cont=0;

setlocale(LC_ALL,"");
for(cont=0;cont<4;cont++){
printf("=============\n[%dº] Cadastro\n=============\n",cont+1);
printf("Nome: %s\n",cadastro[cont].nome);
printf("Endereço: %s\n",cadastro[cont].end);
printf("Cidade: %s\n",cadastro[cont].cidade);
printf("Estado: %s\n",cadastro[cont].estado);
printf("CEP: %d\n",cadastro[cont].cep);

}

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

}
#endif // ex2



#ifdef ex3
/*Escreva um programa com a estrutura de dados abaixo. Defina um vetor de estrutura de 4 elementos.
Receba dados via teclado e imprima-os no video.Faça um menu com as seguintes opcoes:
    1 - receber todos os dados
    2 - imprime todos os dados
    3 - calcula o IMC de todas as pessoas.
    4 - sair
Calculo do IMC = peso/(altura*altura). estrutura: nome, peso, altura*/

recebe();
imprime();
imc();
saida();

struct dados {char nome[20];float peso;float alt};
struct dados IMC[4];

main(){

int menu;

while(1){
setlocale(LC_ALL,"");
printf("        Menu\n\n1 - Entrada de dados\n2 - Lista dos dados\n3 - Calcular o IMC de todos\n4 - Encerrar programa\n");
printf("\nDigite sua opção\n");
scanf("%d",&menu);

    switch(menu)
    {

    case 1:

        system("cls");
        recebe();

        break;

    case 2:

        system("cls");
        imprime();

        break;

    case 3:

        system("cls");
        imc();
        continue;
        break;

    case 4:

        system("cls");
        saida();

        break;

    default:

        system("cls");
        printf("Você escolheu uma opção inválida\n");

        break;
    }
}
}


recebe(){

int cont;

for(cont=0;cont<4;cont++)
{
printf("\nDigite os dados da [%dº] pessoa:\n",cont+1);
printf("Nome:");
scanf("%s",&IMC[cont].nome);

printf("Peso:");
scanf("%f",&IMC[cont].peso);

printf("Altura:");
scanf("%f",&IMC[cont].alt);
}

}

imprime(){
int cont=0;

setlocale(LC_ALL,"");

for(cont=0;cont<4;cont++){
printf("\n[%dº] Cadastro\n",cont+1);
printf("Nome:%s\n",IMC[cont].nome);
printf("Peso:%2.f\n",IMC[cont].peso);
printf("Altura:%.2f\n_____________\n",IMC[cont].alt);
}

}

imc(){
int cont=0;

for(cont=0;cont<4;cont++)
{
printf("IMC [%dº] Pessoa:%.2f\n",cont+1,IMC[cont].peso/(IMC[cont].alt*IMC[cont].alt));
}
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

}
#endif // ex3

#ifdef ex4
/*Escreva um programa com a estrutura de dados abaixo. Receba 2 datas via teclado na funcao main().
Faca uma funcao que calcule o numero de dias entre elas e mostre o resultado no video na funcao main().
Utilize vetor de estruturas. estrutura: dia, mes, ano*/

calcule();
saida();

struct dados{int dia;int ano;int mes};
struct dados data[2];

//int dias_mes [2] [13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
//                                {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
main(){

int cont=0;
char resp;

do{
    for(cont=0; cont<2; cont++)
    {
        setlocale(LC_ALL,"");
        printf("Digite a [%dº] data (dia,mes,ano)\n",cont+1);
        do
        {
            printf("Dia:");
            scanf("%d",&data[cont].dia);
            if(data[cont].dia<1 || data[cont].dia>31)
            {
                printf("Valor inválido\n");
            }
        }
        while(data[cont].dia<1 || data[cont].dia>31);

        do
        {
            printf("Mês:");
            scanf("%d",&data[cont].mes);
            if(data[cont].mes<1 || data[cont].mes>12)
            {
                printf("Valor inválido\n");
            }
        }

        while(data[cont].mes<1 || data[cont].mes>12);

        do
        {
            printf("Ano:");
            scanf("%d",&data[cont].ano);
            if(data[cont].ano<=1000 || data[cont].ano>9999)
            {
                printf("Valor inválido\n");
            }
            printf("\n");
        }
        while(data[cont].ano<=1000 || data[cont].ano>9999);

    }

calcule();
resp=saida();

}while(resp=='N' || resp=='n');

}

calcule(){
int cont,result;

//int a,b;

//a=data[0].mes;
//b=data[1].mes;

//a=dias_mes[0][a];
//b=dias_mes[1][b];


result=(data[1].ano*365 + data[1].mes*30 + data[1].dia) - (data[0].ano*365 + data[0].mes*30 + data[0].dia);


printf("%d\n",result);

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
#endif // ex4
