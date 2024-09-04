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

## Comandos
Na linguagem C há três formas básicas de controle:  
1 - Executar uma série de instruções;  
2 - Tomar decisões para desviar a execução do programa. (controle de fluxo);  
3 - Repetir uma sequência de instruções até que uma condição seja satisfeita. (controle de repetição).  

### Comandos de Controle de Fluxo
São aqueles que permitem ao programador alterar a sequência de execução do programa, sendo eles if e switch.

#### Comando IF
O comando "if" representa uma tomada de decisão do tipo "SE isto ENTAO aquilo". (== 1) executa a "declaração", se falsa(== 0) não executa a "declaração".   

O formato geral quando se tem uma única declaração é:   

if (expressão)  
  declaração;  

O formato geral quando se tem mais de uma declaração é:  

if (expressão)  
{  
  declaração;  
  declaração;  
}  

#### Comando IF-ELSE
O comando "if-else" é uma expansão do comando "if". No comando "if" só se executa a declaração ou declarações se a expressão for verdadeira(== 1). O comando "else" permite executar outra declaração se a expressão for falsa(== 0).   

O formato geral quando se tem uma única declaração é:   

if (expressão)   
    declaração1;   
else   
    declaração2;   


O formato geral quando se tem mais de uma declaração é:   

if (expressão)   
{   
    declaração1;   
    declaração1;   
}   
else   
{   
    declaração2;   
    declaração2;   
}   

#### Comando SWITCH
No comando "switch", a variável é sucessivamente testada a uma lista de "inteiros" ou "constantes" do tipo caracter. Quando uma associação é encontrada, o conjunto de "declarações" é executado.  

O formato geral é:  
switch (variável)  
{  
  case constante_1:  
    declaração_1;  
    break;  

  case constante_2:  
    declaração_2;  
    break;  
      
  case constante_n:  
    declaração_n;  
    break;  
  
  default:  
    declaração_default;  
}  

● A declaração "default" é opcional e será executada apenas se a "variável" que esta sendo testada não for igual a nenhuma das "constantes".


● “break” é chamado de comando de "desvio", onde ele realiza um "desvio incondicional". O “case” será executado até que o comando “break” ou o fim do “switch” seja alcançado. Quando o comando “break” é alcançado o programa salta para a declaração seguinte ao final do “switch” (o fecha chave "}" ). Ele também pode ser utilizado para forçar a saída incondicional de um laço de repetição (infinito ou não).

### Comandos de Controle de Repetição
Permitem que um conjunto de instruções sejam executados até que uma "condição limite" seja encontrada. Os comandos são: for, while e do - while.

#### Comando FOR
O comando "for" repete uma "declaração" ou um "grupo de declarações", controlado por uma variável e executado por um número finito de vezes.  

O formato geral quando se tem uma única declaração é:  

    for (expressão 1 ; expressão 2 ; expressão 3)  
            declaração;  

O formato geral quando se tem mais de uma declaração é:  

    for (expressão 1 ; expressão 2 ; expressão 3)  
        {  
        declaração;  
        declaração;  
        }  

● Na "expressão 1" inicializa-se a variável de controle o loop;  
● Na "expressão 2" testa-se a variável de controle. Este teste pode ser um teste logico ou um contador. Enquanto o teste da variável de controle for verdade (==1) o loop continua a ser executado. Quando o teste se torna falso(==0), o controle do programa passa para a "declaração" seguinte ao loop apos o fecha chave "}" quando  este existir;  
● Na "expressão 3" controla-se o incremento ou decremento da variável de controle do loop.  

O funcionamento do comando "for" começa pela "expressão 1" onde a variável de controle do loop é inicializada. (executada uma única vez no inicio do loop). Então executa-se as "declarações". Em seguida a "expressão 3", incrementa ou decrementa da variável de controle. Apos a execução da "expressão 3" é testada a variável de controle na "expressão 2".  

● Laço/loop infinito  

Um comando "for" sem a "expressão 2" ou seja, sem o teste logico, é sempre verdade. Isso caracteriza um "loop infinito". Normalmente o "loop infinito" não tem as 3 expressões de controle no caso do comando "for".  

O formato geral sem a expressão 2 é:  

    for (expressão 1 ;; expressão 3)  
    {  
    declaração;  
    }  

O formato geral sem as 3 expressão é:  

    for (;;)  
    {  
    declaração;  
    }  

#### Comando WHILE
Usa-se este comando quando queremos que uma tarefa, que não envolva necessariamente uma contagem, seja executada enquanto a "condição logica" for verdadeira (==1). Quando esta é falsa (==0) pula-se para a "declaração" seguinte ao laço. O teste da "condição logica" é executado antes de entrar no laço. Portanto se a condição for falsa(==0) no primeiro teste a "declaração" ou "declarações" que estão dentro do laço não serão executadas nenhuma vez.  

O formato geral quando se tem uma única declaração é:  

    while (condição)  
    declaração;  

O formato geral quando se tem mais de uma declaração é:  

    while (condição)  
        {  
        declaração;  
        declaração;  
        }  

Assim como no "for", o comando while" sem a condição lógica gera um "loop infinito", pois este será sempre verdade.  

O formato geral é:

    while (1)  
    {  
    declaração;  
    }  


#### Comando DO - WHILE
Este comando é semelhante ao anterior. A diferença é que a "declaração" ou "declarações" são executadas pelo menos uma vez e depois é avaliada a "condição logica", pois a "condição" está no final do loop (após o while). Se a "condição" for verdadeira (==1) a "declaração" ou "declarações" são executadas novamente. Se a "condição logica" for falsa(==0) a execução do programa continua na "declaração" seguinte ao loop.   

É necessário sempre utilizar "{" e "}" entre o "do" e o "while", tanto para uma como para mais declarações. Não existe loop infinito.  

O formato geral é:

    do  
    {  
    declaração;  
    declaração;  
    }while (condição);  

## Funções
Função é um conjunto de instruções e/ou declarações que cumprem determinada tarefa, sendo referenciada por um nome. A principal razão para usar funções é dividir uma tarefa em outras pequenas tarefas que simplificam, organizam e reduzem o programa como um todo. Qualquer sequência de instruções ou declarações que apareçam no programa mais de uma vez é candidata a se transformar em uma função. A função é escrita no programa uma única, mas pode ser executado muitas vezes durante o programa.

### Formato de uma função em C
A estrutura de uma função na linguagem C é semelhante à estrutura da função main(). A única diferença é que a função main() tem um nome especial.

O formato de uma função em C é:

<tipo_de_retorno> <nome_da_funcao> (<parâmetros ou informações e seus tipos>)
{
  declaração de variáveis;
  comandos;
  funções;
  retorno da função;
}

● tipo_de_retorno 🡪 É o tipo do dado que a função retornará;
● nome_da_funcao 🡪 É o nome pelo qual a função será chamada;
● parâmetros ou informações ou lista de argumentos 🡪São as informações que a função recebe para executar a tarefa definida;
● declaração de variáveis 🡪 Declaração dos tipos das variáveis locais a função e que são utilizados apenas dentro nesta;
● comandos 🡪 São os comandos da linguagem C que executam as tarefas definidas para a função;
● funções 🡪 São chamadas para funções de biblioteca e/ou outras funções desenvolvidas pelo programador;
● retorno da função 🡪 Retorna uma informação para a função que chamou.


### Chamando uma função
Chamar uma função é desviar o fluxo do programa para que uma tarefa seja executada. Terminada esta tarefa chamada, o fluxo do programa retorna para a declaração seguinte a da chamada da função.  
Varias funções, como o printf(), são desenvolvidas pelo fabricante do compilador e juntadas ao programa pelo linkeditor. São as chamadas funções de biblioteca.  
Podemos também escrever nossas próprias funções no programa e chama-las como fazemos com as funções de biblioteca.

A sintaxe para chamar uma função é:  

        <nome_da_funcao>(<parâmetros ou informações>);  

Exemplo:  
  printf("teste");  chama a função de biblioteca "printf" e passa a informação "teste".  

  soma(a,b);   chama a função "soma" e passa as informações "a" e "b".  

  imprimir();  chama a função "imprimir" sem passar parâmetros.  


### Passagem de parâmetros ou informações
Parâmetros ou informações ou argumentos de uma função são as informações que a função recebe para executar a tarefa para a qual foi desenvolvida.  

Existem dois métodos de passagem de parâmetros/informações para uma função.

● O 1º método é a passagem de parâmetros por "valor" ou "copia".

Neste método, na função que chamou é feita uma copia dos valores a serem enviados para a função chamada. Dessa forma os valores originais não podem ser alterados, pois a função chamada manipula apenas as copias dos mesmos. Na função chamada são criadas variáveis do mesmo tipo da função que chamou que receberão as copias destes valores.  
Lembrando que as variáveis que recebem as informações da função que chamou e as que estão dentro da função chamada são variáveis locais. Portanto, quando a execução da função se encerrar as variáveis são destruídas ou seja, o seu conteúdo é perdido.  

### Retorno de informação de uma função
Uma função chamada pode retornar UM ou nenhum valor a função que a chamou. Para retornar um valor a função que chamou utiliza-se o comando "return".

O formato geral é: 
  return(informação);     retorna o valor  
  return();                     não retorna valor  
  return;                      não retorna valor  
             
A utilização do comando "return" é opcional quando não há retorno de valor.

### Definindo o tipo do valor de retorno
Os valores devolvidos pelo comando "return" são inteiros por default. Quando não existe valor devolvido e a função que chamou estiver esperando algum valor, recebera lixo e ocorrera um erro de logica não detectável pelo compilador.  
As funções podem devolver valores não inteiros. Para isto devemos especificar claramente o "tipo_de_retorno" na função chamada e declarar também este mesmo tipo na função de chamada.  

O formato geral para chamar uma função que retorna um valor inteiro é:  

  <nome_da_função> (parâmetros ou informações);  

Deve-se também declarar o tipo da informação retornada na função que chamou junto com as variáveis locais desta.  

O formato geral é:                         Exemplo:  
  <tipo> <nome_da_funcao>();                  float soma();  

Lembrando que o formato para se declarar uma variável simples é:  
  <tipo> <nome_da_variável>;  
Exemplo:  
  float número;  

Note que a declaração do tipo de "retorno da função" é semelhante à declaração de uma variável simples.  

O formato geral para declarar uma função que retorna um valor diferente de inteiro é:  
  <tipo_de_retorno> <nome_da_funcao>(parâmetros ou informações);  

Exemplo:  
      float soma(a,b)  
    	 {  
     	 }  


## Matrizes ou Vetores Numéricos

#### Compreendendo o que são matrizes ou vetores
Uma matriz ou vetor é um conjunto de dados que pode armazenar múltiplos valores do mesmo tipo. Os valores de um vetor são acessados através de um índice. Este índice é que caracteriza uma matriz ou vetor.

#### Definição
Matrizes ou vetores são variáveis compostas que agrupam dados do mesmo tipo e são referenciadas através de um índice.

Na linguagem C, todos os vetores são montados numa sequencia continua de memoria, ou seja, o endereço mais baixo corresponde ao primeiro elemento, e o endereço mais alto ao ultimo elemento.

### Declaração de vetores
Para declarar um vetor, precisa-se especificar o tipo de dado desejado (tal como int, float ou double), bem como o tamanho/nº de elementos do vetor. Para especificar o tamanho, utiliza-se o operador "[]". Dentro dos colchetes coloca-se o nº de elementos que o vetor irá armazenar.

O formato para declaração de um vetor é:  

      <tipo> <nome_variável> [tamanho ou n. de elementos];  
onde:  
● tipo 🡪 define o tipo de dado dos elementos do vetor (int, float,...);  
● nome_variável 🡪 é o nome pelo qual o vetor vai ser referenciado;  
● tamanho 🡪 é o nº de elementos que o vetor irá armazenar.  

Exemplo:  
int notas [100];    declara um vetor de nome "notas" do tipo "int" que pode  
                                              armazenar "100" notas  

float salários [50];  declara um vetor de nome "salários" do tipo    
                                "float"que pode armazenar "50" salários  


Detalhe importante: na linguagem C NÃO há verificação de limites nos vetores. Isto significa que é possível ultrapassar o fim de um vetor e escrever em outras variáveis, ou mesmo em trechos de código de programa. É tarefa de o programador fazer com que os índices dos vetores estejam sempre dentro dos limites estabelecidos pela declaração do tamanho ou n. de elementos do vetor.  

### Refenciando um elemento do vetor
Cada um dos elementos de um vetor é referenciado individualmente por meio de um número inteiro (índice) entre colchetes "[]" após o nome do vetor. Este número tem 2 significados diferentes:  

1. Na declaração do vetor ele indica o "tamanho ou n. de elementos";  
2. Para acessar um elemento no vetor, ou seja referencia-lo, ele é chamado
de "índice do elemento";  

Quando referenciamos um elemento do vetor através do seu índice, este número especifica a posição do elemento no vetor.  

Exemplos:  
notas [4];                  referência o 5º elemento do vetor "notas"  
salários [13];             referência o 14º elemento do vetor "salários"  

Observando os exemplos acima podemos notar que o nº do elemento é um a mais que o número entre colchetes. Isso acontece por que na linguagem C as referências/índices começam em 0 e a referência/índice do ultimo elemento é o tamanho do vetor +1.  

Exemplo:  
int valores[] = {10,20,30}  

Valor | Nº do elemento | Índice  
10           1             0
20           2             1
30           3             2

### Inicialização de vetores
Pode-se inicializar os elementos de um vetor junto com a declaração da variável.   Para inicializar os elementos um vetor temos 2 formas:  

1. Declarando o nº de elementos do vetor explicitamente.  

exemplo: int notas [4] = {1,2,3,4};  

2. Sem declarar o nº de elementos do vetor. Neste caso, os colchetes serão preenchido pelo pre-compilador que contara o nº de elementos da inicialização. Os colchetes "[]" são declarados vazios neste caso.  

Exemplo: int notas [] = {1,2,3,4};  

Um vetor só pode ser inicializado se for declarado como uma variável global
ou static local.  

### Vetores com mais de uma dimensão
Um vetor é uma variável que pode armazenar múltiplos valores do mesmo tipo. Nos exemplos apresentados, os vetores consistiram de uma fileira de dados, ou seja, um vetor unidimensional. No entanto, a Linguagem C permite vetores bi, tri e multidimensionais.  

O melhor modo de visualizar um vetor bidimensional é como uma tabela com linhas e colunas. Por exemplo, ao declarar-se um vetor bidimensional, o primeiro valor que for especificado informará o número de linhas, e o segundo valor, o número de colunas:  

Exemplo:  
int tabela [2] [3]; vetor bidimensional (linha 2 coluna 3)    
           lin col    
Se um vetor contem três dimensões, visualize-se como varias paginas, cada uma contendo uma tabela bidimensional.  

Por exemplo, ao declarar-se um vetor tridimensional, o primeiro valor declarado informará a pagina, o segundo valor declarado informará o número de linhas, e o terceiro valor, o número de colunas:  

Exemplo:  
int tabela [2] [3] [4]; vetor tridimensional (pagina 2 linha 3 coluna 4)  
           pag lin col  

      Página 0			         	Página 1					  
	      	   colunas	      		         colunas  
	         0  1  2  3			           0  1  2  3  
	      0	|_||_||_||_|         		0 |_||_||_||_|  
      	  1 |_||_||_||_|	            1 |_||_||_||_|  linhas
	      2	|_||_||_||_|                2 |_||_||_||_|  

OBS IMPORTANTE: Apesar da linguagem C utilizar o conceito de "vetor multi-dimensional" os elementos destes vetores são armazenados na memoria de forma linear (continua), ou seja, todos os elementos do vetor estão um do lado do outro na memória do computador. Isso possibilita acessar os elementos do vetor multidimensionais como se fossem vetores unidimensionais.
