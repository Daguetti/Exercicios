// aula1411.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void Exercicio24(float *a, float *b) {
	float temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("Numero 1 = %.2f \nNumero 2 = %.2f \n\n", *a, *b);
}

/*struct Carro {
	char modelo[30];
	char marca[20];
	int anoFab;
	char cor[20];
	char placa[8];
};

void Ex1(){
	struct Carro opafion;
	printf("Digite o modelo do carro: \n");
	gets_s(opafion.modelo);
	printf("Digite a marca do carro: \n");
	gets_s(opafion.marca);
	printf("Digite a cor do carro: \n");
	gets_s(opafion.cor);
	printf("Digite a placa do carro: \n");
	gets_s(opafion.placa);
	printf("Digite o ano do carro: \n");
	scanf_s("%i", &opafion.anoFab);
	//strcpy_s(opafion.modelo, "Ka");
	printf("Modelo: %s\n", opafion.modelo);
	//strcpy_s(opafion.marca, "Ford");
	printf("Marca: %s\n", opafion.marca);
	//strcpy_s(opafion.cor, "Vermelho");
	printf("Cor: %s\n", opafion.cor);
	//strcpy_s(opafion.placa, "abc1234");
	printf("Placa: %s\n", opafion.placa);
	//opafion.anoFab = 2000;
	printf("Ano de Fabricacao: %i\n", opafion.anoFab);
}

struct Funcionarios {
	char nome[80];
	char cpf[11];
	int diaNasc;
	int mesNasc;
	int anoNasc;
	float salario;
};

void Ex2(){
	
}*/

int main()
{
	//Exercicio24 
	float *n1, *n2;
	float p = 0, q = 0;
	n1 = &p;
	n2 = &q;
	printf("Digite o primeiro numero: \n");
	scanf_s("%f", &p);
	printf("Digite o segundo numero: \n");
	scanf_s("%f", &q);
	Exercicio24(n1, n2);

	//Ex1();
	//Ex2();


	system("pause");
    return 0;
}

