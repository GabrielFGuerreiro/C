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