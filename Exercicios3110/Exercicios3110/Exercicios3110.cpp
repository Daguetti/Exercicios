// Exercicios3110.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <ctype.h>
#include <conio.h>

using namespace std;

/*void Exercicio1(){
	int x1, x2, y1, y2, p1, p2, d, x;
	
	printf("Informe quatro numeros:\n");
	printf("D = Raiz de: (X2 - X1)*2 + (Y2 - Y1)*2\n");
		
	printf("x1: ");
	scanf("%i", &x1);
	printf("y1: ");
	scanf("%i", &y1);
	printf("x2: ");
	scanf("%i", &x2);
	printf("y2: ");
	scanf("%i", &y2);
	
	p1 = (x2 - x1) * (x2 - x1);
	p2 = (y2 - y1) * (y2 - y1);
	d = p1 + p2;
	x = sqrt(d);
	
	printf("Resultado: %i\n", x);
}

void Exercicio2() {
	int A, B, C = 0;
	printf("Digite um numero inteiro: \n");
	scanf_s("%i", &A);
	printf("Digite um numero inteiro: \n");
	scanf_s("%i", &B);
	printf("Digite um numero inteiro: \n");
	scanf_s("%i", &C);
	int R = (A + B) * (A + B);
	int S = (B + C) * (B + C);
	int D = (R + S) / 2;
	printf("\nResultado: %i\n\n", D);
}

void Exercicio3() {
	int idade, mes, dia;

	printf("Favor digitar sua idade em anos: \n");
	scanf_s("%i", &idade);

	mes = (idade * 12);
	dia = (mes * 30);

	printf("Voce tem %i anos ou %i meses ou %i dias de vida, parabens xD \n", idade, mes, dia);
}

void Exercicio4() {
	float n1, n2, n3 = 0;
	printf("Digite sua primeira nota: \n");
	scanf_s("%f", &n1);
	printf("Digite sua segunda nota: \n");
	scanf_s("%f", &n2);
	printf("Digite sua terceira nota: \n");
	scanf_s("%f", &n3);
	n1 = n1 * 2;
	n2 = n2 * 3;
	n3 = n3 * 5;
	float media = (n1 + n2 + n3) / 10;
	printf("Sua media eh: %.2f\n\n", media);
}

void Exercicio5() {
	float valor = 0;
	printf("Qual o valor de fabrica do carro?(Utilize ponto '.' para separar os centavos) \n");
	scanf_s("%f", &valor);
	float distribuidor = valor * 0.28;
	float impostos = valor * 0.45;
	float total = (valor + distribuidor) + impostos;
	printf("\nValor do carro para o consumidor: %.2f\n\n", total);
}

void Exercicio6() {
	int n = 0;
	printf("Digite um valor inteiro: \n");
	scanf_s("%i", &n);
	int soma = 0;
	for (int i = 0; i <= n; i++) {
		soma += i; //soma = soma + i;
		//printf("%i", soma);
	}
	printf("%i", soma);
}

void Exercicio7() {
	int a, b;
	printf("Digite o valor de A \n");
	scanf_s("%i", &a);
	printf("Digite o valor de B \n");
	scanf_s("%i", &b);

	if ((a > b) && ((a % b) == 0))
	{
		printf("Os numeros sao multiplos \n");

	}
	else
	{
		printf("Os numeros NAO nao multiplos \n");
	}
}

void Exercicio8() {
	int id = 0;
	printf("Informe sua idade: \n");
	scanf_s("%i", &id);

	if (id >= 5 && id <= 7) {
		printf("Categoria 'INFANTIL A'\n\n");
	}
	else if (id >= 8 && id <= 10) {
		printf("Categoria 'INFANTIL B'\n\n");
	}
	else if (id >= 11 && id <= 13) {
		printf("Categoria 'JUVENIL A'\n\n");
	}
	else if (id >= 14 && id <= 17) {
		printf("Categoria 'JUVENIL B\n\n");
	}
	else if (id >= 18) {
		printf("Categoria 'ADULTO'\n\n");
	}
	else {
		printf("Nao apto");
	}
}

void Exercicio9() {

	int n1, n2, n3;

	printf("Digite nota 1: \n");
	scanf_s("%i", &n1);
	printf("Digite nota 2: \n");
	scanf_s("%i", &n2);
	printf("Digite nota 3: \n");
	scanf_s("%i", &n3);

	int op;
	float med;

	printf("Digite a opcao desejada para media \n 1 - Aritmetica \n 2 - Ponderada (3,3,4) \n 3 - Harmonica \n ");
	scanf_s("%i", &op);

		if (op == 1) {
			med = ((n1 + n2 + n3) / 3);
		} else if (op == 2) {
			med = (((n1 * 3) + (n2 * 3) + (n3 * 4)) / 10);
		} else if (op == 3) {
			med = (((1 / n1) + (1 / n2) + (1 / n3)) / 3);
		} else {
			printf("Opcao invalida\n");
		}
	printf("Media: %f \n", med);
}

void Exercicio10() {
	int cod = 0;
	printf("Insira o codigo do produto: \n\n Refri -- Cod.1001\n Nescau - Cod.1324\n Agua --- Cod.6548\n Arroz -- Cod.987\n Leite -- Cod.7623\n\n");
	scanf_s("%i", &cod);
	int quant = 0;
	printf("\nInsira a quantidade do produto que deseja comprar: \n\n");
	scanf_s("%i", &quant);
	int cod1 = 
	if (cod = 1001) {
		float total = 5.32 * quant;
		printf("Sua compra deu: %f", total);
	}
	else if (cod = 1324) {
		float total = 6.45 * quant;
		printf("\nSua compra deu: %f\n", total);
	}
	else if (cod = 6548) {
		float total = 2.37 * quant;
		printf("\nSua compra deu: %f\n", total);
	}
	else if (cod = 987) {
		float total = 5.32 * quant;
		printf("\nSua compra deu: %f\n", total);
	}
	else if (cod = 7623) {
		float total = 6.45 * quant;
		printf("\nSua compra deu: %f\n", total);
	}
	else {
		printf("\nCodigo Invalido\n");
	}
}

void Exercicio11() {

	float r;

	printf("Digite o valor do raio: \n");
	scanf_s("%f", &r);

	float area;
	float pi = 3.14159;
	area = pi * (pow(r, 2));
	printf("A area do raio %.2f eh : %f \n", r, area);
}

void Exercicio12() {

	float base, altura;

	printf("Digite o valor da Base do triangulo: \n");
	scanf_s("%f", &base);
	printf("Digite o valor da altura do triangulo: \n");
	scanf_s("%f", &altura);

	float area;
	area = ((base + altura) / 2);
	printf("A area do triangulo base %.2f de altura %.2f eh: %.2f \n", base, altura, area);
}

void Exercicio13() {

	int a;

	printf("Digite o numero: ");
	scanf_s("%i", &a);

	int i = 0;
	int impar = 1;

	printf("Os %i primeiros impares sao: \n", a);

	while (i < a)
	{
		printf("%i \t", impar);
		impar = impar + 2;
		i++;
	}
	printf("\n");
}

void Exercicio14() {

	printf(" XXXXX \n X   X \n X   X \n X   X \n XXXXX \n");
}

void Exercicio15() {

	int x, n;

	printf("Digite um valor inteiro e nao negativo: \n");
	scanf_s("%i", &x);
	printf("Digite um valor inteiro e nao negativo: \n");
	scanf_s("%i", &n);

	int cal;
	cal = pow(x, n);

	printf("O calculo de %i ^ %i = %i \n", x, n, cal);
}

bool Exercicio16(char vet[], char letra) {
	for (int i = 0; i < strlen(vet); i++)
	{
		if (tolower(vet[i]) == tolower(letra))
		{
			printf("Letra encontrada, indicie: %i \n", i + 1);

			return true;
		}
	}

	return false;
}

void Exercicio17() {

	printf("        X \n");
	printf("       XXX \n");
	printf("      XXXXX \n");
	printf("     XXXXXXX \n");
	printf("    XXXXXXXXX \n");
	printf("   XXXXXXXXXXX \n");
	printf("  XXXXXXXXXXXXX \n");
	printf(" XXXXXXXXXXXXXXX \n");
	printf("       XX \n");
	printf("       XX \n");
	printf("      XXXX \n");
}

void Exercicio18() {

	int i;
	int num;
	int j;

	printf("Digite um valor de 2 a 20: \n");
	scanf_s("%i", &num);

	while ((num < 2) || (num >20)) {
		printf("Numero invalido! Favor Digitar novamente valor entre 2 e 20:");
		scanf_s("%i", &num);
	}

	for (i = 1; i <= num; i++) {
		for (j = 1; j <= i; j++)
			printf("%i", j);
			printf("\n");
	} for (i = i - 2; i > 0; i--) {
		for (j = 1; j <= i; j++)
			printf("%i", j);
		printf("\n");
	}
	printf("\n");
}

void Exercicio19()
{
	int mat[2][3], i, j, l, f, c, resl[3], resc[2];
	printf("Informe todos os valores para a matriz:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Linha: %i, Coluna: %i\n", i, j);
			scanf_s("%i", &mat[i][j]);
		}
	}
	printf("Qual linha quer multiplicar?");
	scanf_s("%i", &l);
	printf("Qual o fator multiplicador?");
	scanf_s("%i", &f);
	for (i = 0; i < 3; i++)
		resl[i] = mat[l][i] * f;
	printf("\nOs valores resultantes foram:\t");
	for (i = 0; i < 3; i++)
		printf("%i\t", resl[i]);
	printf("\n\nQual coluna quer multiplicar?");
	scanf_s("%i", &c);
	printf("Qual o fator multiplicador?");
	scanf_s("%i", &f);
	for (i = 0; i < 2; i++)
		resc[i] = mat[i][c] * f;
	printf("\nOs valores resultantes foram:\t");
	for (i = 0; i < 2; i++)
		printf("%i\t", resc[i]);
	printf("\n\n");
}

void Exercicio20(int matriz[2][2], int i, int j) {
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			matriz[i][j] = abs(matriz[i][j]);
		}
	}
	printf("Matriz positiva \n");

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%i", matriz[i][j]);
		}
		printf(" \n");
	}
}

int Exercicio21(int vetor[4]) {

	int i;
	int total = 0;
	for (i = 0; i < 5; i++) {
		if ((vetor[i] % 2) == 0) {
			total = total + vetor[i];
		}
	}
	return total;
}

void Exercicio22() {

	int matriz[3][3];
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Digite o valor da linha %i Coluna %i: ", i + 1, j + 1);
			scanf_s("%i", &matriz[i][j]);
		}
	}

	printf("Matriz \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%i | ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("Matriz Transposta \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%i | ", matriz[j][i]);
		}
		printf("\n");
	}
}

void Exercicio23()
{
	int km = 12;
	int tempo, velocidade, distancia, litros;
	printf("Digite o tempo gasto na viagem em minutos: \n");
	scanf_s("%i", &tempo);
	printf("Digite a velocidade media durante a viagem em km/h: \n");
	scanf_s("%i", &velocidade);
	distancia = (tempo * velocidade);
	litros = (distancia) / km;
	printf("Voce andou a %i km/h em %i minutos, distancia: %i metros e gastou %i litros.\n", velocidade, tempo, distancia, litros);
}

void Exercicio24(float *a, float *b) {
	float temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("Numero 1 = %.2f \nNumero 2 = %.2f \n\n", *a, *b);
}

void Exercicio25() {
	float salbruto, salprev, saliq, res1, res2 = 0;
	printf("Digite o salario bruto: \n");
	scanf_s("%f", &salbruto);
	salprev = (salbruto) * 0.1;
	res1 = salprev - salbruto;
	saliq = (salprev) * 0.05;
	res2 = saliq - res1;
	printf("Salario bruto: %f \n Salario liquido: %f \n", salbruto, res2);
}

void Exercicio26() {
	int anos, res = 0;
	printf("Digite sua idade em anos: \n");
	scanf_s("%i", &anos);
	res = (anos) * 365;
	printf("Sua idade de anos em dias eh: %i\n", res);
}

void Exercicio27() {

	int vcom, vpag;

	printf("Digite o valor da compra: \n");
	scanf_s("%i", &vcom);
	printf("Digite o valor entregue em dinheiro: \n");
	scanf_s("%i", &vpag);

	int troco = vpag - vcom;
	int nota100 = 0;
	int nota10 = 0;
	int nota1 = 0;

	if (troco > 0) {
		nota100 = (troco - (troco % 100)) / 100;
		nota10 = (troco % 100) / 10;
		nota1 = (troco % 10);

		printf("Notas de 100 : %i \nNotas de 10 : %i \nNotas de 1: %i \n", nota100, nota10, nota1);
	} else {
		printf("Faltando valor em dinheiro! \n");
	}
}

void Exercicio28() {

	int salario, quant_carros = 0, valorcarro = 0, comporcarro = 0, porcporcarro = 0, i;

	printf("Digite a quantidade de carros que foram vendido no mes: \n");
	scanf_s("%i", &quant_carros);

	salario = 937 * 2;

	printf("Verificacao do valor dos carros vendidos\n");

	for (i = 0; i < quant_carros; i++) {
		printf("Digite o valor do %i carro : \n", i + 1);
		scanf_s("%i", &valorcarro);

		porcporcarro = porcporcarro + (valorcarro * 0.05);
		comporcarro = comporcarro + 50;
		valorcarro = 0;
	}

	int valortotal = porcporcarro + comporcarro;

	printf("Seu salario com comissao eh: R$ %i \n", valortotal + salario);
}

void Exercicio29() {

	int x, y, z;

	printf("Digite o valor de X. \n");
	scanf_s("%i", &x);

	printf("Digite o valor de Y. \n");
	scanf_s("%i", &y);

	printf("Digite o valor de Z. \n");
	scanf_s("%i", &z);

	int soma = x + y + z;

	if (x < soma && y < soma && z < soma) {
		if (x == y && x == z && y == z) {
			printf("Triangulo equilatero. \n");
		} else if (x == y || y == z) {
			printf("Triangulo isoscele. \n");
		} else if (x != y || x != z) {
			printf("Triangulo escaleno. \n");
		} else {
			printf("Nao pode ser um triangulo. \n");
		}
	}
}

void Exercicio30() {

	int n;
	int num = 0;
	int j = 0, i = 0, k = 0;

	printf("Digite valor de 2 a 20. \n");
	scanf_s("%i", &n);

	while ((n < 2) || (n > 20))
	{
		printf("Numero Incorreto, favor digitar um numero entre 2 e 20. \n");
		scanf_s("%i", &n);
	}

	for (i = 0; i < n; i++) {
		k = 1;
		for (j = 0; j < n; j++) {
			if (j <i) {
				printf("X");
			} else {
				printf("%i", k);
				k = k + 1;
			}
		}
		printf("\n");
	}
}

void Exercicio31() {
	int num[5], i = 0, count = 0;

	for (int i = 0; i < 5; i++) {
		printf("Digite o valor do numero %i\n", i + 1);
		scanf_s("%i", &num[i]);

		if (num[i] < 0) {
			count++;
		}
	}
	printf("Numeros negativos: %i\n", count);
}

void Exercicio32() {

	printf("Pesquisa de Habitantes\n");

	float salario = 1;
	float filho = 0;
	float medsal = 0;
	float medfil = 0;
	float maiorsal = 0;
	float percsal100 = 0;
	float contsal = 0;
	int	contfil = 0;
	float cont = 0;
	float contsal100 = 0;

	while (salario > 0) {
		printf("Favor digitar o seu salario (Digite um valor negativo para sair ou apresentar as estatisticas!): \n");
		scanf_s("%f", &salario);

		if (salario < 0) {
			break;
			system("cls");
		}

		printf("Favor digitar o numero de filhos: \n");
		scanf_s("%f", &filho);

		medsal = medsal + salario;
		contsal = contsal + 1;

		medfil = medfil + filho;
		contfil = contfil + 1;

		if (salario > maiorsal) {
			maiorsal = salario;
		}

		if (salario < 100) {
			contsal100 = contsal100 + 1;
		}

		cont = cont + 1;
		printf("\n");
		printf("Valores armazenados: \n");
		system("pause");
		system("cls");
	}
	percsal100 = (100 * contsal100) / cont;

	printf("Media de salario da populacao: R$ %.2f\n", medsal / contsal);
	printf("Media do numero de filhos: %.0f \n", medfil / contfil);
	printf("Maior salario: R$ %.2f \n", maiorsal);
	printf("Percentual de pessoas com salario ate R$ 100: %.0f % \n", percsal100);
}

void Exercicio33() {

	float chico = 1.50;
	float ze = 1.10;
	int cont = 0;

	while (ze < chico)
	{
		ze = ze + 0.03;
		chico = chico + 0.02;
		cont = cont + 1;
	}
	printf("Ze tera %.2f e chico tera %.2f com %i anos \n", ze, chico, cont);
}

void Exercicio34() {

	int num = 0;
	int i;
	int maiorv = 0;
	int menorv = 99999999;
	//i<3 para teste
	for (i = 0; i < 3; i++) {
		printf("Digite o %i º valor: ", i + 1);
		scanf_s("%i", &num);
		printf("\n");

		if (num > maiorv) {
			maiorv = num;
		} if (num < menorv) {
			menorv = num;
		}
	}
	printf("Maior valor eh: %i \nMenor valor eh: %i \n", maiorv, menorv);
}

void Exercicio35() {

	int idade = 1;
	int maioridade = 0;
	int cont = 0;
	int opsexo, opcabelo, opolhos = 0;
	printf("Digite idade -1 para encerrar\n");

	while (idade > 0) {
		printf("Digite sua idade: \n");
		scanf_s("%i", &idade);

		if (idade < 0) {
			break;
			system("cls");
		}

		printf("Sexo \n1-Masculino \n2-Feminino \nDigite: \n");
		scanf_s("%i", &opsexo);

		printf("Cor dos olhos \n1-azuis \n2-verdes \n3-castanhos \nDigite: \n");
		scanf_s("%i", &opolhos);

		printf("Cor do cabelo \n1-louros \n2-castanhos \n3-pretos \nDigite: \n");
		scanf_s("%i", &opcabelo);

		if (idade > maioridade) {
			maioridade = idade;
		} if ((opsexo == 2) && (18 >= idade) && (idade <= 35) && (opolhos == 2) && (opcabelo == 1)) {
			cont = cont++;
		}

		printf("Dado armazenado \n");
		system("pause");
		system("cls");

	}
	printf("A maior idade eh: %i \nA quantidade de mulheres de idade 18 a 35 de olhos verdes e cablos louros eh: %i \n", maioridade, cont);
}

void Exercicio36() {

	int num[20];
	int i;

	for (i = 0; i < 20; i++) {
		printf("Digite o %i numero :", i + 1);
		scanf_s("%i", &num[i]);
	}

	for (i = 0; i < 20; i++) {
		printf("%i x %i = %i \n", i + 1, num[i], (i + 1)* num[i]);
	}
}

void Exercicio37() {

	int dia1, mes1, ano1, dia2, mes2, ano2, ddia, dmes, dano;

	struct data
	{
		int dia;
		int mes;
		int ano;
	};

	struct data prim;
	struct data seg;

	printf("Digite a primeira data: \n");
	printf("Dia: \n");
	scanf_s("%i", &dia1);
	printf("Mes: \n");
	scanf_s("%i", &mes1);
	printf("Ano: \n");
	scanf_s("%i", &ano1);

	printf("Digite a segunda data: \n");
	printf("Dia: \n");
	scanf_s("%i", &dia2);
	printf("Mes: \n");
	scanf_s("%i", &mes2);
	printf("Ano: \n");
	scanf_s("%i", &ano2);

		prim.dia = dia1;
		prim.mes = mes1;
		prim.ano = ano1;

		seg.dia = dia2;
		seg.mes = mes2;
		seg.ano = ano2;

		ddia = prim.dia - seg.dia;
		dmes = prim.mes - seg.mes;
		dano = prim.ano - seg.ano;

	printf("A diferença entre as datas: \n");
	printf("Dias: %i\n", ddia);
	printf("Meses: %i\n", dmes);
	printf("Anos: %i\n", dano);
}

void Exercicio38() {

	struct horario
	{
		int hora;
		int min;
	};

	int min = 0;
	printf("Digite um intervalo de tempo em minutos\n");
	scanf_s("%i", &min);

	struct horario A;
	A.hora = min / 60;
	A.min = min % 60;

	printf("%i horas e %i minutos\n", A.hora, A.min);
}

void Exercicio40() {

	int quant = 0, cod, total;

	while (quant != -1) {
		printf("Informe a quantidade vendida (-1 p/ sair): \n");
		scanf_s("%i", &quant);

		printf("Informe o codigo do produto: \n 1001 \t1324 \t6548 \t987 \t7623");
		scanf_s("%i", &cod);

		if (cod = 1001) {
			total = quant * 5.32;
			printf("Total a pagar: %i \n", total);
		} else if (cod = 1324) {
			total = quant * 6.45;
			printf("Total a pagar: %i \n", total);
		} else if (cod = 6548) {
			total = quant * 2.37;
			printf("Total a pagar: %i \n", total);
		} else if (cod = 987) {
			total = quant * 5.32;
			printf("Total a pagar: %i \n", total);
		} else if (cod = 7623) {
			total = quant * 6.45;
			printf("Total a pagar: %i \n", total);
		}
	}
}*/

int main()
{
	//Exercicio1();
	//Exercicio2();
	//Exercicio3();
	//Exercicio4();
	//Exercicio5();
	//Exercicio6();
	//Exercicio7();
	//Exercicio8();
	//Exercicio9();
	//Exercicio10();
	//Exercicio11();
	//Exercicio12();
	//Exercicio13();
	//Exercicio14();
	//Exercicio15();

		//Exercicio16
			/*char texto[30];
			char letra;

			printf("Digite uma palavra. \n");
			cin >> texto;

			printf("Digite a letra que deseja buscar. \n");
			cin >> letra;

			if (Exercicio16(texto, letra))
			{
				printf("Letra encontrada \n");
			}
			else
			{
				printf("Letra nao encontrada. \n");
			}*/

	//Exercicio17();
	//Exercicio18();
	//Exercicio19();

		//Exercicio20
			/*int i, j;
			int matriz[2][2];

			for (i = 0; i < 2; i++) {
				for (j = 0; j < 2; j++) {
					matriz[i][j] = ((-i * 2) + (-j * 2));
				}
			} for (i = 0; i < 2; i++) {
				for (j = 0; j < 2; j++) {
					printf("%i", matriz[i][j]);
				}
				printf(" \n");
			}

			Exercicio20(matriz, i, j);*/

		//Exercicio21
			/*int vet[4];
			int i;

			for (i = 0; i < 5; i++)
			{
				printf("Digite o %i numero : ", i + 1);
				scanf_s("%i", &vet[i]);
			}

			int total = Exercicio21(vet);
			printf("A soma dos numeros pares eh: %i \n", total);*/

	//Exercicio22();
	//Exercicio23();

		//Exercicio 24
			/*float *n1, *n2;
			float p = 0, q = 0;
			n1 = &p;
			n2 = &q;
			printf("Digite o primeiro numero: \n");
			scanf_s("%f", &p);
			printf("Digite o segundo numero: \n");
			scanf_s("%f", &q);
			Exercicio24(n1, n2);*/

	//Exercicio25();
	//Exercicio26();
	//Exercicio27();
	//Exercicio28();
	//Exercicio29();
	//Exercicio30();
	//Exercicio31();
	//Exercicio32();
	//Exercicio33();
	//Exercicio34();
	//Exercicio35();
	//Exercicio36();
	//Exercicio37();
	//Exercicio38();
	//Exercicio40();

	system("pause");
	
	return 0;
}