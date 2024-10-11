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

### Inicialização de vetores com mais de uma dimensão
Os vetores de mais de uma dimensão são inicializados da mesma forma que os vetores de uma única dimensão. Os elementos são colocados entre o abre chave "{" e o fecha chave "}" depois do operador atribuição "=" e seus elementos separados por vírgulas Pode-se inicializar um vetor multi-dimensional usando as chaves "{}" e a separação dos elementos por vírgulas"," internamente para melhor visualizar as suas linhas e colunas. Esta notação é utilizada para apenas para facilitar a visualização.  

Exemplo:     
           lin    col   
int tabela [2]    [3]   = {{1,2,3} , {4,5,6}};  
          		              linha 1   linha 2  
Esta mesma inicialização poderia ser apenas com um abre chave "{" e um fecha chave "}" simplesmente.  

Exemplo:  
int tabela [2] [3] = {1,2,3,4,5,6};  

## Vetores com Série de Caracteres (string)

### Compreendendo o que são Vetores de série de caracteres
Um vetor de string é uma variável do tipo "char" que armazena mais de um caracter, ou seja, uma série de caracteres, onde cada um destes caracteres ocupa um byte na memoria, um do lado do outro em sequencia.  
Um vetor de string pode ser acessado de 2 formas, caracter por caracter através do "índice" de cada um dos elementos do vetor (como nos vetores numérico), ou como uma string acessando todos os caracteres até encontrar o finalizador.  

### Inicializando um vetor de string
Um vetor de string também só pode ser inicializado se for declarado como variável global ou estática local.   

Podemos inicializar um vetor de strings de 2 formas:  

A) Inicializando caracter por caracter como nos vetores numérico. Neste caso, o finalizador '\0' deve ser colocado explicitamente, para que os elementos deste vetor possam ser utilizados como uma única string. Não colocando o finalizador '\0' não se pode acessar o conteúdo como string apenas caracter por caracter (através do índice).  

Exemplo:  
    char nome [] = {'F','Á,'T','É,'C'};    s/ finalizador. Não pode acessar como string  
    char nome [] = {'F','Á,'T','É,'C','\0'};   c/ finalizador. Pode acessar como string  


B) Inicializando como string. Neste caso o finalizador é colocado automaticamente. Lembrando ainda que o finalizador também é um caracter, portanto ocupa uma posição no vetor.  

Exemplo:  
    char nome [] = {"FATEC"};   sem contar os caracteres da string, o pré compilador faz a contagem  

    char nome [6] = {"FATEC"};   contando os caracteres da string  (5 letras + 1 do finalizador)  


### Funções de biblioteca usando uma string.
● printf() 🡪 escreve caracteres formatados na saída padrão.(no caso vídeo)  

A forma geral da função printf() é:  
          printf("<serie de controle>", lista de argumentos);  

O código de formatação para uma string é "%s". Para string pode-se indicar o "tamanho do campo", informação no campo "alinhando" ou "justificado" (à direita ou à esquerda).  

O formato geral é:  
                     % <alinhamento> <tamanho de campo> <código de formatação>  

Exemplo:  
%10s          define o alinhamento à direita, tamanho de campo com 10 posições  
%-10s         define o alinhamento à esquerda, tamanho de campo com 10 posições  

● scanf() 🡪 lê caracteres formatados da entrada padrão. (no caso teclado)  

A forma geral da função scanf() é:  
              scanf("<serie de controle>", lista de argumentos);  
Temos outras 2 funções de biblioteca que funcionando somente com uma string, são elas:  

● gets() 🡪 lê uma serie de caracteres da entrada padrão (no caso teclado) + a tecla ENTER.  
A forma geral da função gets() é:   
                                  gets(variável);   

● puts() 🡪 escreve uma serie de caracteres na saída padrão.(no caso vídeo)  
A forma geral da função puts() é:  
                                puts(variável);  


### Um vetor de strings
Uma string já é um vetor unidimensional. Portanto, se juntarmos vários vetores de strings, teremos um vetor bidimensional.   

A forma geral de um vetor de strings é:  
          char <nome_da_variável> [num_de_strings][compr_das_strings];  

Exemplo:  
char semana [7][14];       vetor bidimensional do tipo "char" com 7 linhas(strings) e  
                                       14 colunas (strings com 14 caracteres no máximo)  

Fazendo uma comparação com a declaração de um vetor numérico:  

int tabela [2][3];             vetor bidimensional do tipo "int" de nome "tabela" com
                                                           2 linha e 3 coluna  

Obs:  
Nos 2 casos as declarações são exatamente iguais. A diferença está na forma de interpretá-las. O 1º exemplo usa caracteres e o 2º exemplo usa números.  


### Acessando uma string no vetor de strings
Para acessar uma string usa-se apenas o primeiro índice do vetor que indica o "numero da string".  

A forma geral para acessar uma string no vetor de strings é:  
                        <nome_da_variável> [num_da_strings];  

Exemplo:  
semana [2];      acessa a 3º linha (string) do vetor "semana"  

Por que se utiliza apenas o índice de "linha"/"numero da string" para acessar uma string num vetor bidimensional?  
Porque as funções de bibliotecas printf (usando o código de formatação "%s") e puts colocam na tela todos os elementos de um vetor de caracteres (string) até encontrar o finalizador '\0'. Isto possibilita utilizar apenas o índice do "num_da_string" "linha" para acessar todo o conteúdo desta linha do vetor de caracteres.  

Além disso, como os vetores numérico também se pode acessar qualquer caracter de um vetor de string utilizando-se os dois índices. Um vetor de string não é diferente de um vetor numérico.  

Exemplo:  

vetor de string  
semana [0] [2];      acessa o elemento da 1º linha(string), 3º coluna (caracter)  
             lin col  

vetor numérico  
tabela [0] [2];      acessa o número da 1º linha, 3º Coluna  
             lin col  


### Inicialização de um vetor de strings
Um vetor de strings é um vetor bidimensional. Assim, para inicializa-lo coloca-se o operador atribuição "=", o abre chave “{“, as strings entre aspas ("), separadas por vírgula "," e o fecha chave “}”.  

Exemplo:  
char semana [7] [14] = { "Domingo" ,  
                                 "Segunda-feira",  
                                 "Terca-feira",  
                                 "Quarta-feira",  
                                 "Quinta-feira",  
                                 "Sexta-feira",  
                                 "Sabado",};  

## Operadores 
Operador é um símbolo que representa uma operação especifica que pode ser executada em certo dado. O valor do dado, que pode ser uma variável ou uma constante é chamado de operando.

### Operador atribuição simples
A atribuição simples de variáveis se faz com o operador sinal de "=". Ele atribui um valor ou resultado de uma expressão, que está a sua direita, para a variável especificada a sua esquerda.  

Sua forma geral é:  
variável = expressão;           ou           variável = constante;  

### Operadores aritméticos
Os operadores aritméticos são aqueles que operam sobre números e/ou expressões numéricas, resultando valores numéricos.

Os operadores aritméticos são:  
    +  🡪 adição  
    -  🡪 subtração  
    *  🡪 multiplicação  
    /  🡪 divisão  
    %  🡪 devolve o resto da divisão inteira (modulo)  
    -  🡪 menos unario (transforma um nº positivo em negativo e vice-versa)  
    ++ 🡪 incrementa  
    -- 🡪 decrementa  

Os operadores incrementa e decrementa são equivalentes as seguintes operações:   
x = x + 1 🡪 ++x  ou x++  
x = x - 1 🡪 --x  ou x--  

Embora as expressões ++x e x++ parecem equivalentes, elas agem de forma diferente em expressões com o operador de atribuição simples "=":  
 
Quando o operador incrementa está "antes" da variável, primeiro se incrementa a variável para depois atribuir o resultado.  

    x = 10;  
    y = ++x;        incrementa x e atribui à y 🡪 x = 11 e y = 11  

Porém, se o operador incrementa está "depois" da variável, primeiro se atribui o valor a variável para depois incrementar o conteúdo da variável atribuída.   

    x = 10;  
    y = x++;      atribui x à y e incrementa x 🡪 x = 11 e y = 10  

### Operadores relacionais
Relacional significa o relacionamento que os valores tem entre si. Quando se compara 2 valores utilizando-se os operadores relacionais, obtém-se os seguintes resultados:  
0  🡪 falso  
1  🡪 verdadeiro  

Os operadores relacionais são:  

    <  🡪 menor que  
    <= 🡪 menor ou igual a  
    >  🡪 maior que  
    >= 🡪 maior ou igual a  
    == 🡪 igual  
    != 🡪 diferente  

### Operadores lógicos
Estes operadores são muito utilizados para combinar logicamente os resultados (0 ou 1) obtidos pelos operadores relacionais. Ou seja, primeiro se avalia a relação e com este resultado faz-se a operação logica.  

Os operadores lógicos são:  

    && (operação lógica AND) 🡪 retorna 1 se os dois operandos forem verdadeiros  
    || (operação lógica OR) 🡪 retorna 1 se um ou dois operandos forem verdadeiros  
    !  (operador lógico NOT) 🡪 inverte o valor do operando  


### Operadores bit-a-bit
Os operadores bit-a-bit são recursos que a linguagem C possui que a torna próxima da linguagem de maquina. Estes operadores atuam combinando as operações logica diretamente nos bits de um ou dois byte.  

Os operadores bit-a-bit são:  

● &  (AND) 🡪 retorna 1 se os dois operandos forem verdadeiros  
● |  (OU) 🡪 retorna 1 se um ou dois operandos forem verdadeiros  
● ^ (OU EXCLUSIVO) 🡪 retorna 1 se os operandos forem ≠ entre si  
● ~  (NOT) 🡪 inverte o operando  
● >> (deslocamento para direita) 🡪 desloca para a direita e preenche a esquerda com zeros. Equivale a / 2  
● << (deslocamento para esquerda) 🡪 desloca para a esquerda e preenche a direita com zeros. Equivale a * 2  

Exemplo:  
main()  
{  
int a,b;  
a = 0x64; /* notação hexadecimal*/   /* 100 = 0110 0100 */    
b = 0x32;               /* 50  = 0011 0010 */    

printf(" Operadores bit-a-bit\n");  
printf(" AND                 a & b --> %3d  0x%x\n",a & b,a & b); /* 0x20 */  
printf(" OU                  a | b --> %3d  0x%x\n",a | b,a | b); /* 0x76 */  
printf(" OU EXCLUSIVO        a ^ b --> %3d  0x%x\n",a ^ b,a ^ b); /* 0x56 */  
printf(" NOT               ~0x2264 -->      0x%x\n",~0x2264);     /* dd9b */  
printf(" desloc. a direita  a >> 3 --> %3d  0x%x\n",a>>3,a>>3);   /* 0x0c */  
printf(" desloc. a esquerda a << 1 --> %3d  0x%x\n",a<<1,a<<1);   /* 0xc8 */  
}  


### Atribuição composta
A atribuição composta é muito utilizada para abreviar expressões na linguagem C. É uma combinação do operador atribuição simples "=" com os operadores aritméticos e bit a bit.  

Sua forma geral é  
           variável  operador= expressão;  

Os operadores de atribuição compostas são:  

        +=  operação adição e atribuição  
        -=  operação subtração e atribuição  
        *=  operação multiplicação e atribuição  
        /=  operação divisão e atribuição  
        %=  operação resto(modulo) e atribuição  
        >>= operação deslocamento à direita e atribuição  
        <<= operação deslocamento à esquerda e atribuição  
        &=  operação AND e atribuição  
        ^=  operação OU EXCLUSIVO e atribuição  
        |=  operação OU e atribuição  

### Operadores de ponteiros
Os operadores de ponteiros são:  
*operador de conteúdo🡪 lê o conteúdo de uma variável apontado por um ponteiro  
&operador de endereço🡪 atribui o endereço de um tipo de dado a um ponteiro  

### Operadores diversos
Os operadores diversos são:  
(  ) operador parênteses     determina a prioridade das operações  
[  ] operador colchetes     define o tamanho do vetor ou seu índice  
-> ponteiro_variável -> nome_membro     obtém-se o conteúdo de um membro de estrutura  
.  nome_variável . nome_membro     obtém-se o conteúdo de um membro de uma estrutura  

O operador "sizeof" retorna a quantidade de bytes que a variável ocupa na memoria. O operando pode ser um dado composto (vetor ou estrutura) ou simples (int, char, etc...). O formato geral é:  
sizeof(nome da variável)      calcula o número de bytes da variável  


### Tabela de prioridades dos operadores
-Maior prioridade-  
1 -  (  ) operador parênteses: determina a prioridade das operações  
     [  ] operador colchetes: indexação de vetores  
     ->   ponteiro_variável -> nome_membro  
     .    nome_variável . nome_membro  
2 -  !  operador logico NOT  
     ~  operador bit-a-bit NOT    
     ++ incremento de 1    
     -- decremento de 1  
     -  menos unário (transforma um n. positivo em negativo e vice-versa)  
     *  operador de conteúdo (lê o conteúdo apontado por um apontador)  
     &  operador de endereço (atribui o endereço de um tipo de dados)  
     sizeof(nome da variável) -->determina o tamanho em bytes da variável  
3 -  *   multiplicação  
     /   divisão  
     %   devolve o resto da divisão inteiro (modulo)  
4 -  +   adição  
     -   subtração  
5 -  >> deslocamento para direita
     << deslocamento para esquerda  
6 -  <  menor que  
     <= menor ou igual a  
     >  maior que  
     >= maior ou igual a  
7 -  == igual  
     != diferente  
8 -  &  operador bit a bit AND  
9 -  ^  operador bit a bit OU EXCLUSIVO  
10 - |  operador bit a bit OU          
11 - && operação  logica AND  
12 - || operação logica OR  
13 - ?: substitui a declaração if else  
14 - =  operação de atribuição  
     += operação soma e atribuição  
     -= operação subtração e atribuição  
     *= operação multiplicação e atribuição  
     /= operação divisão e atribuição  
     %= operação resto e atribuição  
     >>= operação deslocamento à direita e atribuição  
     <<= operação deslocamento à esquerda e atribuição  
     &= operação AND e atribuição  
     ^= operação OU EXCLUSIVO e atribuição  
     |= operação OU e atribuição  
15 - , usado no for para colocar varias condições  
-Menor prioridade-  


## Estrutura de Dados

### Definição
Estrutura é uma variável composta, formada por uma ou mais variáveis, possivelmente de tipos diferentes, colocadas juntas sob um único nome.  

Quando se declara uma estrutura de dados criamos um tipo de variável composta onde os membros são definidos pelo usuário. Assim, podemos dizer que estamos criando um "novo tipo de variável". Isso porque o usuário tem total flexibilidade para declarar qualquer tipo de variável como "membro" da estrutura juntando-o para uma finalidade especifica.  

### Declaração de estruturas
O formato geral para a declaração de um estrutura é:  

struct <nome_estrutura>  
    {        chave de abertura da estrutura  

    membros;  

    };      chave de fechamento da estrutura  

Na declaração da estrutura de dados temos a palavra reservada "struct" mais o "nome da estrutura" que define o "novo tipo da variável" criada pelo usuário. Na declaração dos "membros" da estrutura define-se as variáveis, que podem ser do tipo char, int , float, long, vetor, estrutura, etc.., que irao compor este "novo tipo de variável".  

Quando a estrutura de dados é declarada, ainda não foi criada a variável propriamente dita (reservado espaço em memoria). Fazendo uma analogia com a declaração das variáveis simples:  

Declarando uma variável simples:  
          <tipo> <nome_variável>;  

Declarando uma variável composta do tipo estrutura de dados:  
          struct <nome da estrutura> <nome da variável>;  
                          (tipo)  
Exemplo:  

- variável simples  
       int notas;     variável do tipo "int" de nome "notas"  
      
- variável do tipo estrutura de dados  

struct tipos        "novo tipo de variável" definida pelo usuário  
    {  
    int a;  
    float b;  
    long c;  
    };  
struct tipos números;      variável do tipo "struct tipos" de nome "números"  

### Referência aos membros de uma estrutura
Para referenciar um "membro" da estrutura de dados usamos o operador ponto (.) no seguinte formato:  
        <nome_variável>.<membro>;  

Exemplo: 
    números.a  
    números.b  
    números.c  


### Inicialização de estruturas de dados
Assim como nos vetores, uma estrutura de dados só pode ser inicializada se declarada como uma variável global ou static local.
Porem se a inicialização  for elemento por elemento, a declaração da variável pode ser local. Exemplos:  
1.  
/* declaração do tipo de variável */  
struct data {int dia;int mes;int ano;};    /* membros */  


/* declaração da variável como global. Por isso pode ser inicializada */  
struct data calendário = {7,9,1822};  


main()  
{  
}    
.----------------------------------------------------------------------------.  
2.  
/* declaração do tipo de variável */  
struct data {int dia;int mes;int ano;};    /* membros */  

main()  
{  
/* declaração da variável como estática local. Por isso pode ser inicializada */  
static struct data calendário = {15,11,1889};  
}  
.----------------------------------------------------------------------------.  
3.  
/* declaração do tipo de variável */  
struct data {int dia;int mes;int ano;};    /* membros */  

main()  
{  
/* declaração da variável como local porem sem inicialização  */  
struct data calendário;  

calendario.dia=26;       /*inicialização  elemento por elemento */  
calendario.mes=1;  
calendario.ano=1839;  
}  

### Estruturas dentro de estruturas
Uma estrutura dentro de outra estrutura é uma variável composta dentro de outra variável composta.  
Para acessar os "membros" de uma estrutura de dados dentro de outra estrutura de dados usa-se o operador ponto(.), partindo-se da variável mais externa para a variável mais interna:  

<nome_variável>.<nome_variável>.<membro>;  
                                      estruct externa          estruct interna  

Para se inicializar uma estrutura de dados dentro de outra estrutura de dados é preciso ser global ou static local.  

### Vetores como variável dentro de uma estruturas de dados
Uma estrutura pode ser composta por variáveis simples (int, float, long, ...) e variáveis compostas (vetores, estruturas). Neste caso, pode-se declarar um vetor como "membro" de uma estrutura. O formato para declarar um vetor como "membro" de uma estrutura é o mesmo.


### Vetor de estruturas de dados
Como já estudamos, um vetor se caracteriza por ter todos os seus elementos do mesmo tipo e acessar estes elementos por um índice. Com estrutura de dados não é diferente.  

Fazendo analogia com um vetor, ele é composto por variáveis simples do tipo int, float long,... Na declaração de um vetor onde cada elemento é uma estrutura de dados nada muda, pois todos os elementos continuam sendo do mesmo tipo. O detalhe está no tipo da variável que neste caso é definida pelo usuário através da declaração de uma estrutura de dados.  

Para declarar um vetor de estruturas de dados, deve-se primeiro definir a estrutura com seus "membros", "novo tipo de variável", e depois declarar um vetor deste tipo.  

Aqui também para referenciar "membros" em um vetor de estrutura usa-se o "nome da variável" mais o "índice" do elemento do vetor e o operador ponto(.) para acessar o "membro" da estrutura de dados no seguinte formato:  

                    <nome_variável>[<n. do elemento>].<membro>;  

### Typedef
A Linguagem C permite definir explicitamente "novos nomes" para os tipos de dados existentes usando-se a palavra reservada "typedef". Não se cria um novo tipo de variável, e sim se define um "novo nome" para um tipo que existem. O "typedef" também auxilia na documentação do programa permitindo definir nomes que descrevam melhor os tipos de dados padrões ou definidos pelo usuário (estruturas).  

O formato geral é:  
      typedef <tipo da variável> <novo nome do tipo da variável>;  

Exemplo:  
   typedef int inteiro;  
   typedef float flutuante;  
  
## Ponteiros ou Apontadores

### Como funcionam os ponteiros?
Ponteiro é uma variável que, diferentemente das outras, não contem o valor de um dado, mas aponta para o endereço de outra variável que o contem.  

Quando você anota o endereço de um colega você está criando um ponteiro. O ponteiro é o pedaço de papel que tem anotado o endereço. Quando você anota o endereço de um colega, depois você vai usar este endereço para achá-lo. Na linguagem C funciona assim. Você anota o endereço de uma variável num ponteiro para depois usa-la.  

Um ponteiro também tem tipo: o endereço de um amigo é diferente de do endereço de uma empresa. Apesar dos dois endereços terem o mesmo formato (rua, bairro, cidade) eles indicam locais de conteúdos diferentes. Então os dois endereços são ponteiros de tipos diferentes.  
                          p                                f  
                          --------------------------------->  
                          |                                |  
        -------------------------------------------------------------------  
    ....| xxx | xxx | 308 |    ......    | xxx | xxx | ´i´ | xxx | ....  
        -------------------------------------------------------------------  
             $100  $101  $102                 $306  $307  $308  $309  

Na figura acima, "p" é um ponteiro para a variável "f'. Ou seja, "p" contem o endereço de memoria onde está armazenada a variável "f".  
