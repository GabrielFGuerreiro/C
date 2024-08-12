#define ex1
#include<stdio.h>
#include<locale.h>

#ifdef ex1
/*Escreva um programa que receba um vetor de inteiros com tamanho 10 e o decomponha em dois outros vetores.
Um tera´ as componentes de ordem impar e o outro tera´ as componentes de ordem par.
Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7, 9}, o programa deve gerar os vetores
u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3, 9}.*/

int main()
{
int A[10],C[10],B[10];
int cont=0,i=0,p=0;
char resp;

    do
    {

        for(cont=0;cont<10;cont++)
        {
            setlocale(LC_ALL,"");
            printf("Digite o valor do vetor A da posição [%d]\n",cont+1);
            scanf("%d",&A[cont]);
        }


        for(cont=0;cont<10;cont++)
        {

            if(cont%2== 0)
            {
                B[i]=A[cont];
                i++;
            }

            else
            {
                C[p]=A[cont];
                p++;
            }

        }

        printf("\nB={");
        for(cont=0;cont<i;cont++)
        {
            printf("%d",B[cont]);
        }
        printf("}");

        printf("\nC={");
        for(cont=0;cont<p;cont++)
        {
            printf("%d",C[cont]);
        }
        printf("}\n\n");

        do
        {
            printf("Deseja recomeçar?(S/N)\n");
            resp=getche();
            if(resp!='s' && resp!='S' && resp!='n' && resp!='N')
            {
                printf("ERRO\n");
            }
        }
        while(resp!='s' && resp!='S' && resp!='n' && resp!='N');


        if(resp=='S' || resp=='s')
        {
            system("cls");
            cont=0;
            p=0;
            i=0;
        }
        else
            printf("\nAté logo!\n");

    } while(resp=='S' || resp=='s');

}

#endif // ex1


#ifdef ex2
/*Escreva um programa que receba um vetor de inteiros com tamanho 10 e o decomponha em dois outros vetores.
Um tera´ as componentes de valor impar e o outro tera´ as componentes de valor par.
Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7, 4} o programa deve gerar os vetores
u = {3, 5, 1, 3, 7} e w = {6, 8, 4, 2, 4}.*/
int main(void){
    int A[10],B[10],C[10];
    int cont=0,p=0,i=0;
    char resp;

    do
    {

        for(cont=0;cont<10;cont++)
        {
            setlocale(LC_ALL,"");
            printf("Digite o valor do vetor A da posição [%d]\n",cont+1);
            scanf("%d",&A[cont]);
        }

        for(cont=0;cont<10;cont++)
        {

            if(A[cont]%2== 0)
            {
                B[i]=A[cont];
                i++;
            }

            else
            {
                C[p]=A[cont];
                p++;
            }
        }

        printf("\nB={");
        for(cont=0; cont<i; cont++)
        {
            printf("%d",B[cont]);
        }
        printf("}");

        printf("\nC={");
        for(cont=0;cont<p;cont++)
        {
            printf("%d",C[cont]);
        }
        printf("}\n\n");


        do
        {
            printf("Deseja recomeçar?(S/N)\n");
            resp=getche();
            if(resp!='s' && resp!='S' && resp!='n' && resp!='N')
            {
                printf("ERRO\n");
            }
        }
        while(resp!='s' && resp!='S' && resp!='n' && resp!='N');


        if(resp=='S' || resp=='s')
        {
            system("cls");
            cont=0;
            p=0;
            i=0;
        }
        else
            printf("\nAté logo!\n");

    }
    while(resp=='S' || resp=='s');
}

#endif // ex2

#ifdef ex3
/*Defina 2 vetores bidimensionais do tipo int de 2x3. Escreva um programa que recebe os dados via teclado para esses 2 vetores.
Usando o operador adicao "+", some os elementos de mesmo indice dos 2 vetores e guarde o resultado em um 3. vetor.
Imprima na tela o indice, os valores e o resultado dos 6 elementos dos vetores.*/


int main(){

int vetor1[2][3],vetor2[2][3],vetorf[2][3],l=0,c=0;
char resp;

do{
        printf("==============\nPrimeiro Vetor\n==============\n");
        for(l=0;l<=1;l++)
        {
            for(c=0;c<=2;c++)
            {
                setlocale(LC_ALL,"");
                printf("Digite o valor da posição de linha %d e coluna %d\n",l+1,c+1);
                scanf("%d",&vetor1[l][c]);
            }
        }

        system("cls");
        printf("=============\nSegundo Vetor\n=============\n");
        for(l=0;l<2;l++)
        {
            for(c=0;c<3;c++)
            {
                setlocale(LC_ALL,"");
                printf("Digite o valor da posição linha %d e coluna %d\n",l+1,c+1);
                scanf("%d",&vetor2[l][c]);
            }
        }

        system("cls");
        for(l=0;l<2;l++)
        {
            for(c=0;c<3;c++)
            {
            vetorf[l][c]=vetor1[l][c]*vetor2[l][c];
            }
        }


          for(l=0;l<2;l++)
        {
            for(c=0;c<3;c++)
                {
                 printf("Valor na posição[%d,%d]=%d\n\n",l+1,c+1,vetorf[l][c]);
                }
        }

        do
        {
            printf("Deseja recomeçar?(S/N)\n");
            resp=getche();
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

    }while(resp=='S' || resp=='s');
}
#endif // ex3


#ifdef ex4
/*Escreva um programa para receber via teclado em vetores 3 int, 3 long, 3 unsigned, 3 float e 3 double
e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double   */

int main(){

int vetnum[3],p,v;
long vetl[3];
unsigned vetu[3];
float vetf[3];
double vetd[3];
char resp;

    do
    {
        for(v=0;v<5;v++)
        {
            for(p=0;p<3;p++)
            {
                setlocale(LC_ALL,"");
                printf("Digite um número qualquer\n");
                if(v==0)
                {
                    scanf("%d",&vetnum[p]);
                }
                else if(v==1)
                {
                    scanf("%ld",&vetl[p]);
                }
                else if(v==2)
                {
                    scanf("%u",&vetu[p]);
                }
                else if(v==3)
                {
                    scanf("%f",&vetf[p]);
                }
                else
                {
                    scanf("%lf",&vetd[p]);
                }
            }
        }

    printf("\n        10        20        30        40        50\n");
    printf("12345678901234567890123456789012345678901234567890\n");
    for(p=0;p<3;p++){
    printf("  %-3d                 %-10ld          %-5u\n",vetnum[p],vetl[p],vetu[p]);
    printf("            %-8.1f            %-8.1lf\n",vetf[p],vetd[p]);
    }
    printf("\n");
        do
        {
            printf("Deseja recomeçar?(S/N)\n");
            resp=getche();
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

    }
    while(resp=='S' || resp=='s');
}
#endif // ex4
