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
