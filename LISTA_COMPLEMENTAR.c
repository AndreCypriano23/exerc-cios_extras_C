#define ex1
#include <stdio.h>


#ifdef ex1
//1.	Escrever um algoritmo que leia dois valores inteiros distintos e informe qual é o maior.
main(){
int A,B;

 do{
 printf("\nDigite dois valores inteiros distintos: ");
 scanf("%d",&A);
 scanf("%d",&B);
   if(B==A)
   {printf("\n Numeros invalidos");}
   }while(B==A);

   if(A>B)
   printf("O primeiro numero e maior que o segundo \n");
   else
    printf("O segundo numero e maior do que o primeiro\n ");



system("pause");
}


#endif // ex1


#ifdef ex2

//2.	Escrever um algoritmo que leia três números quaisquer
// e informe qual é o maior e se eles forem todos igual informe ao usuário e solicite novos dados
main(){
int A,B,C,MAIOR;

do{
printf("Informe tres numeros qualquer distintos ");
scanf("%d",&A);
scanf("%d",&B);
scanf("%d",&C);
if (A==B || B==C || A==C)
{printf("Informe novos dados");}
}while(A==B || B==C || A==C);

if(A>B)
MAIOR=A;
else
MAIOR=B;
if(C>MAIOR)
MAIOR=C;

printf("O maior numero e %d\n",MAIOR);

system("pause");


}






#endif // ex2


#ifdef ex3


//3.	Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpar.
main(){
int A,RESTO;
printf("\n Escreva um numero qualquer: ");
scanf("%d",&A);
RESTO=A % 2;
if(RESTO==0)
printf("O numero e PAR");
else
printf("O numero e IMPAR");




system("pause");


}

#endif // ex3



#ifdef ex4

//4.	Receba três números que representam os lados de um triângulo e garantam a existência de um triângulo.
// Informe ao usuário se o triângulo é isóscele, equilátero ou escaleno.
//Observações: a.	Garantir que cada lado é menor que a soma dos outros dois lados.
//b.	O triângulo é equilátero quando todos os lados são iguais.
//c.	O triângulo é isóscele quando apenas dois lados são iguais.
//d.	O triângulo é escaleno quando todos os lados são diferentes.


main(){
int A,B,C;

do{
printf("\nDigite o primeiro numero do trangulo: ");
scanf("%d",&A);
printf("\nDigite o segundo numero do trangulo: ");
scanf("%d",&B);
printf("\nDigite o terceiro numero do trangulo: ");
scanf("%d",&C);
if(A>=B+C && B>=A+C && C>=A+B)
printf("\nDigite novos dados");
}while(A>=B+C && B>=A+C && C>=A+B);

if(A==B && B==C)
printf("\n O triangulo eh Equilatero ");
else
if(A==B || B==C || A==C)
printf("\n O triangulo e Isoceles ");
else
printf("\n O triangulo e Escaleno");


system("pause");

}

#endif // ex4


#ifdef ex5


main(){
float HORASTRABALHADAS,VSALARIOMINIMO,VALORHORATRABALHADA,SALARIOBRUTO,IMPOSTO,SF;

do{
printf("\nDigite o numero de horas trabalhadas ");
scanf("%f",&HORASTRABALHADAS);
if (HORASTRABALHADAS<0)
printf("\nNumero invalido, digite novamente ");
}while(HORASTRABALHADAS<0);

do{
printf("\nDigite o valor do salario minimo: ");
scanf("%f",&VSALARIOMINIMO);
if (VSALARIOMINIMO<0)
printf("\nNumero invalido, digite novamente ");
}while(VSALARIOMINIMO<0);

VALORHORATRABALHADA=VSALARIOMINIMO/2;
SALARIOBRUTO=HORASTRABALHADAS*VALORHORATRABALHADA;
IMPOSTO=SALARIOBRUTO*0.03;
SF=SALARIOBRUTO-IMPOSTO;

printf("\nO seu salario final eh : %0.2f\n",SF);









system("pause");

}



#endif // ex5






#ifdef ex6

main(){
float HORASTRABALHADAS,VSALARIOMINIMO,VALORHORATRABALHADA,SALARIOBRUTO,IMPOSTO,SF;

do{
printf("\nDigite o numero de horas trabalhadas ");
scanf("%f",&HORASTRABALHADAS);
if (HORASTRABALHADAS<0)
printf("\nNumero invalido, digite novamente ");
}while(HORASTRABALHADAS<0);

do{
printf("\nDigite o valor do salario minimo: ");
scanf("%f",&VSALARIOMINIMO);
if (VSALARIOMINIMO<0)
printf("\nNumero invalido, digite novamente ");
}while(VSALARIOMINIMO<0);

VALORHORATRABALHADA=VSALARIOMINIMO/2;
SALARIOBRUTO=HORASTRABALHADAS*VALORHORATRABALHADA;
IMPOSTO=SALARIOBRUTO*0.03;
SF=SALARIOBRUTO-IMPOSTO;

printf("\nO seu salario final eh : %0.2f\n",SF);









system("pause");

}

#endif // ex6

#ifdef ex7

//7.	Faça um programa que receba a altura e o sexo de uma pessoa e que calcule e mostre o seu peso ideal,
//utilizando as seguintes fórmulas:
//a.	Para homens (72 * h) – 58
//b.	Para mulheres (62,1* h) – 44.7

main (){
float SEXO,ALTURA,PESOIDEAL;

do{
printf("Digite a sua altura: ");
scanf("%f",&ALTURA);
if(ALTURA<0)
{printf("Digite um valor maior que 0: ");}
}while(ALTURA<0);

do{
printf("Qual e o seu sexo? Digite 1 para Masculino e 2 para Feminino:");
scanf("%f",&SEXO);
if(SEXO<1 || SEXO>2)
{printf("Numero invalido, digite novamente: ");}
}while(SEXO<1 || SEXO>2);


if(SEXO==1){
PESOIDEAL=(72*ALTURA)-58;
}
else
{
PESOIDEAL=(62.1*ALTURA)-44.7;
}

printf("O seu PESO IDEAL e %.2f",PESOIDEAL);



system("pause");

}


#endif // ex7



#ifdef ex8
//7.	Faça um programa que receba a altura e o sexo de uma pessoa e que calcule e mostre o seu peso ideal,
//utilizando as seguintes fórmulas:
//a.	Para homens (72 * h) – 58
//b.	Para mulheres (62,1* h) – 44.7

main (){
float SEXO,ALTURA,PESOIDEAL;

do{
printf("Digite a sua altura: ");
scanf("%f",&ALTURA);
if(ALTURA<0)
{printf("Digite um valor maior que 0: ");}
}while(ALTURA<0);

do{
printf("Qual e o seu sexo? Digite 1 para Masculino e 2 para Feminino:");
scanf("%f",&SEXO);
if(SEXO<1 || SEXO>2)
{printf("Numero invalido, digite novamente: ");}
}while(SEXO<1 || SEXO>2);


if(SEXO==1){
PESOIDEAL=(72*ALTURA)-58;
}
else
{
PESOIDEAL=(62.1*ALTURA)-44.7;
}

printf("O seu PESO IDEAL e %.2f",PESOIDEAL);



system("pause");

}



#endif // ex8


#ifdef ex9
//9.	Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir e mostre qual a classificação dessa pessoa.

//Altura	Peso
//	Até 60	Entre 60 e 90(Inclusive)	Acima de 90
//Menores que 1,20	A	D	G
//De 1,20 a 1,70	B	E	H
//Maiores que 1,70	C	F	I

main(){
float A,P;

do{
printf("Digite a sua altura: \n");
scanf("%f",&A);
if(A<=0)
printf("Digite um numero maior do que 0\n");
}while(A<=0);

do{
printf("Digite o seu peso: \n");
scanf("%f",&P);
if(P<=0)
printf("Digite um numero maior do que 0\n");
}while(P<=0);


if(A<1.20)
  if( P<60)
printf("CLASSIFICACAO=A");
else
if( P<90)
printf("CLASSIFICACAO=D");
else
if(A<1.20 && P>90)
printf("CLASSIFICACAO=G");
if(A>=1.20 && A<=1.70 && P<60)
printf("CLASSIFICACAO=B");
else
if(A>=1.20 && A<=1.70 && P<90)
printf("CLASSIFICACAO=E");
else
if(A>=1.20 && A<=1.70 && P>90)
printf("CLASSIFICACAO=H");
else
if(A>1.70 && P<60)
printf("CLASSIFICACAO C");
else
if(A>1.70 && P<90)
printf("CLASSIFICACAO F");
else
if(A>1.70 && P>90)
printf("CLASSIFICACAO I");

}




#endif // ex9

#ifdef ex10

//10.	Faça um algoritmo que receba o a idade, o sexo (1 para masculino e 2 para feminino) e salário fixo de um funcionário. Mostre o sexo, a idade e o salário obtido após o acréscimo do abono:
//Sexo	Idade	Abono
//1-Masculino	>=30
//<30	200,00
//120,00
//2- Feminino	>=30
//<30	220,00
//130,00


main(){
int IDADE,SEXO,SALARIO;

do{
printf("Digite a sua idade: \n");
scanf("%d",&IDADE);
if (IDADE<0)
printf("Digite um numero maior do que 0\n");
}while(IDADE<0);


do{
printf("Digite o seu sexo, 1 para Mascuino e 2 para Feminino: \n");
scanf("%d",&SEXO);
if (SEXO!=1 && SEXO!=2)
{printf("Numero invalido \n");}
}while(SEXO!=1 && SEXO!=2);

do{
printf("Digite o seu salario fixo : \n");
scanf("%d",&SALARIO);
if (SALARIO<0)
{printf("Numero invalido \n");}
}while(SALARIO<0);


if(SEXO==1)
  if( IDADE<30)
   SALARIO=SALARIO+120;
    else
   SALARIO=SALARIO+200;
else
if( IDADE <30)
SALARIO=SALARIO+130;
else

SALARIO=SALARIO+220;

printf("SEXO : %d \n",SEXO);
printf("IDADE : %d \n",IDADE);
printf("Seu salario acrescentado com o ABONO e: %d \n ",SALARIO);
system("pause");
}





#endif // ex10

