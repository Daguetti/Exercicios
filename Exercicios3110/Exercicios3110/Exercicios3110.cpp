// Exercicios3110.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <math.h>

/*void Exercicio2() {
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
}*/

int main()
{
	//Exercicio2();
	//Exercicio4();
	//Exercicio5();
	//Exercicio6();
	//Exercicio8();
	//Exercicio10();
	//Exercicio19();
	//Exercicio23();
		/*Exercicio 24
		float *n1, *n2;
		float p = 0, q = 0;
		n1 = &p;
		n2 = &q;
		printf("Digite o primeiro numero: \n");
		scanf_s("%f", &p);
		printf("Digite o segundo numero: \n");
		scanf_s("%f", &q);
		Exercicio24(n1, n2);*/
	//Exercicio25();
	Exercicio26();

	system("pause");
	
	return 0;
}

