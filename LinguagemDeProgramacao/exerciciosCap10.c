#define ex1
#include<stdio.h>
#include<locale.h>
#include<time.h>


#ifdef ex1
/*Escreva um programa para criar e abrir um arquivo texto de nome "arq.txt".
Receba via teclado diversos caracteres (um por vezes) e escreva-os nesse arquivo. O caracter '0' finaliza a entrada de dados.
Abra o arquivo "arq.txt", leia e imprima na tela todos os caracteres armazenados no arquivo (um por vezes).*/

char saida();

main()
{
int cont;
char caracs[20],resp;
//char n='\n';

FILE *parq; //Ponteiro de arquivo

do{
printf("Digite caracteres(0 para finalizar)\n");
for(cont=0;caracs[cont]!='0';cont++)
{
//scanf(" %c",&caracs[cont]);
caracs[cont]=getchar();

    if(caracs[cont]=='0')
    {
        caracs[cont]='\0';
        break;
    }
}

//Abrir arquivo no modo escrita. Se o arquivo nao existir, é retornada uma condicao de erro representada pela constante "NULL".

if((parq=fopen("arq.txt","w"))==NULL)
{
    printf("Erro ao abrir o arquivo\n");
    exit(0); //encerra o programa e volta ao sistema operacional
}

for(cont=0;caracs[cont]!='\0';cont++)
{
putc(caracs[cont],parq);
//putc(n,parq);
}

printf("Texto do arquivo inserido com sucesso\n\n");
fclose(parq);

resp=saida();

}while(resp=='n' || resp=='N');

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
#endif // ex1


#ifdef ex2
/*Escreva um programa para gerenciar uma agenda de contatos. Para cada contato armazene o nome, o telefone e o aniversario
(dia e mes) em uma estrutura de dados. Utilize um vetor de estrutura de 4 elementos como variavel LOCAL na funcao main().
Utilize ponteiros para passar o vetor de estrutura para s funcoes.
Sempre que o programa for encerrado, os contatos devem ser escritos no arquivo e quando o programa iniciar os contatos
devem ser lidos do arquivo.
    O programa deve ter as seguintes opcoes:(cada opcao do menu e' um funcao)
    1 - inserir contato
    2 - listar todos os contatos
    3 - pesquisar um contato pelo nome
    4 - listar os contatos cujo nome inicia com uma letra digitada
    5 - imprimir os aniversariantes do mês.
    6 - altera contato
    7 - exclui contato
    8 - saida*/

struct infos{char nome[15];char tel[15];int dia;int mes};

ler_arq(struct infos *pctt);
escreve_arq(struct infos *pctt);
entrada(struct infos *pctt);
listar(struct infos *pctt);
pesquisar_ctt(struct infos *pctt);
pesquisar_letra(struct infos *pctt);
aniver(struct infos *pctt);
alterar(struct infos *pctt);
excluir();
saida();


main()
{
static struct infos contatos[4];
struct infos *pctt;
pctt=&contatos[0];

char menu;

ler_arq(pctt);

while(1)
{
setlocale(LC_ALL,"");
printf("            Menu\n\n 1 - Inserir contatos\n 2 - Listar contatos\n 3 - Pesquisar um contato pelo nome completo\n");
printf(" 4 - Listar contatos pela letra inicial do nome\n 5 - Mostrar os aniversariantes do mês\n 6 - Alterar contato\n");
printf(" 7 - Excluir contato\n 8 - Encerrar programa\n");
printf("\nDigite sua opção\n");
scanf(" %c",&menu);


switch(menu)
{

case '1':

    system("cls");
    entrada(pctt);

    break;

case '2':

    system("cls");
    listar(pctt);

    break;

case '3':

    system("cls");
    pesquisar_ctt(pctt);

    break;

case '4':

    system("cls");
    pesquisar_letra(pctt);

    break;

case '5':

    system("cls");
    aniver(pctt);

    break;

case '6':

    system("cls");
    alterar(pctt);

    break;

case '7':

    system("cls");
    excluir(pctt);

    break;

case '8':

    system("cls");
    escreve_arq(pctt);
    saida();

    break;

default:

    system("cls");
    printf("Voce escolheu uma opcao invalida\n");

    break;
}

}

}


//_____________________________________\\


ler_arq(struct infos *pctt)
{
int cont;
FILE *arq;

arq=fopen("Contatos.txt","r");


if(arq==NULL)
{
    printf("Arquivo inexistente\n");
    return 0;
}

for(cont=0;cont<4;cont++)
{
    fread((pctt+cont),sizeof(*pctt),1,arq);
}

fclose(arq);
}

//_____________________________________\\


escreve_arq(struct infos *pctt)
{
int cont=0;
FILE *arq;

arq=fopen("Contatos.txt","w");

if(arq==NULL)
{
    printf("Arquivo inexistente\n");
    return 0;
}

for(cont=0;cont<4;cont++)
{
    fprintf(arq,"[%dº Contato]\n",cont+1);
    fprintf(arq,"Nome:%s\n",(pctt+cont)->nome);
    fprintf(arq,"Telefone:%s\n",(pctt+cont)->tel);
    fprintf(arq,"Dia do aniversário:%d\n",(pctt+cont)->dia);
    fprintf(arq,"Mês do aniversário:%d\n\n",(pctt+cont)->mes);
}

    fclose(arq);
}


//_____________________________________\\


entrada(struct infos *pctt)
{
int cont=0;

for(cont=0;cont<4;cont++)
{
printf("[%dº Contato]\n",cont+1);
printf("\nDigite o nome do contato:");
scanf("%s",&(pctt+cont)->nome);

printf("\nDigite o telefone do contato:");
scanf("%s",&(pctt+cont)->tel);

do
{
printf("\nDigite o dia do aniversário do contato:");
scanf("%d",&(pctt+cont)->dia);
if(((pctt+cont)->dia)<1 || ((pctt+cont)->dia)>31)
    {
        printf("Digite um valor de 1 a 31\n");
    }
}while((pctt+cont)->dia<1 || (pctt+cont)->dia>31);

do
{
printf("\nDigite o mês do aniversário do contato:");
scanf("%d",&(pctt+cont)->mes);
if((pctt+cont)->mes<1 || (pctt+cont)->mes>12)
    {
        printf("Digite um valor de 1 a 12\n");
    }
}while((pctt+cont)->mes<1 || (pctt+cont)->mes>12);
printf("\n");

}
}

//_____________________________________\\


listar(struct infos *pctt)
{

for(int cont=0;cont<4;cont++)
{
    printf("[%dº Contato]\n",cont+1);
    printf("Nome:%s\n",(pctt+cont)->nome);
    printf("Telefone:%s\n",(pctt+cont)->tel);
    printf("Dia do aniversário:%d\n",(pctt+cont)->dia);
    printf("Mês do aniversário:%d\n\n",(pctt+cont)->mes);
}
}


//_____________________________________\\


pesquisar_ctt(struct infos *pctt)
{
int cont=0,i=0;
char z[15];

printf("Pesquise o contato pelo nome\n");
scanf("%s",z);

for(cont=0;cont<4;cont++)
{
    for(i=0;z[i]!='\0';i++)
    {
        if(z[i]!=(pctt+cont)->nome[i])
        {
           break;
        }
    }

    if(z[i]=='\0' && (pctt+cont)->nome[i]=='\0')
    {
        printf("\n[%dº Contato]\n",cont+1);
        printf("Nome:%s\n",(pctt+cont)->nome);
        printf("Telefone:%s\n",(pctt+cont)->tel);
        printf("Dia do aniversário:%d\n",(pctt+cont)->dia);
        printf("Mês do aniversário:%d\n\n",(pctt+cont)->mes);
        return 0;
    }
}

printf("\nNome inexistente\n");

}



pesquisar_letra(struct infos *pctt)
{
int cont=0,i=0;
char z;

printf("Pesquise os contatos pela letra inicial\n");
scanf(" %c",&z);

for(cont=0;cont<4;cont++)
{
    while(z==(pctt+cont)->nome[0])
    {
        printf("\n[%dº Contato]\n",cont+1);
        printf("Nome:%s\n",(pctt+cont)->nome);
        printf("Telefone:%s\n",(pctt+cont)->tel);
        printf("Dia do aniversário:%d\n",(pctt+cont)->dia);
        printf("Mês do aniversário:%d\n\n",(pctt+cont)->mes);
        i++;
        break;
    }
}

if(i==0)
{
    printf("\nNome inexistente\n");
}
}


//_____________________________________\\


aniver(struct infos *pctt)
{
struct tm *ptempo;

time_t segundos;
time(&segundos);
ptempo=localtime(&segundos);

int z=((*ptempo).tm_mon+1);
int i=0;

printf("Os aniversariantes do mês atual são:\n");

for(int cont=0;cont<4;cont++)
{
    while(z==(pctt+cont)->mes)
    {
        printf("\n[%dº Contato]\n",cont+1);
        printf("Nome:%s\n",(pctt+cont)->nome);
        printf("Telefone:%s\n",(pctt+cont)->tel);
        printf("Dia do aniversário:%d\n",(pctt+cont)->dia);
        printf("Mês do aniversário:%d\n\n",(pctt+cont)->mes);
        i++;
        break;
    }
}

if(i==0)
{
    printf("\nNão há aniversariantes no mês atual\n");
}

}


//_____________________________________\\


alterar(struct infos *pctt)
{
int cont=0,i=0,x=0,y=0;
char z[15];


printf("Pesquise o contato pelo nome para alterar as informações\n");
scanf("%s",z);

for(cont=0;cont<4;cont++)
{
    for(i=0;z[i]!='\0';i++)
    {
        if(z[i]!=(pctt+cont)->nome[i])
        {
           break;
        }
    }

    if(z[i]=='\0' || (pctt+cont)->nome[i]=='\0')
    {
        printf("\nDigite o novo nome:");
        scanf("%s",&pctt[cont].nome);

        printf("\nDigite o novo telefone:");
        scanf("%s",&pctt[cont].tel);

        printf("\nDigite o novo dia do aniversário:");
        scanf("%d",&pctt[cont].dia);

        printf("\nDigite o novo mês do aniversário:");
        scanf("%d",&pctt[cont].mes);
        printf("\n");

    }

      else
    x++;
}

if(x>3)
{
    printf("\nNome inexistente\n");
}
}


//_____________________________________\\


excluir(struct infos *pctt)
{
int cont=0,i=0,x=0,y=0;
char z[15];


printf("Pesquise o contato pelo nome para excluir as informações\n");
scanf("%s",z);

for(cont=0;cont<4;cont++)
{
    for(i=0;z[i]!='\0';i++)
    {
        if(z[i]!=(pctt+cont)->nome[i])
        {
           break;
        }
    }

    if(z[i]=='\0' && (pctt+cont)->nome[i]=='\0')
    {
        (pctt+cont)->nome[0]='\0';
        (pctt+cont)->tel[0]='\0';
        (pctt+cont)->dia=0;
        (pctt+cont)->mes=0;
        printf("\n[%dº] Contato excluido com sucesso\n",cont+1);
        return 0;

    }

      else
    x++;
}

if(x>3)
{
    printf("\nNome inexistente\n");
}
}



//_____________________________________\\


saida()
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

#endif // ex2

