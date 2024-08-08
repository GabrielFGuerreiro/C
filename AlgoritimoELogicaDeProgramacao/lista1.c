#include<stdio.h>
#define ex1

#ifdef ex1


main()
{//1. Ler um número inteiro e imprimir seu sucessor e seu antecessor.
int a;
printf("Digite um numero qualquer\n");
scanf("%d",&a);
printf("O antecessor e o sucessor desse numero sao, respectivamente, %d e %d", a-1,a+1);
}
#endif // ex1


#ifdef ex2
main()
{
//2. Receber um valor qualquer do teclado e imprimir esse valor com reajuste de 10%.

int a,b;
printf("Digite um valor qualquer\n");
scanf("%d",&a);
b==(a+(a*0.10));
printf("Esse valor com acrescimo de 10%% e %d",b);
}
#endif // ex2


#ifdef ex3
main()
{
    //3. Informar um preço de um produto e calcular novo preço com desconto de 9%.
    float a;
    do
    {
    printf("Digite o valor do produto\n");
    scanf("%f",&a);
    if(a<=0)
    {
    printf("Valor invalido! Digite um numero maior que zero\n");
    }
    } while(a<=0);
    printf("O valor do produto com desconto de 9%% e %2.f",a-(a*0.09));
}

#endif // ex3


#ifdef ex4
main()
{
    //4. Cálculo de um salário líquido de um professor. Serão fornecidos valor da hora aula, número de aulas dadas e o % de desconto do INSS.
    float hora,descon;
    int numaulas;
    do
    {
    printf("Digite o valor por hora de aula\n");
    scanf("%f",&hora);
    if(hora<=0)
    {
        printf("Valor invalido! Digite um valor maior que zero\n");
    }
    }while(hora<=0);
    do
    {
    printf("Digite a quantidade de aulas dadas\n");
    scanf("%f",&numaulas);
    if(numaulas<=0)
    {
        printf("Valor invalido! Digite um valor maior que zero\n");
    }
    }while(numaulas<=0);
    do
    {
    printf("Digite o valor do desconto do INSS\n");
    scanf("%f",&descon);
    if(descon<0 || descon>1)
    {
        printf("Valor invalido! Digite um valor entre 0 e 1\n");
    }
    }while(descon<0 || descon>1);
    printf("O salario liquido do professor e %f\n",(hora*descon*numaulas));
}
#endif // ex4


#ifdef ex5
main()
{
    //5. Ler uma temperatura em graus Celsius e transformá-la em graus Fahrenheit.
    int celsi;
    printf("Digite o valor correspondente de uma temperatura em graus Celsius\n");
    scanf("%d",&celsi);
    printf("A temperatura, em Fahrenheit, equivale a %2.f \n",(celsi*1.8+32));
}
#endif // ex5


#ifdef ex6
main()
{
    /* 6. Faça um programa que receba o ano do nascimento de uma pessoa e o ano atual, calcule e mostre:
        a. A idade dessa pessoa
        b. Quantos anos essa pessoa terá em no ano atual.
        c. Quantos dias ela viverá até o ano atual.*/
        int nasci, atual, dias;
    printf("Digite o ano de nascimento de uma pessoa e o ano atual\n");
    scanf("%d %d",&nasci,&atual);
    do
    {
    if(nasci>=atual)
    {
    printf("A data de nascimento precisa ser menor que a atual!\n");
    }
    }while(nasci>=atual);
    printf("Essa pessoa tem %d anos de idade\n",atual-nasci);
    printf("Essa pessoa viveu por %d dias ate o ano atual",(atual-nasci)*(365));
}
    #endif //ex6


#ifdef ex7

main()
{
/*7. O custo ao consumidor de um carro novo é a soma do preço da fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos. Calcule e mostre:

        a. O valor correspondente ao lucro do distribuidor
        b. O valor correspondente aos impostos
        c. O preço final do veículo */

    float precofab,percentlucro,percentimpost,valorlucro,valorimpost;
    do
    {
    printf("Digite o valor do preco da fabrica do veiculo\n");
    scanf("%f",&precofab);
    if(precofab<=0)
    {
    printf("Valor invalido! Digite um numero maior que zero\n");
    }
    }while(precofab<=0);
    do
    {
    printf("Digite a porcentagem do lucro do distribuidor\n");
    scanf("%f",&percentlucro);
    if(percentlucro<=0 || percentlucro>1)
    {
    printf("Valor invalido! Digite um numero entre 0 e 1\n");
    }
    }while(percentlucro<=0 || percentlucro>1);
    do
    {
    printf("Digite a porcentagem dos impostos\n");
    scanf("%f",&percentimpost);
    if(percentimpost>=1 || percentimpost<=0)
    {
    printf("Valor invalido! Digite um numero entre 0 e 1\n");
    }
    }while(percentimpost<0 && percentimpost>1);
    valorlucro=(precofab*percentlucro);
    valorimpost=(precofab*percentimpost);
    printf("O valor correspondente ao lucro do distribuidor e de %2.f\n",valorlucro);
    printf("O valor correspondete aos impostos e de %2.f\n",valorimpost);
    printf("O valor correspondente ao preço final do veiculo e de %2.f\n",precofab+valorlucro+valorimpost);
    }
    #endif //ex7



#ifdef ex8

main()
{
    //8. Elabore um programa que receba o salário de um funcionário e calcule o reajuste desse salário. Considere que o funcionário deve receber um reajuste de 15% caso seu salário seja menor que 800 reais. Se o salário for maior ou igual a 800 e menor ou igual a 1000, seu reajuste será de 10 %; caso seja maior que 1000, o reajuste deve ser de 5%. Ao final do programa deve apresentar o valor antigo e o novo salário.
    float salario;
    do
    {
    printf("Digite o salario de um funcionario\n");
    scanf("%f",&salario);
    if(salario<=0)
    {
    printf("Valor invalido! Digite um salario maior que zero\n");
    }
    }while(salario<=0);
    if(salario<800)
    {
    printf("O novo salario com reajuste de 15%% e %2.f\n",(salario+salario*0.015));
    }
    else if(salario>=800 && salario<=1000)
    {
    printf("O novo salario com reajuste de 10%% e %2.f\n",(salario+salario*0.010));
    }
    else if (salario>1000)
    {
    printf("O novo salario com reajuste de 5%% e %2.f\n",(salario+salario*0.005));
    }
    }
    #endif //ex8


#ifdef ex9
main()
{
    //9. Leia quatro valores referentes às notas escolares de um aluno e exiba uma mensagem dizendo que ele foi aprovado se a média for maior ou igual a 6. Caso contrário informe que ele está reprovado. Apresente junto à mensagem o valor da média obtida pelo aluno independente de ter sido aprovado ou não. As notas deverão ser maiores ou iguais a zero e menores ou iguais a dez.
    int nota1,nota2,nota3,nota4;
    float media;
    do
    {
    printf("Digite a primeira nota do aluno\n");
    scanf("%d",&nota1);
    if(nota1<0 || nota1>10)
    {
    printf("Nota invalida! Digite um valor de 0 a 10\n");
    }
    }while(nota1<0 || nota1>10);
    do
    {
    printf("Digite a segunda nota do aluno\n");
    scanf("%d",&nota2);
    if(nota2<0 || nota2>10)
    {
    printf("Nota invalida! Digite um valor de 0 a 10\n");
    }
    }while(nota2<0 || nota2>10);
    do
    {
    printf("Digite a terceira nota do aluno\n");
    scanf("%d",&nota3);
    if(nota3<0 || nota3>10)
    {
    printf("Nota invalida! Digite um valor de 0 a 10\n");
    }
    }while(nota3<0 || nota3>10);
    do
    {
    printf("Digite a quarta nota do aluno\n");
    scanf("%d",&nota4);
    if(nota4<0 || nota4>10)
    {
    printf("Nota invalida! Digite um valor de 0 a 10\n");
    }
    }while(nota4<0 || nota4>10);
    media=((nota1+nota2+nota3+nota4)/4);
    if(media<=6)
    {
    printf("Aluno reprovado com media de %f\n",media);
    }else
    {
    printf("Aluno aprovado com media de %f\n",media);
    }
    }
    #endif // ex9



#ifdef ex10
main()
{
    float num1,num2,num3,num4,result;
    do
    {
    do
    {
    printf("Digite o valor do primeiro numero\n");
    scanf("%f",&num1);
    if(num1<=10 || num1>=25)
    {
    printf("Valor invalido! Digite um numero entre 10 e 25\n");
    }
    }while(num1<=10 || num1>=25);
    do
    {
    printf("Digite o valor do segundo numero\n");
    scanf("%f",&num2);
    if(num2<0)
    {
    printf("Valor invalido! Digite um numero maior que zero\n");
    }
    }while(num2<0);
    num3=(num1+num2);
    printf("O terceiro numero e %2.f\n",num3);
    num4=(num1*num2*num3);
    printf("O quarto numero e %2.f\n",num4);
    result=(pow(num1,2)+pow(num2,2)+pow(num3,2)+pow(num4,2));
    printf("A soma dos quadrados dos quatro numeros e %2.f\n",result);
    if(result<50000)
    {
    printf("Resultado menor que 50000. Novos dados necessarios!\n");
    }
    }while(result<50000);
    }
    #endif //ex10


#ifdef ex11
main()
{
    //11. Escrever um algoritmo que receba dois números e informe ao usuário se eles são iguais ou se são distintos. Se forem distintos informe qual é o maior.
    double num1,num2;
    printf("Digite dois numeros quaisquer\n");
    scanf("%lf %lf",&num1,&num2);
    if(num1==num2)
    {
    printf("Os numeros sao iguais\n");
    }
    else if (num1!=num2)
    {
    printf ("Os numeros sao distintos\n");
    if(num1>num2)
    {
    printf("O numero %2.lf e maior quer o numero %2.lf\n", num1,num2);
    }
    else
    {
    printf("O numero %2.lf e maior quer o numero %2.lf\n", num2,num1);
    }
    }
    }
    #endif // ex11


    #ifdef ex12

    main()
    {
    //12. Escrever um algoritmo que leia três números quaisquer e informe qual é o maior e se eles forem todos igual informe ao usuário e solicite novos dados.
    double num1,num2,num3;

    do
    {
    printf("Digite tres numeros quaisquer\n");
    scanf("%lf %lf %lf",&num1,&num2,&num3);
    if(num1==num2 && num1==num3 && num2==num3)
    {
    printf("Os numeros nao podem ser iguais! Digite novos valores\n");
    }
    }while(num1==num2 && num1==num3 && num2==num3);
    if(num1>num2 && num1>num3)
    {
    printf("O numero %2.lf e o maior entre os tres\n",num1);
    }
    else if(num2>num1 && num2>num3)
    {
    printf("O numero %2.lf e o maior entre os tres\n",num2);
    }
    else if(num3>num1 && num3>num1)
    {
    printf("O numero %2.lf e o maior entre os tres\n",num3);
    }
    }

    #endif // ex12



    #ifdef ex13

    main()
    {
    //13. Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpa
    int num,resto;

    printf("Digite um numero qualquer\n");
    scanf("%d",&num);
    resto = (num % 2);
    if(resto==0)
    {
    printf("O numero e par\n");
    }
    else
    {
    printf("O numero e impar\n");
    }
    }

    #endif // ex12


    #ifdef ex14

    main()
    {
    /*14. Receba três números que representam os lados de um triângulo e garantam a existência de um triângulo. Informe ao usuário se o triângulo é isóscele, equilátero ou escaleno.
        a. Garantir que cada lado é menor que a soma dos outros dois lados.
        b. O triângulo é equilátero quando todos os lados são iguais.
        c. O triângulo é isóscele quando apenas dois lados são iguais.
        d. O triângulo é escaleno quando todos os lados são diferentes. */
    float lado1,lado2,lado3;
    do
    {
    printf("Digite tres numeros que representam os lados de um triangulo\n");
    scanf("%f %f %f",&lado1,&lado2,&lado3);
    if(lado1==(lado2+lado3)|| lado2==(lado1+lado3) || lado3==(lado1+lado2))
    {
    printf("A soma de dois lados nao pode ser igual ao terceiro! Digite novos valores\n");
    }
    }while(lado1==(lado2+lado3) || lado2==(lado1+lado3) || lado3==(lado1+lado2));
    if(lado1==lado2==lado3)
    {
    printf("O triangulo e equilatero pois possui todos os lados iguals\n");
    }
    else if((lado1==lado2 && lado2!=lado3) || (lado1==lado3 && lado3!=lado2) || (lado2==lado1 && lado1!=lado3) || (lado2==lado3 && lado3!=lado1) || (lado3==lado1 && lado1!=lado2) || (lado3==lado2 && lado2!=lado1))
    {
    printf("O triangulo e isoceles pois possui apenas dois lados iguals\n");
    }
    else if(lado1!=lado2 && lado1!=lado3 && lado2!=lado3)
    {
    printf("O triangulo e ecaleno pois possui todos os lados distintos\n");
    }
    }

    #endif // ex14


    #ifdef ex15

    main()
    {
    /*15.Faça um programa que receba o número de horas trabalhadas e o valor do salario mínimo. Calcule e mostre o salário a receber seguindo as regras abaixo
        a)a hora trabalhada vale a metade do salário mínimo;
        b)o salário bruto equivale ao número de horas trabalhadas multiplicado pela valor da hora trabalhada;
        c)o imposto equivale a 3% do salário bruto;
        d)o salário a receber equivale ao salário bruto menos o imposto. */

    float numhoras, salariomin,valorhora,salariobrut,impost;

    do
    {
    printf("Digite o numero de horas trabalhadas e o valor do salario minimo\n");
    scanf("%f %f",&numhoras,&salariomin);
    if(numhoras<=0 || salariomin<=0)
    {
    printf("O valores precisam ser maiores que zero!\n");
    }
    }while(numhoras<=0 || salariomin<=0);
    valorhora=(salariomin/2);
    printf("O valor da hora trabalhada e de %2.f\n",valorhora);
    salariobrut=(numhoras*valorhora);
    printf("O valor do salario bruto e de %2.f\n",salariobrut);
    impost=(salariobrut*0.03);
    printf("O valor do imposto e de %2.f\n",impost);
    printf("O salario a receber e de %2.f\n",salariobrut-impost);
    }

    #endif // ex15



    #ifdef ex16

    main()
    {
    //16.Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura que o usuário deseja subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo, sem se preocupar com a altura do usuário.
    int alturadegrau, alturafinal;

    do
    {
    printf("Digite a altura dos degrais de uma escada e a altura que o usuário deseja subindo a escada\n");
    scanf("%d %d",&alturadegrau,&alturafinal);
    if((alturadegrau<=0 || alturafinal<=0) || (alturafinal<=alturadegrau))
    {
    printf("Os valores precisam ser maiores que zero e a altura desejada maior que a altura dos degrais\n");
    }
    }while((alturadegrau<=0 || alturafinal<=0) || (alturafinal<=alturadegrau));
    printf("O usuario precisa subir %d degraus para atingir essa altura\n",(alturafinal/alturadegrau));

    #endif // ex16



    #ifdef ex17

    /*17. Faça um programa que receba a altura e o sexo de uma pessoa e que calcule e mostre o seu peso ideal, utilizando as seguintes fórmulas:
        a. Para homens (72 * h) – 58
        b. Para mulheres (62,1* h) – 44.7*/
    main()
    {
    char sexo;
    float altura;
    do
    {
    printf("Digite a altura da pessoa\n");
    scanf("%f",&altura);
    if(altura<=0 || altura>=3)
    {
    printf("A altura precisa ser maior que zero e menor quer tres\n");
    }
    }while(altura<=0 || altura>=3);
    do
    {
    printf("Digite o sexo da pessoa (M para masculino ou F para feminino)\n");
    scanf("%c",&sexo);
    if(sexo!='M' && sexo!= 'm' && sexo!= 'F' && sexo!= 'f')
    {
    printf("O sexo precisa ser masculino(M) ou feminino(F)\n");
    }
    }while(sexo!= 'M' && sexo!='m' && sexo!= 'F' && sexo!= 'f');
    if(sexo=='M' || sexo=='m')
    {
    printf("O peso ideal dessa pessoa e %2.f\n",(72*altura)-58);
    }
    else
    {
    printf("O peso ideal dessa pessoa e %2.f\n",(62.1*altura)-44.7);
    }
    }


    #endif // ex17



    #ifdef ex18

    main()
    {
    //18.  . Elabore um algoritmo que leia o peso e a altura de um adulto e mostre sua condição de acordo com as condições abaixo: A fórmula é IMC = peso/(altura)^2

    float peso,altura,IMC;
    do
    {
    printf("Digite sua altura\n");
    scanf("%f",&altura);
    if(altura<=0 || altura>=3)
    {
    printf("Altura invalida! O valor precisa ser entre 0 e 3\n");
    }
    }while(altura<=0 || altura>=3);
    do
    {
    printf("Digite seu peso\n",peso);
    scanf("%f",&peso);
    if(peso<5 || peso>595)
    {
    printf("Peso invalido! O valor precisa ser entre 5 e 595\n");
    }
    }while(peso<5 || peso>595);
    IMC=(peso/(altura*altura));
    if(IMC<17)
    {
    printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e muito abaixo do peso\n");
    }else if(IMC>=17 && IMC<=18.49)
    {
    printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e abaixo do peso\n");
    }else if(IMC>=18.5 && IMC<=24.99)
    {
    printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e peso normal\n");
    }else if(IMC>=25 && IMC<=29.99)
    {
    printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e acima do peso\n");
    }else if(IMC>=30 && IMC<=34.99)
    {
    printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e obesidade I\n");
    }else if(IMC>=35 && IMC<=39.99)
    {
    printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e obesidade II (severa)\n");
    }else
    {
    printf("De acordo com o criterio da Organizaçao Mundial de Saude, o Indice de Massa Corporal (IMC), que indica se o individuo esta com peso ideal ou em excesso, a sua condicao e obesidade III (morbida)\n");
    }
    }
    #endif // ex18


    #ifdef ex19
    main()
    {
    float altura,peso;
    do
    {
    printf("Digite a altura de uma pessoa\n");
    scanf("%f",&altura);
    if(altura<=0 || altura>=3)
    {
    printf("Altura invalida! O valor precisa ser entre 0 e 3\n");
    }
    }while(altura<=0 || altura>=3);
    do
    {
    printf("Digite o peso de uma pessoa\n",peso);
    scanf("%f",&peso);
    if(peso<5 || peso>595)
    {
    printf("Peso invalido! O valor precisa ser entre 5 e 595\n");
    }
    }while(peso<5 || peso>595);
    if(altura<1.20 && peso<=60)
    {
    printf("Com a altura de %2.f metros e o peso de %2.f quilos, a sua clacificacao e A\n",altura,peso);
    }
    else if(altura>=1.20 && altura<=1.70 && peso<=60)
    {
    printf("Com a altura de %2.f metros e o peso de %2.f quilos, a sua clacificacao e B\n",altura,peso);
    }
    else if(altura>1.70 && peso<=60)
    {
    printf("Com a altura de %2.f metros e o peso de %2.f quilos, a sua clacificacao e C\n",altura,peso);
    }
    else if(altura<1.20 && peso>60 && peso<=90)
    {
    printf("Com a altura de %2.f metros e o peso de %2.f quilos, a sua clacificacao e D\n",altura,peso);
    }
    else if(altura>=1.20 && altura<=1.70 && peso>60 && peso<=90)
    {
    printf("Com a altura de %2.f metros e o peso de %2.f quilos, a sua clacificacao e E\n",altura,peso);
    }
    else if(altura>1.70 && peso>60 && peso<=90)
    {
    printf("Com a altura de %2.f metros e o peso de %2.f quilos, a sua clacificacao e F\n",altura,peso);
    }
    else if(altura<1.20 && peso>90)
    {
    printf("Com a altura de %2.f metros e o peso de %2.f quilos, a sua clacificacao e G\n",altura,peso);
    }
    else if(altura>=1.20 && altura<=1.70 && peso>90)
    {
    printf("Com a altura de %2.f metros e o peso de %2.f quilos, a sua clacificacao e H\n",altura,peso);
    }
    else if(altura>1.70 && peso>90)
    {
    printf("Com a altura de %2.f metros e o peso de %2.f quilos, a sua clacificacao e I\n",altura,peso);
    }
    }

    #endif // ex19



    #ifdef ex20

    main()
    {
    int idade;
    char sexo;
    float salario;
    do
    {
    printf("Digite a idade de um(a) funcionario(a)\n");
    scanf("%i",&idade);
    if(idade<18 || idade>65)
    {
    printf("Idade invalida! Digite um valor entre 18 e 65\n");
    }
    }while(idade<18 || idade>65);
    do
    {
    printf("Digite o sexo do(a) funcionario(a)(1 para masculino e 2 para feminino)\n");
    scanf(" %c",&sexo);
    if(sexo!='1' && sexo!='2')
    {
    printf("Sexo invalido! Digite 1 para masculino ou 2 para feminino\n");
    }
    }while(sexo!='1' && sexo!='2');
    do
    {
    printf("Digite o salario fixo do(a) funcionario(a)\n");
    scanf("%f",&salario);
    if(salario<=0)
    {
    printf("Salario invalido! Digite um valor maior que zero\n");
    }
    }while(salario<=0);
    if(sexo=1 && idade>=30)
    {
    printf("O salario do funcionario do sexo masculino, de %d anos, com acrescimo do abono e de %2.f\n",idade,(salario+200.00));
    }
    else if(sexo=1 && idade<30)
    {
    printf("O salario do funcionario do sexo masculino, de %d anos, com acrescimo do abono e de %2.f\n",idade,(salario+120.00));
    }
    else if(sexo=2 && idade>=30)
    {
    printf("O salario da funcionaria do sexo feminino, de %d anos, com acrescimo do abono e de %2.f\n",idade,(salario+220.00));
    }
    else if(sexo=2 && idade<30)
    {
    printf("O salario da funcionaria do sexo feminino, de %d anos, com acrescimo do abono e de %2.f\n",idade,(salario+130.00));
    }
    }

    #endif //ex20
