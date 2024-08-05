#include<stdlib.h>
#include<locale.h>
#define ex14


    #ifdef ex14

    main()
    {
    /*14. Receba três números que representam os lados de um triângulo e garantam a existência de um triângulo. Informe ao usuário se o triângulo é isóscele, equilátero ou escaleno.
        a. Garantir que cada lado é menor que a soma dos outros dois lados.
        b. O triângulo é equilátero quando todos os lados são iguais.
        c. O triângulo é isóscele quando apenas dois lados são iguais.
        d. O triângulo é escaleno quando todos os lados são diferentes. */
    setlocale(LC_ALL,"");
    float lado1,lado2,lado3;
    int continuar;

    do
    {
    do
    {
    printf("Digite três números que representam os lados de um triângulo\n");
    scanf("%f %f %f",&lado1,&lado2,&lado3);
    if(lado1>=(lado2+lado3)|| lado2>=(lado1+lado3) || lado3>=(lado1+lado2))
    {
    printf("A soma de dois lados precisa ser maior que ao terceiro! Digite novos valores\n");
    }
    }while(lado1>=(lado2+lado3) || lado2>=(lado1+lado3) || lado3>=(lado1+lado2));
    if(lado1==lado2==lado3)
    {
    printf("O triângulo é equilátero pois possui todos os lados iguals\n");
    }
    else if((lado1==lado2 && lado2!=lado3) || (lado1==lado3 && lado3!=lado2) || (lado2==lado1 && lado1!=lado3) || (lado2==lado3 && lado3!=lado1) || (lado3==lado1 && lado1!=lado2) || (lado3==lado2 && lado2!=lado1))
    {
    printf("O triângulo é isáceles pois possui apenas dois lados iguals\n");
    }
    else if(lado1!=lado2 && lado1!=lado3 && lado2!=lado3)
    {
    printf("O triângulo é ecaleno pois possui todos os lados distintos\n");
    }
    printf("Deseja continuar? 1 para SIM e 2 para NÃO\n");
    scanf("%d",&continuar);
    if(continuar==1)
    {
    return main();
    }
    }while(continuar==1);
    system("pause");
    system("cls");
    }

    #endif // ex14




    #include<stdio.h>
    #ifdef ex18

    main()
    {
    //18.  . Elabore um algoritmo que leia o peso e a altura de um adulto e mostre sua condição de acordo com as condições abaixo: A fórmula é IMC = peso/(altura)^2

    setlocale(LC_ALL, "");
    float peso,altura,IMC;
    int continuar;

    do
    {
    do
    {
    printf("Digite sua altura\n");
    scanf("%f",&altura);
    if(altura<=0 || altura>=3)
    {
    printf("Altura inválida! O valor precisa ser entre 0 e 3\n");
    }
    }while(altura<=0 || altura>=3);
    do
    {
    printf("Digite seu peso\n",peso);
    scanf("%f",&peso);
    if(peso<5 || peso>595)
    {
    printf("Peso inválido! O valor precisa ser entre 5 e 595\n");
    }
    }while(peso<5 || peso>595);
    IMC=(peso/(altura*altura));
    if(IMC<17)
    {
    printf("De acordo com o critério da Organização Mundial de Saúde, o Índice de Massa Corporal (IMC), que indica se o indivíduo esta com peso ideal ou em excesso, a sua condição é muito abaixo do peso\n");
    }else if(IMC>=17 && IMC<=18.49)
    {
    printf("De acordo com o critério da Organização Mundial de Saúde, o Índice de Massa Corporal (IMC), que indica se o indivíduo esta com peso ideal ou em excesso, a sua condição é abaixo do peso\n");
    }else if(IMC>=18.5 && IMC<=24.99)
    {
    printf("De acordo com o critério da Organização Mundial de Saúde, o Índice de Massa Corporal (IMC), que indica se o indivíduo esta com peso ideal ou em excesso, a sua condição é peso normal\n");
    }else if(IMC>=25 && IMC<=29.99)
    {
    printf("De acordo com o critério da Organização Mundial de Saúde, o Índice de Massa Corporal (IMC), que indica se o indivíduo esta com peso ideal ou em excesso, a sua condição é acima do peso\n");
    }else if(IMC>=30 && IMC<=34.99)
    {
    printf("De acordo com o critério da Organização Mundial de Saúde, o Índice de Massa Corporal (IMC), que indica se o indivíduo esta com peso ideal ou em excesso, a sua condição é obesidade I\n");
    }else if(IMC>=35 && IMC<=39.99)
    {
    printf("De acordo com o critério da Organização Mundial de Saúde, o Índice de Massa Corporal (IMC), que indica se o indivíduo esta com peso ideal ou em excesso, a sua condição é obesidade II (severa)\n");
    }else
    {
    printf("De acordo com o critério da Organização Mundial de Saúde, o Índice de Massa Corporal (IMC), que indica se o indivíduo esta com peso ideal ou em excesso, a sua condição é obesidade III (morbida)\n");
    }
    printf("Deseja continuar? 1 para SIM e 2 para NÃO\n");
    scanf("%d",&continuar);
    if(continuar==1)
    {
    return main();
    }
    }while(continuar==1);
    system("pause");
    system("cls");
    }

    #endif // ex18




    #include<stdio.h>
    #ifdef ex20

    main()
    {
    setlocale(LC_ALL, "");
    int idade,continuar;
    char sexo;
    float salario,c;

    do
    {
    do
    {
    printf("Digite a idade de um(a) funcionário(a)\n");
    scanf("%i",&idade);
    if(idade<18 || idade>65)
    {
    printf("Idade inválida! Digite um valor entre 18 e 65\n");
    }
    }while(idade<18 || idade>65);
    do
    {
    printf("Digite o sexo do(a) funcionário(a)(1 para masculino e 2 para feminino)\n");
    scanf(" %c",&sexo);
    if(sexo!='1' && sexo!='2')
    {
    printf("Sexo inválido! Digite 1 para masculino ou 2 para feminino\n");
    }
    }while(sexo!='1' && sexo!='2');
    do
    {
    printf("Digite o salário fixo do(a) funcionário(a)\n");
    scanf("%f",&salario);
    if(salario<=0)
    {
    printf("Salário inválido! Digite um valor maior que zero\n");
    }
    }while(salario<=0);
    if(sexo=1 && idade>=30)
    {
    printf("O salário do funcionário do sexo masculino, de %d anos, com acréscimo do abono é de %2.f\n",idade,(salario+200.00));
    }
    else if(sexo=1 && idade<30)
    {
    printf("O salário do funcionário do sexo masculino, de %d anos, com acréscimo do abono é de %2.f\n",idade,(salario+120.00));
    }
    else if(sexo=2 && idade>=30)
    {
    printf("O salário da funcionário do sexo feminino, de %d anos, com acréscimo do abono é de %2.f\n",idade,(salario+220.00));
    }
    else if(sexo=2 && idade<30)
    {
    printf("O salário da funcionário do sexo feminino, de %d anos, com acréscimo do abono é de %2.f\n",idade,(salario+130.00));
    }
    printf("Deseja continuar? 1 para SIM e 2 para NÃO\n");
    scanf("%d",&continuar);
    if(continuar==1)
    {
    return main();
    }
    }while(continuar==1);
    system("pause");
    system("cls");
    }


    #endif //ex20