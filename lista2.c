#define ex19
#include <stdio.h>
#include <locale.h>

#ifdef ex1
main()
{
/*Gere e exiba cada uma das seqüências abaixo com uma quantidade k de termos determinados pelo usuário.
i. 3, 6, 9, 12, 15,...
ii. 1/4, 1/8, 1/12, 1/16, 1/20,...
iii. 1/8, 3/16, 5/24, 7/32, 9/40, 11/48,...
iv. 2/3, 4/6, 6/9, 8/12,...
v. 2/5, 4/10, 6/15, 8/20, 10/25, 12/30,...
vi. 4/8, 1, 36/24, 2, 100/40, 144/48,...*/
int quant,cont=0,nume[6],deno[6];
setlocale(LC_ALL,"");
printf("Digite a quantidade de termos de algumas sequências\n");
scanf("%d",&quant);
system("cls");

printf("Sequência I\n");
for(cont=0;cont<quant;cont++){
nume[0]+=3;
printf("%d \n",nume[1]);
}

printf("Sequência II\n");
for(cont=0,nume[2]=1;cont<quant;cont++){
deno[0]+=4;
printf("%d/%d \n",nume[2],deno[1]);
}

printf("Sequência III\n");
for(cont=0,nume[3]=1,deno[2]=0;cont<quant;cont++,nume[3]+=2){
deno[2]+=8;
printf("%d/%d \n",nume[3],deno[2]);
}

printf("Sequência IV\n");
for(cont=0,nume[4]=0;cont<quant;cont++){
nume[4]+=2;
deno[3]+=3;
printf("%d/%d \n",nume[4],deno[3]);
}

printf("Sequência V\n");
for(cont=0;cont<quant;cont++){
nume[5]+=2;
deno[4]+=5;
printf("%d/%d \n",nume[5],deno[4]);
}
}
#endif // ex1

#ifdef ex2
main(){
/* Receba a quantidade K de números quaisquer. K representa essa quantidade e deve ser digitada pelo usuário.
A variável Num armazena cada uma dos K números digitados e deverá ser alimentada pelo usuário.
Verifique e exiba a quantidade de números positivos digitada.*/

int k,cont=0,num[10],posi=0;

setlocale(LC_ALL,"");

do{
printf("Digite a quantidade de números\n");
scanf("%d",&k);
if(k<=0){
printf("Quantidade inválida! Digite um valor maior que zero\n");
}
}while(k<=0);
for(cont=0;cont<k;cont++){
printf("Digite o valor!\n");
scanf("%d",&num[cont]);
printf("O valor digitado foi %d\n",num[cont]);
if(num[cont]>0){
posi++;
}
}
printf("\nA quantidade de números positivos digitados foi %d\n",posi);
}
#endif // ex2

#ifdef ex3
/*Receba a quantidade de idades de K indivíduos. K representa essa quantidade e deve ser digitada pelo usuário.
A variável Idade armazena cada uma das K idades digitadas. Calcule e mostre a somatória dessas idades.*/

main(){
int K=0,cont=0,idade[20],soma=0;
setlocale(LC_ALL,"");

do{
printf("Digite a quantidade de indivíduos\n");
scanf("%d",&K);
if(K<=0){
printf("Valor inválido! Digite um número positivo\n");}
}while(K<=0);
for(cont=0;cont<K;cont++){
do{
printf("Digite a idade do [%dº] indivíduo\n",cont+1);
scanf("%d",&idade[cont]);
if(K<=0){
printf("Valor inválido! Digite um número positivo\n");}
}while(K<=0);
soma+=idade[cont];
}
printf("A soma das idade é %d\n",soma);
}

#endif // ex3

#ifdef ex4
/*Receba K números. Exiba a quantidade de números pares negativos e quantas vezes o número zero foi digitado.
Obs1: K representa a quantidade de números digitados pelo usuário.
Obs2: A variável Num representa cada número digitado pelo usuário.*/

main(){
int K=0,zero=0,negatpar=0,num=0,cont=0;
setlocale(LC_ALL,"");

printf("Digite a quantidade de números\n");
scanf("%d",&K);
for(cont=0;cont<K;cont++){
printf("Digite o [%dº] número\n",cont+1);
scanf("%d",&num);
if(num==0){
zero++;
}
if(num<0 && num%2==0){
negatpar++;
}
}
printf("foram digiitados %d números pares negativos e %d zeros\n",negatpar,zero);
}
#endif //ex4

#ifdef ex5
/*Receba K números positivos. Cada número recebido deverá ser armazenado na variável Num e a variável K representa a quantidade de números solicitada pelo usuário.
Exiba a quantidade de números divisíveis por 2 e 3 ao mesmo tempo.*/

main(){
int K,num=0,cont=0,num2e3=0;
setlocale(LC_ALL,"");

printf("Digite a quantidade de números\n");
scanf("%d",&K);
for(cont=0;cont<K;cont++){
do{
printf("Digite o [%dº] número positivo\n",cont+1);
scanf("%d",&num);
if(num<0){
printf("Apenas números positivos!\n");
}
}while(num<0);
if(num%2==0 && num%3==0){
num2e3++;
}
}
printf("Foram digitados %d números divisíveis por dois e três\n",num2e3);
}
#endif // ex5

#ifdef ex6
/*Receba via teclado um número X, onde este número representa a quantidade de termos que o usuário deseja. H representa cada um desses números, calcule o produto dos X números.
OBS: H deve ser maior ou igual a 15.*/
main(){
int X,H[20],cont=0,produt=1;
setlocale(LC_ALL,"");

printf("Digite a quantidade de números\n");
scanf("%d",&X);
for(cont=0;cont<X;cont++){
do{
printf("Digite o [%dº] número\n",cont+1);
scanf("%d",&H[cont]);
if(H[cont]<15){
printf("O número precisa ser maior ou igual a 15\n");
}
produt=produt*H[cont];
}while(H[cont]<15);
}
printf("O produto dos valores digitados é %d",produt);
}
#endif // ex6

#ifdef ex7
/*Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada pelo usuário.
A variável Peso armazena cada um do N pesos digitados. Calcule e mostre a média dos pesos digitados.*/

main(){
int N,cont;
float peso,soma;

setlocale(LC_ALL,"");
do{
printf("Digite a quantidade de pessoas\n");
scanf("%d",&N);
if(N<=0){
printf("Valor inválido! Digite um número maior que zero\n");
}
}while(N<=0);

for(cont=0;cont<N;cont++){
do{
printf("Digite o peso (em Kg) da [%dº] pessoa\n",cont+1);
scanf("%f",&peso);
if(peso<=0){
printf("Valor inválido! Digite um número maior que zero\n");
}
soma=peso+soma;
}while(peso<=0);
}
soma=soma/N;
printf("A média dos pesos são: %2.f",soma);
}

#endif // ex7

#ifdef ex8
/*Mostre na tela a soma e o produto dos K primeiros naturais.
OBS: K representa a quantidade de números naturais solicitado via teclado pelo usuário.
Os números naturais deverão ser gerados pelo programador. 1, 2, 3, 4, 5, 6, ....*/

main(){
int cont,K=0,produt,nume[10],soma;

setlocale(LC_ALL,"");
do{
printf("Digite o a quantidade de número naturais\n");
scanf("%d",&K);
if(K<=0){
printf("Valor inválido! Digite um número maior que zero\n");
}
}while(K<=0);

for(cont=0;cont<K;cont++){
nume[cont]=nume[cont]+1;
soma=nume[cont]+soma;
produt=nume[cont]*produt;
printf("[%dº] número natural:%d\n",cont+1,nume[cont]);
}
printf("A soma dos numeros naturais é %d\n",soma);
printf("O produto dos numeros naturais é %d\n",produt);

}

#endif // ex8


#ifdef ex9
/*9) Receba a quantidade K de números quaisquer. K representa essa
quantidade e deve ser digitada pelo usuário. A variável Num armazena cada
uma dos K números digitados e deverá ser alimentada pelo usuário.
Verifique e exiba a quantidade de números negativos superiores ou igual a -
23 e inferiores a -16 ao mesmo tempo.*/

int main(){
int K,cont=0,num[10],exiba=0;

setlocale(LC_ALL,"");
printf("Digite o a quantidade de números\n");
scanf("%d",&K);

for(cont=0;cont<K;cont++){
printf("Digite um número qualquer\n");
scanf("%d",&num[cont]);
if(num[cont]>=-23 && num[cont]<-16){
exiba++;
}
}
if(exiba==0){
printf("Não foi digitado nenhum números negativos que seja superior ou igual a -23 e inferior a -16\n");
}
else if(exiba==1){
printf("Foi digitado apenas um número negativo superior ou igual a -23 e inferior a -16\n");
}
else
printf("Foram digitados %d números negativos que sejam superiores ou iguais a -23 e inferiores a -16\n",exiba);

}


#endif // ex9

#ifdef ex10
/*Calcule e mostre a média dos K primeiros pares e múltiplos de cinco.
OBS: K representa a quantidade de números pares solicitados via teclado
pelo usuário. Os números pares deverão ser ge*/

main(){
int K,cont=0,a=0,quant,pares[50];
float media;

setlocale(LC_ALL,"");
printf("Digite a quantidade de números pares\n");
scanf("%d",&K);

for(cont=0;cont<K;cont++){
pares[cont]=a+2;
printf("%d",pares[cont]);
a=pares[cont];
if(pares[cont]%5==0){
media+=pares[cont];
quant++;
}
}

media=media/quant;
printf("A média dos números pares e multiplos de 5 é %2.f\n",media);
}
#endif // ex10

#ifdef ex11

/*Receba K números inteiros quaisquer, K representa a quantidade de termos
solicitada pelo usuário e cada termo pode ser representado pela variável N.
Exiba a quantidade de números positivos recebidos e a média dos números
ímpares.*/

main(){
int K,cont=0,quant=0,posi,N[50];
float media;

setlocale(LC_ALL,"");
printf("Digite a quantidade de números inteiros\n");
scanf("%d",&K);

for(cont=0; cont<K; cont++)
{
    printf("Digite o [%dº] número: ",cont+1);
    scanf("%d",&N[cont]);
    if(N[cont]%2!=0)
        {
            media+=N[cont];
            quant++;
        }
    if(N[cont]>0)
        {
            posi++;
        }
}

media=media/quant;
printf("Números positivos digitados: %d \nA média entre os números ímpares é %2.f\n",posi,media);
}
#endif // ex11


#ifdef ex12
/*Leia um número inteiro representado pela variável N até que N seja igual a
zero. Exiba uma mensagem informando se o número é par ou ímpar*/

main(){
int N;

do{
setlocale(LC_ALL,"");
printf("||Digite um número inteiro qualquer||\n");
scanf("%d",&N);

if(N%2==0)
{
    printf("O número é par\n\n");
}
else
{
    printf("O número é ímpar\n\n");
}

if(N==0)
{
    printf("O número digitado é 0!Encerrando o programa\n");
}
}while(N!=0);
}

#endif // ex12

#ifdef ex13

/*Receba K números quaisquer, K representa a quantidade de termos
solicitada pelo usuário e cada termo pode ser representado pela variável N.
Exiba o maior número digitado.*/

main()
{
int K,N,x=0,cont=0;

printf("Digite a quantidade de termos\n");
scanf("%d",&K);

for(cont=0;cont<K;cont++)
{
setlocale(LC_ALL,"");
printf("Digite o [%dº] termo:",cont+1);
scanf("%d",&N);
if(N>x)
{
x=N;
}
}
printf("O maior número digitado foi %d",x);
}
#endif // ex13

#ifdef ex14
/*Receba a quantidade de salários de K indivíduos. K representa essa
quantidade e deve ser digitada pelo usuário. A variável Salário armazena
cada uma dos K salários digitados. Calcule e mostre a somatória dos salários
superiores a 3 salários mínimos e inferior ou igual a 7 salários mínimos.
Exiba também o maior e o menor salário encontrado.*/


main()
{
int K,cont=0,salario[20],max,min,soma=0;

printf("Digite a quantidade de salários de K indivíduos\n");
scanf("%d",&K);

for(cont=0;cont<K;cont++)
{
    do{
        setlocale(LC_ALL,"");
        printf("Digite o [%dº] salários:",cont+1);
        scanf("%d",&salario[cont]);
        if(salario[cont]<1)
        {
            printf("Digite um salário válido\n");
        }
        if(salario[cont]>max)
        {
            max=salario[cont];
        }
        if(cont==0)
        {
            min=salario[cont];
        }
        if(salario[cont]<min)
        {
            min=salario[cont];
        }
    }while(salario[cont]<1);
    if(salario[cont]>3960 && salario[cont]<=9240)
    {
        soma+=salario[cont];
    }
}
printf("\nA somatória dos salários superiores a 3 salários mínimos e inferior ou igual a 7 salários mínimos. é:%d\n",soma);
printf("Maior salário:%d\nMenor salário:%d",max,min);
}

#endif // ex14

#ifdef ex15

/*Receba a quantidade de pesos de N pessoas. N representa essa quantidade
e deve ser digitada pelo usuário. A variável P representa cada peso digitado.
Calcule e mostre a média dos pesos superiores ou iguais a 70 quilos e
inferiores ou iguais a 85,5 e a quantidade de pessoas que apresentam pesos
superiores a 75 quilos. Exiba também o menor e o maior peso encontrado.*/

main()
{
int N,cont=0,quant=0,x=0,min=0,max=0;
float P[20],media=0;
printf("Dgite a quantidade de pesos de N pessoas\n");
scanf("%d",&N);

for(cont=0;cont<N;cont++)
{
    do{
        setlocale(LC_ALL,"");
        printf("Digite o [%dº] peso:",cont+1);
        scanf("%f",&P[cont]);
    }while(P[cont]<1);
    //Média
    if(P[cont]>=70 && P[cont]<=85.5)
    {
        media=+P[cont];
        x++;
    }
    //Quantidade >75KG
    if(P[cont]>75)
    {
        quant++;
    }
    //Maior peso
    if(P[cont]>max)
    {
        max=P[cont];
    }
    //Menor peso
    if(cont==0)
    {
        min=P[cont];
    }
    if(P[cont]<min)
    {
        min=P[cont];
    }
}
media=media/x;
printf("Média dos pesos maiores ou iguais a 70Kg e menores ou iguais a 85,5Kg:%2.f\n",media);
printf("Pessoas que apresentam peso maior a 75Kg:%d\n",quant);
printf("Maior peso:%d\nMenor peso:%d",max,min);

}


#endif // ex15

#ifdef ex16

/*Receba a quantidade K de números positivos. K representa essa quantidade
e deve ser digitada pelo usuário. A variável Num armazena cada uma dos K
números digitados. Calcule e mostre a quantidade de números ímpares e a
média dos números pares superiores a 20.*/

main(){
int K,num[20],cont=0,quant=0,imp=0;
float media;
printf("Digite a quantidade de número positivos\n");
scanf("%d",&K);

for(cont=0;cont<K;cont++)
{
    do{
        setlocale(LC_ALL,"");
        printf("Digite o [%dº] número positivo\n",cont+1);
        scanf("%d",&num[cont]);
    }while(num[cont]<1);
    if(num[cont]%2==0 && num[cont]>20)
    {
        media+=num[cont];
        quant++;
    }
    if(num[cont]%2!=0)
    {
        imp++;
    }
}
media=media/quant;
printf("Média dos números pares maiores que 20:%f\nNúmeros ímpares:%d",media,imp);
}
#endif // ex16

#ifdef ex17
/*Receba a quantidade K de números quaisquer. K representa essa
quantidade e deve ser digitada pelo usuário. A variável Num armazena cada
um dos K números digitados. Calcule e mostre a quantidade de números
positivos divisíveis por 3, a média dos números negativos. Exiba também o
maior número encontrado e quantas vezes ele apareceu.*/


main(){

int K,num[20],cont,posi=0,quant=0,max=0,x;
float media=0;

setlocale(LC_ALL,"");
printf("Digite a quantidade de números quaisquer\n");
scanf("%d",&K);

for(cont=0;cont<K;cont++)
{
    printf("Digite o [%dº] número\n",cont+1);
    scanf("%d",&num[cont]);

    if(num[cont]>=0 && num[cont]%3==0)
    {
        posi++;
    }
    if(num[cont]<0)
    {
        media+=num[cont];
        quant++;
    }
    if(num[cont]>max)
    {
        max=num[cont];
    }
}

for(cont=0;cont<K;cont++)
{
    if(max==num[cont])
    {
        x++;
    }
}

if(media>0)
{
    media=media/quant;
}


printf("A quantidade de números positivos divisíveis por três: %d\nA média dos números negativos:%2.f\nO maior: %d (apareceu %d vezes)",posi,media,max,x);
}

#endif // ex17

#ifdef ex18

/*Gere a seguinte seqüência abaixo para K termos. K representa a quantidade
de números que o usuário gostaria que fosse exibida dessa seqüência.
Mostre também a somatória apenas dos números divisíveis por 3 dessa
seqüência.
1, 1, 2, 3, 5, 8, 13, 21,.....*/

main()
{
int K,cont,divi,num1=1,num2=1,soma=0;

setlocale(LC_ALL,"");
printf("Digite a quantidade de números de uma sequência\n");
scanf("%d",&K);

for(cont=0;cont<K;cont++)
{
    if(num1%3==0)
    {
        soma=soma+num1;
    }

    printf("%d ",num1);
    num1=num1+num2;

    if(num2%3==0)
    {
        soma=soma+num2;
    }

    printf("%d ",num2);
    num2=num1+num2;
}

printf("\nA somatória dos números divisíveis por três: %d",soma);

}
#endif // ex18

#ifdef ex19
/*Solicite ao usuário um número maior ou igual a zero e inteiro representado
pela variável Num. Calcular o fatorial desse número.
 OBS: O Fatorial de zero e de um é um.
 Exemplo de cálculo do Fatorial:
5! =5 * 4 * 3 * 2 * 1*/


main()
{
int num,x;

do{
setlocale(LC_ALL,"");
printf("Digite um npumero maior ou igual a zero\n");
scanf("%d",&num);
}while(num<0);

x=num;
while(1)
{
x--;
if(x==0)
{
    break;
}
num=num*x;
}

printf("O fatorial do número é %d",num);
}
#endif // ex19


#ifdef ex20
/*Receba a quantidade de idades de K indivíduos. K representa essa quantidade e deve ser digitada pelo usuário.
A variável Idade armazena cada uma das K idades digitadas. Calcule e mostre a somatória dessas idades.*/

main(){
int K=0,cont=0,idade[20],soma=0;
setlocale(LC_ALL,"");

do{
printf("Digite a quantidade de indivíduos\n");
scanf("%d",&K);
if(K<=0){
printf("Valor inválido! Digite um número positivo\n");}
}while(K<=0);
for(cont=0;cont<K;cont++){
do{
printf("Digite a idade do [%dº] indivíduo\n",cont+1);
scanf("%d",&idade[cont]);
if(K<=0){
printf("Valor inválido! Digite um número positivo\n");}
}while(K<=0);
soma+=idade[cont];
}
printf("A soma das idade é %d\n",soma);
}

#endif // ex20

#ifdef ex21
/*Receba K números. Exiba a quantidade de números pares negativos e quantas vezes o número zero foi digitado.
Obs1: K representa a quantidade de números digitados pelo usuário.
Obs2: A variável Num representa cada número digitado pelo usuário.*/

main(){
int K=0,zero=0,negatpar=0,num=0,cont=0;
setlocale(LC_ALL,"");

printf("Digite a quantidade de números\n");
scanf("%d",&K);
for(cont=0;cont<K;cont++){
printf("Digite o [%dº] número\n",cont+1);
scanf("%d",&num);
if(num==0){
zero++;
}
if(num<0 && num%2==0){
negatpar++;
}
}
printf("foram digiitados %d números pares negativos e %d zeros\n",negatpar,zero);
}
#endif //ex21

#ifdef ex22
/*Receba K números positivos. Cada número recebido deverá ser armazenado na variável Num e a variável K representa a quantidade de números solicitada pelo usuário.
Exiba a quantidade de números divisíveis por 2 e 3 ao mesmo tempo.*/

main(){
int K,num=0,cont=0,num2e3=0;
setlocale(LC_ALL,"");

printf("Digite a quantidade de números\n");
scanf("%d",&K);
for(cont=0;cont<K;cont++){
do{
printf("Digite o [%dº] número positivo\n",cont+1);
scanf("%d",&num);
if(num<0){
printf("Apenas números positivos!\n");
}
}while(num<0);
if(num%2==0 && num%3==0){
num2e3++;
}
}
printf("Foram digitados %d números divisíveis por dois e três\n",num2e3);
}
#endif // ex22

#ifdef ex23
/*Receba via teclado um número X, onde este número representa a quantidade de termos que o usuário deseja. H representa cada um desses números, calcule o produto dos X números.
OBS: H deve ser maior ou igual a 15.*/
main(){
int X,H[20],cont=0,produt=1;
setlocale(LC_ALL,"");

printf("Digite a quantidade de números\n");
scanf("%d",&X);
for(cont=0;cont<X;cont++){
do{
printf("Digite o [%dº] número\n",cont+1);
scanf("%d",&H[cont]);
if(H[cont]<15){
printf("O número precisa ser maior ou igual a 15\n");
}
produt=produt*H[cont];
}while(H[cont]<15);
}
printf("O produto dos valores digitados é %d",produt);
}
#endif // ex23

#ifdef ex24
/*Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada pelo usuário.
A variável Peso armazena cada um do N pesos digitados. Calcule e mostre a média dos pesos digitados.*/

main(){
int N,cont;
float peso,soma;

setlocale(LC_ALL,"");
do{
printf("Digite a quantidade de pessoas\n");
scanf("%d",&N);
if(N<=0){
printf("Valor inválido! Digite um número maior que zero\n");
}
}while(N<=0);

for(cont=0;cont<N;cont++){
do{
printf("Digite o peso (em Kg) da [%dº] pessoa\n",cont+1);
scanf("%f",&peso);
if(peso<=0){
printf("Valor inválido! Digite um número maior que zero\n");
}
soma=peso+soma;
}while(peso<=0);
}
soma=soma/N;
printf("A média dos pesos são: %2.f",soma);
}

#endif // ex24

#ifdef ex25
/*Mostre na tela a soma e o produto dos K primeiros naturais.
OBS: K representa a quantidade de números naturais solicitado via teclado pelo usuário.
Os números naturais deverão ser gerados pelo programador. 1, 2, 3, 4, 5, 6, ....*/

main(){
int cont,K=0,produt,nume[10],soma;

setlocale(LC_ALL,"");
do{
printf("Digite o a quantidade de número naturais\n");
scanf("%d",K);
if(K<=0){
printf("Valor inválido! Digite um número maior que zero\n");
}
}while(K<=0);

for(cont=0;cont<K;cont++){
nume[cont]=nume[cont]+1;
soma=nume[cont]+soma;
produt=nume[cont]*produt;
printf("[%dº] número natural:%d\n",cont+1,nume[cont]);
}
printf("A soma dos numeros naturais é %d\n",soma);
printf("O produto dos numeros naturais é %d\n",produt);

}

#endif // ex25