#include <stdio.h>
#include <locale.h>
#define ex1

#ifdef ex1
//Receba doze números positivos e armazene no vetor A. Após a alimentação de todos os números mostre apenas os números maiores que 121 que estão armazenados no vetor.
main()
{
setlocale(LC_ALL,"");
int A[12],cont,cont121=0;
for(cont=0;cont<12;cont++){
do{
printf("Digite 8 números quaisquer\n");
scanf("%d",&A[cont]);
if(A[cont]<0){
printf("Valor inválido! Digite um valor positivo\n");
//system("cls");
}
}while(A[cont]<0);
}
system("cls");
for(cont=0;cont<12;cont++){
if(A[cont]>121){
cont121+=1;
printf("Os números maiores que 121 são %d\n",A[cont]);
}
}
if(cont121==0){
printf("Nenhum valor é maior que 121\n");
}
}
#endif //ex1

#ifdef ex2
//Leia oito elementos e armazene-os no vetor A. Construa o vetor B de mesma dimensão com os elementos do vetor A multiplicados por 3. Apresente o conteúdo dos dois vetores e soma deles
main()
{
setlocale(LC_ALL,"");
int a[8],b[8],cont,soma=0;
for(cont=0;cont<8;cont++)
{
printf("Digite 8 números quaisquer\n");
scanf("%d",&a[cont]);
b[cont]=(a[cont]*3);
soma=(soma+a[cont]+b[cont]);
}
system("cls");
for(cont=0;cont<8;cont++)
{
printf("Os números digitado dos vetores a e b são, respectivamente %d e %d\n",a[cont],b[cont]);
}
printf("A soma dos números digitados é %d\n",soma);
}
#endif //ex2