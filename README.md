# Sobre
Este repositório contém os materiais dos meus estudos nas aulas de Algoritimo e Lógica de Programação e Linguagem de Programação, realizados na Fatec Baixada Santista - Rubens Lara. Nesse repositório estarão os scripts realizados tanto em sala de aula quanto fora dela.

# Conceitos estudados
- **Lógica de programação**;  
- **Sintaxe da linguagem C**;  
- **Laços de repetição**;  
- **Vetores**;  
- **Funções**.  

# Estudos/Anotações

## Variáveis Simples

O tipo de variável mais simples na linguagem C é o caracter. Este tipo é declarado utilizando-se a palavra reservada "char". A variável "char" reserva um único byte na memoria do computador, e guarda um caracter da tabela ASCII.  
Um byte guarda valores de -128 a 127. Na memoria do computador não existem caracteres e sim números guardados. A tabela ASCII mostra esta equivalência.  

Para receber e imprimir um caracter:  

● getchar() 🡪 lê um caractere da entrada padrão (no caso teclado) + o ENTER.  

A forma geral da função getchar() é:   
variável = getchar();

O sinal de "=" na linguagem C não significa igualdade, mas sim atribuição, sendo, igual á todos os outros símbolos da linguagem C, chamado de operador. Assim o sinal de "=" é o operador atribuição simples.

● putchar()🡪imprime um caractere na saída padrão (no caso vídeo).

A forma geral da função putchar() é:  
putchar(variável);

## Variáveis Simples Numéricas

A variável "int" reserva 4 byte na memoria do computador, e guarda valores entre -2147483648 e 2147483647.  
Utilizam-se variáveis simples também para armazenar número reais. Ela reserva 4 byte na memoria do computador, e guarda valores entre -3.4E-38 a 3.4E+38. Esta variável também é chamada como "números reais em ponto flutuante".  
Há outra variável simples que armazena números reais, mas com capacidade para armazenar um faixa de valores maior que o "float": a variável "double". Ela guarda valores entre -1.7E-307 a 1.7E+308.

Resumindo temos as variáveis simples:  
**Tipo**      |       **Guarda**       |     **Memória**       |         **Faixa de valores**  
char          |       um caracter      |       1 byte          |  caracs. ASCII/valores int -128 a +127  
int           |       um inteiro       |       4 bytes         |        -2147483648 a 2147483647.  
float         |    números reais PF    |       4 bytes         |          -3.4E-38 a 3.4E+38.   
double        |    números reais PF    |       8 bytes         |         -1.7E-307 a 1.7E+308.  

Para receber e imprimir números utiliza-se as funções de biblioteca printf e scanf:  

● printf() 🡪 escreve caracteres formatados na saída padrão (no caso vídeo).  
A forma geral da função printf() é:  
        printf("|série de controle|", lista de argumentos);   


A série de controle são os caracteres (letras, números, símbolos etc.) a serem impressos na tela e códigos de formatação especificam como mostrar o conteúdo definido pelo tipo de informação declarada na lista de argumentos (tipo da variável).
Os códigos de formatação:  
        %c - exibe um único caracter    
        %d - exibe um inteiro  
        %f - exibe um número real em ponto flutuante  
        %e - exibe um número real em ponto flutuante na notação cientifica  
        %g - utiliza o mais curto de %e ou %f   
        %x - exibe um número em notação hexadecimal  
        %o - exibe um número em notação octal  
        %% - exibe um sinal de %  

● scanf() 🡪 lê caracteres formatados da entrada padrão. (no caso teclado)  
A forma geral da função scanf() é:  
        scanf("|serie de controle|", lista de argumentos);  

Nesta serie de controle não se pode usar caracteres, apenas o código de formatação, sendo eles:  
        %c - leia um único caracter  
        %d - leia um inteiro  
        %f - leia um número em ponto flutuante  
        %e - exibe um número em notação cientifica  
        %g - utiliza o mais curto de %e ou %f,  
        %x - leia um inteiro hexadecimal  
        %o - leia um inteiro octal  

OBS.:  
O dado deve ser armazenado no endereço de memória que o computador alocou para a variável declarada. O operador de endereço & faz com que o valor digitado pelo usuário seja colocado no endereço correto de memória onde a variável foi criada pelo computador.  

