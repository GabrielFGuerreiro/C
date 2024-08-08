#include <stdio.h>
#define ex3

#ifdef ex1

main()
{
int num=0,cont=0;
do
{
num=(num+2);
printf("%d\n",num);
cont=(cont+1);
}while(cont<10);
}
#endif //ex1


#ifdef ex2

int main()
{
int quant,deno=0,cont=0;
do
{
printf("Digite a quantidade de termos da sequência\n");
scanf("%d",&quant);
}while(quant<=0);
do
{
deno=(deno+3);
printf("1/%d\n", deno);
cont=(cont+1);
}while(cont<quant);
}
#endif //ex2


#ifdef ex3

main()
{
int num=0,soma,cont=0;

do
{
num+=+1;

printf("%d\n",num);
cont+=1;
soma+=num;
}while(cont<5);
printf("A soma dos cincos primeiros números é %d",soma);
}
#endif //ex3
