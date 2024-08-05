#include<stdio.h>

Exibe_preco(float valor);
float garante_preco();

int main(void)
{float num;

    num=garante_preco();
    Exibe_preco(num);
    return 0;
}

Exibe_preco(float valor)
{
  printf("O preco com desconto de 10 % é %f",valor- 0.1*valor);
}

float garante_preco()
{float preco;
    do
    {
        printf("DIGITE O PREÇO DO PRODUTO\n");
        scanf("%f",&preco);
    }
    while(preco<=0);
return preco;
}
