/*	Autor: Paula Martins de Sousa		Fecha de creación: 27/11/2022  */

/*
**	ENUNCIADO DEL PROGRAMA
**	Se desea hacer un programa en C para poder jugar al DOBLEACIERTO.
Este juego trata de elegir 2 números del 0 al 9 a través de un procedimiento
(“combinacionUsuario”) que serán pedidos a través de la función
(“pideNumEntreRango”). Es decir, dentro de combinacionUsuario hay dos llamadas
a pideNumEntreRango.
Posteriormente, el sistema genera aleatoriamente (rand) la combinación ganadora de
2 números (también entre 0 y 9) a través de un procedimiento llamado
“combinacionGanadora”.
Finalmente, hay que crear una función que dados los valores del usuario y los
aleatorios, devuelva al main cuántos aciertos ha tenido el usuario
(“calculaAciertos”).
Los números del usuario NO se pueden repetir ni los números de la combinación
ganadora no se pueden repetir.
Para calcular el número de aciertos, no es necesario que los números estén en la misma
posición, simplemente es necesario que sean iguales.

**
*/

#include <stdio.h>
void combinacionUsuario(int[]);
int pideNumEntreRango(int, int);
void combinacionGanadora(int[]);
int calculaAciertos(int [], int [], int);

int main()
{
	int vUser[2];
	int vRand[2];
	int aciertos=0;
	srand (getpid());

	printf("BIENVENIDOS AL PROGRAMA DE LOTERIA DOBLE ACIERTO:\n");
	combinacionUsuario(vUser);
	combinacionGanadora(vRand);
	calculaAciertos(vUser, vRand, aciertos);
	system("pause");
	

	getch();

	return 0;
}

void combinacionUsuario(int v[])
{

	for (int i = 0; i < 2; i++)
	{
		v[i] = pideNumEntreRango(0, 9);
	}
	if(v[0]==v[1])
	{
		printf("\nLos numeros selecionados no e pueden repetir.");
		v[1]= pideNumEntreRango(0,9);	
	}
	printf("\nLa combinaion del usuario es: ");
	for (int i=0; i<2; i++)
	{
		printf("%d   ",v[i]);
	}
	
}
pideNumEntreRango(min, max)
{
	int num;

	do
	{
		printf("\nIntroduce un numero entre 0 y 9: ");
		scanf("%d", &num);
	} while (num < 0 || num > 9);

	return num;
}
void combinacionGanadora(int v[])
{
do
{
	for (int i = 0; i < 2; i++)
	{
		v[i] = rand() %10;
	}
} while (v[0]==v[1]);


printf("\nLa combinaion ganadora es: ");
	for (int i=0; i<2; i++)
	{
		printf("%d   ",v[i]);
	}
}
calculaAciertos(int vU[], int vR[], int aciertos)
{
	
for(int i=0; i<2;i++)
{
	if (vU[i]==vR[i])
	{
		aciertos++;
	}
}
switch (aciertos)
{
case 0:
	printf("\n\n\nNo has acertado ningun numero.\n\n");
	break;
case 1:
	printf("\n\n\nHas acertado 1 numero.\n\n");
	break;
case 2:
	printf("\n\n\nHas acertado los 2 numeros.\n\n");
	break;


}
return aciertos;
}
