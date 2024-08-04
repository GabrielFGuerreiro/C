#define ex1
#include<stdio.h>
#include<locale.h>


#ifdef ex1
main(){
//5. Armazene num vetor dez números positivos. Exiba o conteúdo do vetor. Mostre o maior número, quantas vezes ele foi digitado e em que posições ele apareceu dentro do vetor.

int num[10],cont=0,posi=0,repete=0,maior;

setlocale(LC_ALL,"");

for(cont=0;cont<10;cont++){
do{
printf("Digite dez valores positivos\n");
scanf("d%",&num[cont]);
if(num[cont]<0){
printf("Valor inválido! Digite um valor maior que zero\n");
}
}while(num[cont]<0);
posi++;
if(cont==0){
maior=num[cont];
}
else{
if(num[cont]>maior){
maior=num[cont];
}
}
if(num[cont]=num[cont]){
repete++;
if
printf("foi digitado %d vezes\n");
scanf("d%",&repete);
}
printf("O valor digitado na posição %dº foi %d\n",posi,num[cont]);
}
printf("O maior número digitado foi %d\n",maior);
}
#endif //ex1