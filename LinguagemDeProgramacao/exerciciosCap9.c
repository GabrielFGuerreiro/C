#define ex6
#include<stdio.h>
#include<locale.h>

#ifdef ex1
/*Escreva um programa que receba n valores via teclado e receba tambem a operação a ser executada.
Quando for digitado "=" o programa deve mostrar o resultado acumulado dos n valores.
As operações aritmeticas e a entrada de dados devem ser funcoes que recebe os valores usando ponteiros.
As variaveis sao LOCAIS na funcao main().*/


entrada(int *pnum);
operacao(char *opera,int *pnum1,int *pnum2);

int main()
{
int num1,num2,cont=1;
char opera;

int *pnum1,*pnum2;
pnum1=&num1;
pnum2=&num2;

char *popera;
popera=&opera;

setlocale(LC_ALL,"");
printf("Soma(+) Subtração(-) Multiplicação(*) Divisão(/) Resultado(=)\n\n");

while(1)
{
    printf("[%dº] Valor:",cont);
    cont++;
    entrada(pnum1);
    printf("\n");

    printf("[%dº] Valor:",cont);
    cont++;
    entrada(pnum2);
    printf("\n");

    operacao(popera,pnum1,pnum2);
    printf("\n");

    if(opera=='=')
    {
        break;
    }

}

printf("\nO resultado acumulado foi %d",*pnum1);
}


entrada(int *pnum)
{

scanf("%d",pnum);
}


operacao(char *opera,int *pnum1,int *pnum2)
{
int x;
do
{
    printf("Operação:");
    scanf(" %c",opera);
    if(*opera!='+' && *opera!='-' && *opera!='*' && *opera!='/' && *opera!='=')
    {
        printf("ERRO\n");
    }
}
while(*opera!='+' && *opera!='-' && *opera!='*' && *opera!='/' && *opera!='=');


printf("%d %d %d",*pnum1,*pnum2,x);

if(*opera=='+')
{
x=((*pnum1)+(*pnum2));
pnum1=x;

}

if(*opera=='-')
{
x=(*pnum1)-(*pnum2);

}

if(*opera=='*')
{
x=(*pnum1)*(*pnum2);
}

if(*opera=='/')
{
x=(*pnum1)/(*pnum2);
}

}

#endif // ex1


#ifdef ex2
/*Escreva um programa que receba uma letra via teclado usando ponteiro.
Escreva uma funcao que pesquise se esta letra existe no vetor abaixo usando ponteiros.
Imprima o resultado da pesquisa no video na funcao main(). Passe como informacao
para a funcao a letra digitada e o vetor usando ponteiros e faca a pesquisa
usando ponteiros.(utilize o comando return).
O vetor deve ser declarado como variavel LOCAL na funcao main().

vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y*/

pesquisa(char *pc,char *pvet);
char saida();

main()
{
char vetc[]={'b','d','f','h','j','k','m','o','q','s','u','w','y','\0'};
char *pvet;
pvet=&vetc[0];

char c,resp;
char *pc;
pc=&c;

int x;

do{

printf("Digite uma letra\n");
scanf(" %c",pc);

x=pesquisa(pc,pvet);

if(x==1)
{
printf("A letra '%c' existe no vetor\n",*pc);
}
else
{
setlocale(LC_ALL,"");
printf("A letra '%c' não existe no vetor\n",*pc);
}

resp=saida();

}while(resp=='n' || resp=='N');
}



pesquisa(char *pc,char *pvet)
{
int cont=0,x=0;

for(cont=0;*(pvet+cont)!='\0';cont++)
{
    if(*pc==*(pvet+cont))
    {
        return x=1;
    }
}

return x=0;
}



char saida()
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
}while(resp!='s' && resp!='S' && resp!='n' && resp!='N');


if(resp=='S' || resp=='s')
    {
        printf("\nAté logo!\n");
        exit(0);
    }
else
    system("cls");

return resp;
}

#endif // ex2


#ifdef ex3
/*Escreva um programa que receba em uma funcao 2 strings de ate' 10 caracteres passando como parametro ponteiro.
Os vetores devem ser declarados como variaveis LOCAIS na função main().
Escreva uma funcao para comparar as 2 strings. Passe como parametros para a funcao as 2 strings usando ponteiros
e retorne como resultado se IGUAIS 1 ou se DIFERENTES 0. Mostre o resultado no video na funcao main().*/

compara(char *pvetor1,char *pvetor2);
char saida();

main()
{
char vet1[11],vet2[11];

char *pvet1,*pvet2,resp;

pvet1=&vet1[0];
pvet2=vet2;

int x;

do{
printf("Digite duas strings\n");
scanf("%s %s",pvet1,pvet2);

x=compara(pvet1,pvet2);

if(x==1)
{
setlocale(LC_ALL,"");
printf("Os vetores são iguais\n");
}
else
{
setlocale(LC_ALL,"");
printf("Os vetores não são iguais\n");
}


resp=saida();
}while(resp=='n' || resp=='N');
}




compara(char *pvetor1,char *pvetor2)
{
int cont=0;

for(cont=0;*(pvetor1+cont)!='\0' && *(pvetor2+cont)!='\0';cont++)
{
     if(*(pvetor1+cont)!=*(pvetor2+cont))
    {
        return cont=0;
    }
}
if(*(pvetor1+cont)=='\0' && *(pvetor2+cont)=='\0')
{
return cont=1;
}

}


char saida()
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
}while(resp!='s' && resp!='S' && resp!='n' && resp!='N');


if(resp=='S' || resp=='s')
    {
        printf("\nAté logo!\n");
        exit(0);
    }
else
    system("cls");

return resp;
}
#endif // ex3


#ifdef ex4
/*Escreva um programa que tem uma estrutura da dados com os membros abaixo. A estrutura e' uma variavel LOCAL na funcao main().
Receba via teclado o conteudo de cada um dos membros numa funcao e imprima-os no video no seguinte formato
(também numa função).
estrutura: char, int, long, float, double, unsigned char, unsigned int,unsigned long
            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long*/


struct dados{char charac;int num;long longo;float deci;double decib;
unsigned char charau;unsigned int numu;unsigned long longou;};

char saida();

main()
{
struct dados infos;
struct dados *pst;
pst=&infos;

char resp;

do{
entrada(pst);
imprime(pst);
resp=saida();

}while(resp=='n' || resp=='N');

}


entrada(struct dados *pst)
{
setlocale(LC_ALL,"");
printf("Digites seis valores numéricos\n");
scanf("%d %ld %f %lf %u %lu",&pst->num,&pst->longo,&pst->deci,&pst->decib,&pst->numu,&pst->longou);

printf("Digites dois caracteres\n");
scanf(" %c",&pst->charac);
scanf(" %c",&pst->charau);
}


imprime(struct dados *pst)
{
printf("        10        20        30        40        50        60        70\n");
printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
printf("    %-2c        %-6d    %-11ld         %-10.2f          %-10.2lf\n",pst->charac,pst->num,pst->longo,pst->deci,pst->decib);
printf("          %-2c                  %-5u               %-10ld\n",pst->charau,pst->numu,pst->longou);
}


char saida()
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
}while(resp!='s' && resp!='S' && resp!='n' && resp!='N');


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


#ifdef ex5
/*Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas de 4 elementos como variavel LOCAL na funcao main().
Receba os 4 registros sequencialmente pelo teclado numa função e imprima todos os registros no video em outra funcao.
Faça um menu. Utilize ponteiros nas funcoes. Coloque no menu a opção de sair tambem. Utilize o comando switch.
(vetor de estruturas)
estutura: nome, end, cidade, estado, cep*/

struct dados {char nome[20];char end[20];char cidade[15];char estado[15];char cep[10]};

entrada(struct dados *pcad);
lista(struct dados *pcad);
saida();


main()
{
struct dados cadastro[4];
struct dados *pcad;
pcad=&cadastro[0];

int menu;

while(1){
setlocale(LC_ALL,"");
printf("        [Menu]\n\n1 - Entrada de dados\n2 - Lista dos dados\n3 - Encerrar programa\n");
printf("\nDigite sua opção\n");
scanf("%d",&menu);

switch(menu)
{

case 1:

    system("cls");
    entrada(pcad);

    break;

case 2:

    system("cls");
    lista(pcad);

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



entrada(struct dados *pcad)
{
int cont;

for(cont=0;cont<4;cont++)
{
printf("Digite seus dados para realizar o cadastro Nº[%d]:\n",cont+1);
printf("Nome:");
scanf(" %s",&(pcad+cont)->nome);

printf("Endereço:");
scanf(" %s",&(pcad+cont)->end);

printf("Cidade:");
scanf(" %s",&(pcad+cont)->cidade);

printf("Estado:");
scanf(" %s",&(pcad+cont)->estado);

printf("CEP:");
scanf(" %s",&(pcad+cont)->cep);
printf("\n");
}

}


lista(struct dados *pcad)
{
int cont=0;

setlocale(LC_ALL,"");

for(cont=0;cont<4;cont++)
{
printf("[%dº] Cadastro\n",cont+1);
printf("Nome: %s\n",(pcad+cont)->nome);
printf("Endereço: %s\n",(pcad+cont)->end);
printf("Cidade: %s\n",(pcad+cont)->cidade);
printf("Estado: %s\n",(pcad+cont)->estado);
printf("CEP: %s\n",(pcad+cont)->cep);
printf("-------------\n\n");
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
}while(resp!='s' && resp!='S' && resp!='n' && resp!='N');


if(resp=='S' || resp=='s')
    {
        printf("\nAté logo!\n");
        exit(0);
    }
else
    system("cls");

}

#endif // ex5



#ifdef ex6
/*Acrescente ao menu do exercicio anterior as funcoes de procura, altera e exclui um registro sempre usando ponteiros.*/

struct dados {char nome[20];char end[20];char cidade[15];char estado[15];char cep[10]};

entrada(struct dados *pcad);
lista(struct dados *pcad);
procura(struct dados *pcad);
altera(struct dados *pcad);
exclui(struct dados *pcad);
saida();


main()
{
struct dados cadastro[4];
struct dados *pcad;
pcad=&cadastro[0];

int menu;

while(1){
setlocale(LC_ALL,"");
printf("        [Menu]\n\n1 - Entrada de dados\n2 - Lista dos dados\n3 - Pesquisar dados\n4 - Alterar dados\n");
printf("5 - Excluir dados\n6 - Encerrar programa\n");
printf("\nDigite sua opção\n");
scanf("%d",&menu);

switch(menu)
{

case 1:

    system("cls");
    entrada(pcad);

    break;

case 2:

    system("cls");
    lista(pcad);

    break;

case 3:

    system("cls");
    procura(pcad);

    break;

case 4:

    system("cls");
    altera(pcad);

    break;

case 5:

    system("cls");
    exclui(pcad);

    break;

case 6:

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


entrada(struct dados *pcad)
{
int cont;

for(cont=0;cont<4;cont++)
{
printf("Digite seus dados para realizar o cadastro Nº[%d]:\n",cont+1);
printf("Nome:");
scanf("%s",&(pcad+cont)->nome);

printf("Endereço:");
scanf("%s",&(pcad+cont)->end);

printf("Cidade:");
scanf("%s",&(pcad+cont)->cidade);

printf("Estado:");
scanf("%s",&(pcad+cont)->estado);

printf("CEP:");
scanf("%s",&(pcad+cont)->cep);
printf("\n");
}

}


lista(struct dados *pcad)
{
int cont=0;

setlocale(LC_ALL,"");

for(cont=0;cont<4;cont++)
{
printf("[%dº] Cadastro\n",cont+1);
printf("Nome: %s\n",(pcad+cont)->nome);
printf("Endereço: %s\n",(pcad+cont)->end);
printf("Cidade: %s\n",(pcad+cont)->cidade);
printf("Estado: %s\n",(pcad+cont)->estado);
printf("CEP: %s\n",(pcad+cont)->cep);
printf("-------------\n\n");
}
}


procura(struct dados *pcad)
{
int cont=0,i=0,z=0;

char x[10];
char *px;
px=&x[0];

printf("Digite o 'nome' do registro que procura\n");
scanf("%s",px);

for(cont=0;cont<4;cont++)
{
    for(i=0;(pcad+cont)->nome[i]!='\0' || *(px+i)!='\0';i++)
    //while((pcad+cont)->nome[i]!='\0' || *(px+i)!='\0')
    {
        if(*(px+i)!=(pcad+cont)->nome[i] &&  (pcad+cont)->nome[i]!='\0')
        {
            break;
        }
        //i++;
    }
    if(*(px+i)==(pcad+cont)->nome[i])
    {
        printf("[%dº] Cadastro\n",cont+1);
        printf("Nome: %s\n",(pcad+cont)->nome);
        printf("Endereço: %s\n",(pcad+cont)->end);
        printf("Cidade: %s\n",(pcad+cont)->cidade);
        printf("Estado: %s\n",(pcad+cont)->estado);
        printf("CEP: %s\n",(pcad+cont)->cep);
        return 0;
    }

    else
    z++;
}

if(z>3)
{
    printf("ERRO!Registro não encontrado\n");
}
}


altera(struct dados *pcad)
{
int cont=0,i=0,z=0;

char x[10];
char *px;
px=&x[0];

printf("Digite o 'nome' do registro que procura para alterar\n");
scanf("%s",px);

printf("\n");

for(cont=0;cont<4;cont++)
{
    for(i=0;(pcad+cont)->nome[i]!='\0' || *(px+i)!='\0';i++)
    //while((pcad+cont)->nome[i]!='\0' || *(px+i)!='\0')
    {
        if(*(px+i)!=(pcad+cont)->nome[i])
        {
            break;
        }
        //i++;
    }
    if(*(px+i)==(pcad+cont)->nome[i])
    {
        printf("Digite as novas informações do cadastro\n");
        printf("Nome:");
        scanf("%s",&(pcad+cont)->nome);

        printf("Endereço:");
        scanf("%s",&(pcad+cont)->end);

        printf("Cidade:");
        scanf("%s",&(pcad+cont)->cidade);

        printf("Estado:");
        scanf("%s",&(pcad+cont)->estado);

        printf("CEP:");
        scanf("%s",&(pcad+cont)->cep);
        printf("\n");
        return 0;
    }

    else
    z++;
}

if(z>3)
{
    printf("ERRO!Registro não encontrado\n");
}
}


exclui(struct dados *pcad)
{
int cont=0,i=0,z=0;

char x[10];
char *px;
px=&x[0];

printf("Digite o 'nome' do registro que procura para excluir\n");
scanf("%s",px);

for(cont=0;cont<4;cont++)
{
    for(i=0;(pcad+cont)->nome[i]!='\0' || *(px+i)!='\0';i++)
    //while((pcad+cont)->nome[i]!='\0' || *(px+i)!='\0')
    {
        if(*(px+i)!=(pcad+cont)->nome[i])
        {
            break;
        }
        //i++;
    }
    if(*(px+i)==(pcad+cont)->nome[i])
    {
        (pcad+cont)->nome[0]='\0';
        (pcad+cont)->end[0]='\0';
        (pcad+cont)->cidade[0]='\0';
        (pcad+cont)->estado[0]='\0';
        (pcad+cont)->cep[0]='\0';
        printf("\n[%dº] Cadastro excluido com sucesso\n",cont+1);
        return 0;
    }

    else
    z++;
}

if(z>3)
{
    printf("ERRO!Registro não encontrado\n");
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
}while(resp!='s' && resp!='S' && resp!='n' && resp!='N');


if(resp=='S' || resp=='s')
    {
        printf("\nAté logo!\n");
        exit(0);
    }
else
    system("cls");

}

#endif // ex6
