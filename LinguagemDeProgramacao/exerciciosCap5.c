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
