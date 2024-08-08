#include <stdio.h>
#include <locale.h>
#define ex1

#ifdef ex1
//Armazene 8 números e mostre eles
main()
{
setlocale(LC_ALL,"");
int a[7],cont;
for(cont=0;cont<8;cont++)
{
printf("Digite 8 números quaisquer\n");
scanf("%d",&a[cont]);
}
system("cls");
for(cont=0;cont<8;cont++)
{
printf("O número digitado é %d\n",a[cont]);
}
}
#endif //ex1

#ifdef ex2
//Armazene 8 números, mostre eles e soma deles
main()
{
setlocale(LC_ALL,"");
int a[7],cont,soma=0;
for(cont=0;cont<8;cont++)
{
printf("Digite 8 números quaisquer\n");
scanf("%d",&a[cont]);
soma+=a[cont];
}
system("cls");
for(cont=0;cont<8;cont++)
{
printf("O número digitado é %d\n",a[cont]);
}
printf("A soma dos números digitados é %d\n",soma);
}
#endif //ex2