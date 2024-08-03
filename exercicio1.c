#include<stdio.h>
main()
{
    //receba tres numeros quaisquer e exiba a media entre eles
    int a,b,c,soma, media;
    printf("Digite o primeiro numero\n");
    scanf("%d",&a);
        printf("Digite o segundo numero\n");
    scanf("%d",&b);
        printf("Digite o terceiro numero\n");
    scanf("%d",&c);
    soma=a+b+c;
    media=soma/3;
    printf("A media dos valores e %d \n",media);
}
