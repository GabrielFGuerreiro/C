#define ex1
#include<stdio.h>
#include<locale.h>

#ifdef ex1


/*Receba 2 string de ate 10 caracteres via teclado na funcao main(). Fa�a uma funcao para compara-las usando ponteiros e retorne como resultado se
sao IGUAIS 1 ou se sao DIFERENTES 0 para a funcao main(). Imprima o resultado na funcao main(). Declare os vetores como variavel global*/

int compara(pc1,pc2);
char saida();

char st1[10],st2[10];


main(){

int cont=0,result;
char *pc1,*pc2,resp;

pc1=st1; //ou pc1=&st1[0]
pc2=st2;

do{
setlocale(LC_ALL,"");
printf("Digite duas strings de até 10 caracteres\n");
scanf("%s %s",pc1,pc2);

result=compara(pc1,pc2);

if(result==1)
{
    printf("As strings são iguais! (1)\n");
}
else
{
    printf("As strings são diferentes! (0)\n");
}

resp=saida();

}while(resp=='n' || resp=='N');
}


int compara(char *x,char *y){

int i,z=0;

for(i=0;*(x+i)!='\0' && *(y+i)!='\0';i++)
{
     if(*(x+i)!=*(y+i))
    {
        return z=0;
    }
}

if(*(x+i)=='\0' && *(y+i)=='\0')
{
return z=1;
}

}


char saida()
{

char resp;
    do
        {
            printf("\nDeseja encerrar o programa?(S/N)\n");
            resp=getch();
            if(resp!='s' && resp!='S' && resp!='n' && resp!='N')
            {
                        printf("Valor inv�lido\n");
            }
        }
        while(resp!='s' && resp!='S' && resp!='n' && resp!='N');


        if(resp=='S' || resp=='s')
        {
            printf("\nAt� logo!\n");
            exit(0);
        }
        else
            system("cls");

        return resp;
}
#endif // ex1