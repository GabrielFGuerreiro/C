#define ex5
#include<stdio.h>
#include<locale.h>

#ifdef ex1
/*Receba 2 string de ate 10 caracteres via teclado na funcao main(). Faça uma funcao para compara-las e retorne como resultado se são IGUAIS 1
ou se DIFERENTES 0 para a funcao main(). Imprima o resultado na funcao main().(Declare os vetores como variavel global)*/

char recomeca();
int compara();
char A[11];
char B[11];

int main(){
int result,cont=0;
char resp;

do
{
    do
    {
        setlocale(LC_ALL,"");
        printf("Digite a primeira string de até 10 caracteres\n");
        scanf("%s",A);

        for(cont=0;A[cont]!='\0';cont++){}

    }
    while(cont>10);


     do
    {
        setlocale(LC_ALL,"");
        printf("Digite a segunda string de até 10 caracteres\n");
        scanf("%s",B);

        for(cont=0;B[cont]!='\0';cont++){}
    }
    while(cont>10);


result=compara();

if(result==1){
printf("Os vetores são IGUAIS (%d)\n",result);
}
else
printf("Os vetores são DIFERENTES (%d)\n",result);

resp=recomeca();

}while(resp=='S' || resp=='s');
}



int compara(){
int cont,x=0,z;


while(A[x]==B[x] && A[x]!='\0' && B[x]!='\0'){
x++;
}

if(A[x]=='\0' && B[x]=='\0'){
z=1;
}
else
z=0;

return z;
}



char recomeca()
{
char resp;
    do
        {
            printf("Deseja recomeçar?(S/N)\n");
            resp=getch();
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
            printf("\nAté logo!\n");

                return resp;
}


#endif // ex1


#ifdef ex2


/*Escreva um programa para receber 5 nomes, com até 7 caracteres, via teclado e imprima-os no video no seguinte formato:
(Declare os 5 vetores como variaveis globais)
            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3*/
char recomeca();
char nome1[8],nome2[8],nome3[8],nome4[8],nome5[8];
int main(){

int cont=0,x;
char resp;

do
{
    do
    {
        setlocale(LC_ALL,"");
        printf("Digite o [1º] nome com até sete caracteres\n");
        scanf("%s",nome1);

        for(cont=0;nome1[cont]!='\0';cont++){}

    }
    while(cont>7);

    do
    {
        setlocale(LC_ALL,"");
        printf("Digite o [2º] nome com até sete caracteres\n");
        scanf("%s",nome2);

        for(cont=0;nome2[cont]!='\0';cont++){}

    }
    while(cont>7);

    do
    {
        setlocale(LC_ALL,"");
        printf("Digite o [3º] nome com até sete caracteres\n");
        scanf("%s",nome3);

        for(cont=0;nome3[cont]!='\0';cont++){}

    }
    while(cont>7);

        do
    {
        setlocale(LC_ALL,"");
        printf("Digite o [4º] nome com até sete caracteres\n");
        scanf("%s",nome4);

        for(cont=0;nome4[cont]!='\0';cont++){}

    }
    while(cont>7);

        do
    {
        setlocale(LC_ALL,"");
        printf("Digite o [5º] nome com até sete caracteres\n");
        scanf("%s",nome5);

        for(cont=0;nome5[cont]!='\0';cont++){}

    }
    while(cont>7);

printf("        10        20        30        40        50\n");
printf("12345678901234567890123456789012345678901234567890\n");
printf("  %-7s                                 %-7s\n",nome1,nome5);
printf("            %-7s             %-7s\n",nome2,nome4);
printf("                      %-7s\n",nome5);


resp=recomeca();

}while(resp=='S' || resp=='s');
}



char recomeca()
{
char resp;
    do
        {
            printf("Deseja recomeçar?(S/N)\n");
            resp=getch();
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
            printf("\nAté logo!\n");

            return resp;
}


#endif // ex2


#ifdef ex3
/*Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres para letras maiusculas.*/
char recomeca();

int main(){

int cont=0;
char resp,caracs[11];

do{
    do
    {
        setlocale(LC_ALL,"");
        printf("Digite uma palavra com até 10 caracteres\n");
        scanf("%s",caracs);

        for(cont=0;caracs[cont]!='\0';cont++)
        {
            if(caracs[cont]>=97 && caracs[cont] <=122)
            {
            caracs[cont]=caracs[cont]-32;
            }

        }

    }
    while(cont>10);

    printf("%s\n",caracs);

resp=recomeca();

}while(resp=='S' || resp=='s');
}


char recomeca()
{
char resp;
    do
        {
            printf("Deseja recomeçar?(S/N)\n");
            resp=getch();
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
            printf("\nAté logo!\n");

            return resp;
}
#endif // ex3