#define ex2
#include <stdio.h>
#include <locale.h>
#include <ctype.h>

#ifdef ex1

main()
{
setlocale(LC_ALL,"");
int N;

do
{
printf("Digite um número\n");
scanf("%d",&N);

if(N!=0){
if((N%2)==0)
{
printf("O número é par\n");
}
else{
printf("O número é impar\n");
}
}
}while(N!=0);

printf("Número 0 digitado!\n");
}
#endif //ex1


#ifdef ex2

main()
{

char continuar;
do{

int a,num,k;
float preco,porcent,nume=0,deno=0,cont=0,soma,media,produt=1;
setlocale(LC_ALL,"");

do
{
printf("Digite um número de 1 a 3\n1-Antecessor e sucessor de um número;\n2-Desconto do preço de um produto;\n3-Soma,média e produto de uma sequência.\n");
scanf("%d",&a);
system("cls");
if(a!=1 && a!=2 && a!=3)
{
printf("Valor inválido!\n");
}
}while(a!=1 && a!=2 && a!=3);


switch(a){
case 1:
    printf("Digite um número\n");
    scanf("%d",&num);
    printf("O antecessor e sucessor desse número são, respectivamente %d e %d\n",num-1,num+1);
    break;
case 2:
    do
    {
    printf("Digite o preço de um produto\n");
    scanf("%f",&preco);
    if(preco<=0)
    {
    printf("Digite um valor maior que zero!\n");
    }
    }while(preco<=0);
    do
    {
    printf("Digite a porcentagem de desconto do produto de 0 a 100\n");
    scanf("%f",&porcent);
    }while(porcent<0 || porcent>100);
    porcent=(porcent/100);
    printf("O novo valor do produto com desconto de é %2.f\n",(preco-(preco*porcent)));
    break;
case 3:
    do
    {
    printf("Digite a quantidade de termos da sequência\n");
    scanf("%d",&k);
    }while(k<=0);
    for(cont=0;cont<k;cont++)
    {
    nume+=2;
    deno+=5;
    printf("%.f/%.f\n",nume,deno);
    soma+=(nume/deno);
    produt*=(nume/deno);
    }
    media=soma/k;
    printf("\nA média da sequência até o %dº termo é: %g\n",k,media);
    printf("A soma da sequência até o %dº termo é: %g\n",k,soma);
    printf("O produto da sequência até o %dº termo é: %l\n",k,produt);
    }

printf("Deseja continuar? (S/N)\n");
scanf( " %c",&continuar);
system("cls");
continuar=tolower(continuar);
if(continuar=='s')
{
printf("Programa reiniciado!\n");
}
}while(continuar=='s');

}

#endif // ex2
