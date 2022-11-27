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
void combinacionUsuario(int []);
int pideNumEntreRango(int, int);
// void combinacionGanadora();
// int calculaAciertos(int [], int []);

int main(){
int vUser[2];


printf("BIENVENIDOS AL PROGRAMA DE LOTERIA DOBLE ACIERTO:\n");
combinacionUsuario(vUser);


	
	getch();
	
	return 0;
}

void combinacionUsuario(int v[])
{

for (int i=0;i<2;i++)
{
v[i]= pideNumEntreRango(0,9);


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
