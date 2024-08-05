#include<stdio.h>
#include<locale.h>

#define ex6

#ifdef ex1
//Crie um programa dividido em funções que receba o preço do produto e
// exiba o desconto de 10%.
 float preco;

int main(void)
{
   entrada();
   Exiba();

return 0;
}
entrada()
{
    setlocale(LC_ALL,"");
    do
    {
        printf("Digite o preço do produto que deve ser maior que zero\n");
        scanf("%f",&preco);
        if (preco<=0)
        {
            printf("O preço digitado deve ser maior que zero\n");
        }
    }
    while(preco<=0);

}
Exiba()
{
   printf("O preço do produto  com desconto de 10% é %.2f",0.9*preco);
}
#endif // ex1

#ifdef ex2
//Crie um programa dividido em funções que receba o preço do produto e
// exiba o desconto de 10%.

float entrada()
{float auxpreco;
    setlocale(LC_ALL,"");
    do
    {
        printf("Digite o preço do produto que deve ser maior que zero\n");
        scanf("%f",&auxpreco);
        if (auxpreco<=0)
        {
            printf("O preço digitado deve ser maior que zero\n");
        }
    }
    while(auxpreco<=0);
    return auxpreco;


}
Exiba(float preco )
{
   printf("O preço do produto  com desconto de 10% é %.2f",0.9*preco);
}
int main(void)
{float preco;
   preco=entrada();
   Exiba(preco);

return 0;
}
#endif // ex2

#ifdef ex3
//Crie uma função receba para receber um número inteiro.
// Este número inteiro deve ser declarado como uma variável local
// à função main.
// Crie a função exiba para mostrar o antecessor e o sucessor.
int receba()
{ int x;
    setlocale(LC_ALL,"");

        printf("Digite um número inteiro.\n");
        scanf("%d",&x);
     return x;
}
 Exiba(int aux)
{  printf("O antecessor do número digitado é %d \n ",aux-1);
   printf("O sucessor é %d\n",aux+1);

}
int main(void)
{int x;
   x=receba();
   Exiba(x);

return 0;
}
#endif // ex3

#ifdef ex4
//Crie uma função receba para receber um número inteiro.
// Este número inteiro deve ser declarado como uma variável local
// à função main.
// Crie a função exiba para mostrar o antecessor e o sucessor.
int receba()
{ int x;
    setlocale(LC_ALL,"");

        printf("Digite um número inteiro.\n");
        scanf("%d",&x);
     return x;
}
 Exiba(int aux)
{  int sucessor,antecessor;
    sucessor=aux+1;
    antecessor=aux -1;
    printf("O antecessor do número digitado é %d \n ",antecessor);
   printf("O sucessor é %d\n",sucessor);

}
int main(void)
{int x;
   x=receba();
   Exiba(x);

return 0;
}
#endif // ex4

#ifdef ex5
/*2.Crie a função receba para receber o salário líquido de um professor. Este salário deve ser
declarado como uma variável local à função main. A função receba deve ser usada para receber
separadamente valor da hora aula, número de aulas dadas e o % de desconto do INSS.
As variáveis :salário, hora aula, número de aulas dadas e a porcentagem de desconto
do INSS devem ser declaradas localmente à função main. Crie a função exiba para mostrar
salário líquido do professor.*/

float entradareal()
{float auxreal; //valor da hora aula
 setlocale(LC_ALL,"");
    do {
        scanf("%f", &auxreal);
    if (auxreal<=0)
        {
        printf("O valor digitado não pode ser menor ou igual a zero \n");
        }
    }while(auxreal<=0);
    return auxreal;
}
int entradainteira()
{int auxint; //quantidade de aulas
 setlocale(LC_ALL,"");
 do{

    scanf("%d", &auxint);
    if (auxint<=0){
       printf("O valor digitado não pode ser menor ou igual a zero \n");
    }
 }while (auxint<=0);
    return auxint;
}

Exiba(float ha,int na,float inss)
{
printf("O salário líquido é: %.2f \n", na*ha-(na*ha/100*inss));
}
int main (void)
{float ha,inss;
int na;
printf("Digite o valor da hora aula\n");
ha=entradareal();
printf("Digite a quantidade de aulas\n");
na=entradainteira();
printf("Digite o valor do inss\n");
inss=entradareal();
Exiba(ha,na,inss);

return 0;
}

#endif // ex5

#ifdef ex6
// Crie um programa dividido em funções que receba dois números maiores que zero
//representados pelas variáveis a,b respectivamente locais à função main.
//Calcule o resultado desta soma através da função  fun e retorne o resultado obtido para
// ser exibido na função main.
    int entrada()
    {
        int auxpreco;
        setlocale(LC_ALL,"");
        do
        {
            scanf("%d",&auxpreco);
            if (auxpreco<=0)
            {
                printf("O número digitado deve ser maior que zero\n");
            }
        }
        while(auxpreco<=0);
    return auxpreco;
}

int fun(int xa,int xb)
{
int c;
c=xa+xb;
return c;
}

int main(void)
{int a,b,c;
printf("Digite o primeiro valor para a variável a que deve ser maior que zero\n");
   a=entrada();
 printf("Digite o segundo valor para a variável b que deve ser maior que zero\n");
   b=entrada();
   c=fun(a,b);
   printf("A soma é %d",c);
return 0;
}

#endif // ex6


#ifdef ex7

int main(void){

/*Crie a função verifica para verificar e exibir no seu interior se o número é positivo, negativo ou zero.
O número deverá ser do tipo inteiro e deverá ser recebido no interior função main. */
int num;

verifica(num);

return 0;
}

verifica(int num){
setlocale(LC_ALL,"");

printf("Digite um número qualquer\n");
scanf("%d",&num);
if(num<0){
printf("O número digitado é negativo\n");
}
else if(num==0){
printf("O número digitado é o 0\n");
}
else if(num>0){
printf("O número digitado é positivo\n");
}
}

#endif // ex7

#ifdef ex8
float divisao(float num1,float num2);
float garante(float num);
main()
{

/*Crie a função Divisão que receba da função main dois números diferentes de zero que possibilitem o cálculo da divisão do primeiro pelo segundo.
Crie uma função para garantir que os números devem ser diferentes de zero.
Exiba na função main os números e o resultado obtido na função Divisão. */
    float num1,num2,result;

    num1=garante(num1);
    num2=garante(num2);
    result=divisao(num1,num2);

    printf("Os números digitados foram %2.f e %2.f.\n O resultado da divisão é %f",num1,num2,result);
}


   float garante(float num){
   setlocale(LC_ALL,"");

   do
    {
        printf("Digite um número diferente de 0 e positivo\n");
        scanf("%f",&num);
        if(num<=0)
        {
            printf("Valor inválido!\n");
        }
    }
    while(num<=0);
    return num;
   }


    float divisao(float num1, float num2){
    float result;

    result=(num1/num2);
    return result;
}


#endif //ex8

#ifdef ex9
float notas();
float media(float nota1,float nota2,float nota3,float nota4);

main(){
/*crie a função Notas que garanta que as notas devem ser maiores ou iguais a zero e menores ou iguais a dez.
Receba quatro valores referentes às notas escolares de um aluno que são variáveis locais à função main.
Crie a função Media para o cálculo da média e exiba o resultado desta média no interior da função main.
Informe também na função main se o aluno está aprovado se a média superior ou igual a 6 caso contrário informe que está reprovado.  */
    float nota1,nota2,nota3,nota4;
    float mediafinal;

    printf("Digite a primeira nota de um aluno\n");
    nota1=notas();

    printf("Digite a segunda nota de um aluno\n");
    nota2=notas();

    printf("Digite a terceira nota de um aluno\n");
    nota3=notas();

    printf("Digite a quarta nota de um aluno\n");
    nota4=notas();

    mediafinal=media(nota1,nota2,nota3,nota4);


    if(mediafinal>=6)
    {
        printf("O aluno está aprovado com %2.f!\n",mediafinal);
    }
    else
    {
        printf("O aluno está reprovado com %2.f!\n",mediafinal);
    }
}

float notas()
{
    float nota;
   setlocale(LC_ALL,"");


        do{
        scanf("%f",&nota);
        if(nota<0 || nota>10)
        {
            printf("Valor inválido! A nota precisa ser de 0 a 10\n");
        }
        }while(nota<0 || nota>10);
        return nota;
        }

float media(float nota1,float nota2,float nota3,float nota4)
{
    float media2;
   setlocale(LC_ALL,"");

    media2=(nota1+nota2+nota3+nota4)/4;
    return media2;
}

#endif // ex9

#ifdef ex10

float divisao(float num1,float num2);
float garante(float num);
existencia_triangulo(float lado1,float lado2,float lado3);
exiba(float lado1,float lado2,float lado3);
float positivos();
main(){

/*Receba três números que representam os lados de um triângulo.
Os lados do triangulo são variáveis locais à função main. Crie a função Positivos que deverá garantir que os lados do triangulo devem ser maiores que zero.
Crie a função Existencia_Triangulo que deverá garantir a existência de um triângulo que tem a seguinte definição: cada lado é menor ou igual a soma dos outros dois lados.
Crie a função exiba para mostrar se o triangulo é equilátero ou é isósceles ou escaleno.

Definições:
O triângulo é equilátero quando todos os lados são iguais.
O triângulo é isóscele quando apenas dois lados são iguais.
O triângulo é escaleno quando todos os lados são diferentes */
float lado1,lado2,lado3;
setlocale(LC_ALL,"");

printf("Digite o primeiro lado do triângulo\n");
lado1=positivos();

printf("Digite o segundo lado do triângulo\n");
lado2=positivos();

printf("Digite o terceiro lado do triângulo\n");
lado3=positivos();

existencia_triangulo(lado1,lado2,lado3);
exiba(lado1,lado2,lado3);
}

float positivos(){
float lado;
setlocale(LC_ALL,"");

do{
scanf("%f",&lado);
if(lado<=0){
printf("Valor inválido! O valor precisa ser maior que zero\n");
}
}while(lado<=0);

return lado;
}


existencia_triangulo(float a, float b, float c){
setlocale(LC_ALL,"");

do{
if(a>b+c || b>a+c || c>a+b){
printf("Erro! Um lado do triângulo não pode ser maior que a soma dos outros dois\nDigite os valores novamente\n");
a=positivos();
b=positivos();
c=positivos();
system("cls");
}

}while(a>b+c || b>a+c || c>a+b);
}


exiba(float a,float b, float c){
setlocale(LC_ALL,"");
if(a==b && b==c && a==c){
printf("O triângulo é equilátero pois possui todos os lados iguais\n");
}
else if(a!=b && b!=c && a!=c){
printf("O triângulo é escaleno pois todos os lados são distintos\n");
}
else
printf("O triângulo é isóceles pois possui dois lados iguais\n");
}
#endif // ex10

#ifdef ex11

float garantealt();
float calculo(float altura,float peso);
exiba(float IMC);
char sexo1();
float garantepeso(char sexo,float altura);
/*Receba a altura e o sexo de uma pessoa que representam variáveis locais à função main.
Calcule e exiba o seu peso ideal e O IMC – Índice de Massa Corporal é um critério da Organização Mundial de Saúde para dar uma indicação sobre a condição de peso de uma pessoa adulta.
Crie as funções que você considera necessárias para a resolução deste exercício.

 Observações:
Fórmulas para o cálculo do peso ideal:
Para homens (72 * h) – 58
Para mulheres (62,1* h) – 44.7
Fórmula do IMC = peso / (altura)2. Utilize a tabela abaixo para exibir o resultado.*/

main(){
float altura,peso,IMC;
char sexo;


printf("Digite sua altura\n");
altura=garantealt();

printf("Digite seu sexo('M' para masculino e 'F' para feminino)\n");
sexo=sexo1();

peso=garantepeso(sexo,altura);
IMC=calculo(altura,peso);
exiba(IMC);
}

float garantealt(){
float aux;
setlocale(LC_ALL,"");

do{
scanf("%f",&aux);
if(aux<=0 || aux>2)
{
printf("Valor invalida! O valor precisa ser entre 0 a 2\n");
}
}while(aux<=0 || aux>2);
return aux;
}


char sexo1(){
char sexo;
setlocale(LC_ALL,"");

do{
scanf(" %c",&sexo);
if(sexo!='m' && sexo!='f' && sexo!='M' && sexo!='F'){
printf("Valor inválido!\n");
}
}while(sexo!='m' && sexo!='f' && sexo!='M' && sexo!='F');
return sexo;
}


float garantepeso(char sexo,float altura){
float peso;
setlocale(LC_ALL,"");

if(sexo=='M' || sexo=='m'){
peso=72*altura;
}
else if(sexo=='F'||sexo=='f'){
peso=62.1*altura-44.7;
}
printf("O seu peso ideal é %2.f\n",peso);
return peso;
}


float calculo(float altura,float peso){
float IMC;

IMC=peso / pow (altura, 2);
printf("O seu número de IMC é %2.f\n",IMC);
return IMC;
}

exiba(float IMC){
setlocale(LC_ALL,"");

if(IMC<17){
printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e muito abaixo do peso\n");
}else if(IMC<=18.49)
{
printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e abaixo do peso\n");
}else if(IMC<=24.99)
{
printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e peso normal\n");
}else if(IMC<=29.99)
{
printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e acima do peso\n");
}else if(IMC<=39.99)
{
printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e obesidade I\n");
}else if(IMC<=40)
{
printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e obesidade II (severa)\n");
}else
{
printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e obesidade III (morbida)\n");
}

}
#endif // ex11

#ifdef ex12

float divisao(float num1,float num2);
float garante(float num);
existencia_triangulo(float lado1,float lado2,float lado3);
exiba(float lado1,float lado2,float lado3);
float positivos();
main(){

/*Receba três números que representam os lados de um triângulo.
Os lados do triangulo são variáveis locais à função main. Crie a função Positivos que deverá garantir que os lados do triangulo devem ser maiores que zero.
Crie a função Existencia_Triangulo que deverá garantir a existência de um triângulo que tem a seguinte definição: cada lado é menor ou igual a soma dos outros dois lados.
Crie a função exiba para mostrar se o triangulo é equilátero ou é isósceles ou escaleno.

Definições:
O triângulo é equilátero quando todos os lados são iguais.
O triângulo é isóscele quando apenas dois lados são iguais.
O triângulo é escaleno quando todos os lados são diferentes */
float lado1,lado2,lado3;
setlocale(LC_ALL,"");

printf("Digite o primeiro lado do triângulo\n");
lado1=positivos();

printf("Digite o segundo lado do triângulo\n");
lado2=positivos();

printf("Digite o terceiro lado do triângulo\n");
lado3=positivos();

existencia_triangulo(lado1,lado2,lado3);
exiba(lado1,lado2,lado3);
}

float positivos(){
float lado;
setlocale(LC_ALL,"");

do{
scanf("%f",&lado);
if(lado<=0){
printf("Valor inválido! O valor precisa ser maior que zero\n");
}
}while(lado<=0);

return lado;
}


existencia_triangulo(float a, float b, float c){
setlocale(LC_ALL,"");

do{
if(a>b+c || b>a+c || c>a+b){
printf("Erro! Um lado do triângulo não pode ser maior que a soma dos outros dois\nDigite os valores novamente\n");
a=positivos();
b=positivos();
c=positivos();
system("cls");
}

}while(a>b+c || b>a+c || c>a+b);
}


exiba(float a,float b, float c){
setlocale(LC_ALL,"");
if(a==b && b==c && a==c){
printf("O triângulo é equilátero pois possui todos os lados iguais\n");
}
else if(a!=b && b!=c && a!=c){
printf("O triângulo é escaleno pois todos os lados são distintos\n");
}
else
printf("O triângulo é isóceles pois possui dois lados iguais\n");
}


#endif // ex12


#ifdef ex13
float garantealt();
float calculo(float altura,float peso);
exiba(float IMC);
char sexo1();
float garantepeso(char sexo,float altura);
/*Receba a altura e o sexo de uma pessoa que representam variáveis locais à função main.
Calcule e exiba o seu peso ideal e O IMC – Índice de Massa Corporal é um critério da Organização Mundial de Saúde para dar uma indicação sobre a condição de peso de uma pessoa adulta.
Crie as funções que você considera necessárias para a resolução deste exercício.

 Observações:
Fórmulas para o cálculo do peso ideal:
Para homens (72 * h) – 58
Para mulheres (62,1* h) – 44.7
Fórmula do IMC = peso / (altura)2. Utilize a tabela abaixo para exibir o resultado.*/

main(){
float altura,peso,IMC;
char sexo;


printf("Digite sua altura em metros\n");
altura=garantealt();

printf("Digite seu sexo('M' para masculino e 'F' para feminino)\n");
sexo=sexo1();

peso=garantepeso(sexo,altura);
IMC=calculo(altura,peso);
exiba(IMC);
}

float garantealt(){
float aux;
setlocale(LC_ALL,"");

do{
scanf("%f",&aux);
if(aux<=0 || aux>2)
{
printf("Valor invalida! O valor precisa ser entre 0 a 2\n");
}
}while(aux<=0 || aux>2);
return aux;
}


char sexo1(){
char sexo;
setlocale(LC_ALL,"");

do{
scanf(" %c",&sexo);
if(sexo!='m' && sexo!='f' && sexo!='M' && sexo!='F'){
printf("Valor inválido!\n");
}
}while(sexo!='m' && sexo!='f' && sexo!='M' && sexo!='F');
return sexo;
}


float garantepeso(char sexo,float altura){
float peso;
setlocale(LC_ALL,"");

if(sexo=='M' || sexo=='m'){
peso=72*altura;
}
else
peso=62.1*altura-44.7;
printf("O seu peso ideal é %2.f\n",peso);
return peso;
}


float calculo(float altura,float peso){
float IMC;

IMC=peso / pow (altura, 2);
printf("O seu número de IMC é %2.f\n",IMC);
return IMC;
}

exiba(float IMC){
setlocale(LC_ALL,"");

if(IMC<17){
printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e muito abaixo do peso\n");
}else if(IMC<=18.49)
{
printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e abaixo do peso\n");
}else if(IMC<=24.99)
{
printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e peso normal\n");
}else if(IMC<=29.99)
{
printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e acima do peso\n");
}else if(IMC<=39.99)
{
printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e obesidade I\n");
}else if(IMC<=40)
{
printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e obesidade II (severa)\n");
}else
{
printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e obesidade III (morbida)\n");
}

}
#endif // ex13



#ifdef ex14
/*Crie a função ReajSalNovo que receba da função main o valor do salário e efetue o cálculo do reajuste de salário cada funcionário.
Considere que o funcionário deve receber um reajuste de 15% caso seu salário seja menor que 800 reais.
Se o salário for maior ou igual a 800 e menor ou igual a 1000, seu reajuste será de 10 %;
caso seja maior que 1000, o reajuste deve ser de 5%.
Exiba na função main o salário antigo e novo salário obtido na função de K números definidos pelo usuário.
Essa quantidade K deverá ser maior que zero e menor ou igual a 10*/
float salario[10],salario2[10];
float ReajSalNov(int cont);
float MaiorZero();
int quant();

main()
{
    int K,cont=0;
    setlocale(LC_ALL,"");

    K=quant();
    for(cont=0; cont<K; cont++)
    {
        printf("Digite o valor do salário do [%d]º funcionário\n",cont+1);
        salario[cont]=MaiorZero();
        salario2[cont]=ReajSalNov(cont);
    }
    for(cont=0; cont<K; cont++)
    {
        printf("[%d]º Funcionário\n Antigo salário=%2.f\n Novo salário=%2.f\n\n",cont+1,salario[cont],salario2[cont]);
    }
}


int quant()
{
    int aux;

    do
    {
        printf("Digite a quantidade funcionários\n");
        aux=MaiorZero();
        if(aux>10)
        {
            printf("O valor precisa ser menor que dez\n");
        }
    }
    while(aux>10);
    return aux;
}


float MaiorZero()
{
    float aux;

    do
    {
        scanf("%f",&aux);
        if(aux<=0)
        {
            printf("O valor precisa ser maior que zero\n");
        }
    }
    while(aux<=0);
    system("cls");
    return aux;
}


float ReajSalNov(int cont)
{

    float aux;
    setlocale(LC_ALL,"");

    if(salario[cont]<800)
    {
        aux=salario[cont]+salario[cont]*0.15;
    }
    else if(salario[cont]<=1000)
    {
        aux=salario[cont]+salario[cont]*0.10;
    }
    else
    {
        aux=salario[cont]+salario[cont]*0.05;
    }
    return aux;
}

#endif // ex14


#ifdef ex15
/*Aproveitando o exercício anterior Armazene no vetor Salários_Antigo
os salários antigos e os novos armazene no vetor Salário_Novo de um grupo de no mínimo 5 e no máximo 20 funcionáriois.
Esta quantidade de funcionários é determinada pelo usuário.*/
float Salarios_Antigo[20],Salario_Nov[20];
float ReajSalNov(int cont);
float MaiorZero();
int quant();

main()
{
    int K,cont=0;
    setlocale(LC_ALL,"");

    K=quant();
    for(cont=0; cont<K; cont++)
    {
        printf("Digite o valor do salário do [%d]º funcionário\n",cont+1);
        Salarios_Antigo[cont]=MaiorZero();
        Salario_Nov[cont]=ReajSalNov(cont);
    }
    for(cont=0; cont<K; cont++)
    {
        printf("[%d]º Funcionário\n Antigo salário=%2.f\n Novo salário=%2.f\n\n",cont+1,Salarios_Antigo[cont],Salario_Nov[cont]);
    }
}


int quant()
{
    int aux;

    do
    {
        printf("Digite a quantidade funcionários\n");
        scanf("%d",&aux);
        if(aux<5 || aux>20)
        {
            printf("O valor precisa ser de cinco a vinte\n");
        }
    }
    while(aux<5 || aux>20);
    system("cls");
    return aux;
}


float MaiorZero()
{
    float aux;

    do
    {
        scanf("%f",&aux);
        if(aux<=0)
        {
            printf("O valor precisa ser maior que zero\n");
        }
    }
    while(aux<=0);
    system("cls");
    return aux;
}


float ReajSalNov(int cont)
{

    float aux;
    setlocale(LC_ALL,"");
    if(Salarios_Antigo[cont]<800)
    {
        aux=Salarios_Antigo[cont]+Salarios_Antigo[cont]*0.15;
    }
    else if(Salarios_Antigo[cont]<=1000)
    {
        aux=Salarios_Antigo[cont]+Salarios_Antigo[cont]*0.10;
    }
    else
    {
        aux=Salarios_Antigo[cont]+Salarios_Antigo[cont]*0.05;
    }
    return aux;
}

#endif // ex15
