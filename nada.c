/*
 *      estructura.c
 *
 *      Julio César Brizuela <brizuelaalvarado@gmail.com> 2009
 *
 *      para el wikilibro "Programación en C (fundamentos)"
 *      bajo licencia FDL, adaptado del Dominio Público
 *
 * 		Nombre Miembro		Tipo
 * 		Titulo			char[30]
 * 		Artista			char[25]
 * 		Precio			float
 * 		Total Canciones		int
 */

#include <stdio.h>
#include <string.h>

/* definimos una estructura para cds */
struct cd
{
    char title[30];
    char creator[20];
    char subject[10];
     char titulo[30];
     char artista[25];
     float precio;
     int canciones;
} Cd1 = {     /* inicializamos la estructura Cd1 creaa con sus valores
               * usando las definiciones iniciales*/
		"Canciones Bebe", /* titulo */
		"Pinocho", /* artista */
		12.50, /* precio */
		16 /* total canciones */
	  };

int main(void)
{
	struct cd Cd2;
	strcpy(Cd2.titulo, "New Age");
  strcpy(Cd2.title, "Nuevo Titulo");

	/* la forma de insertar valores a un
	 * tipo char en una estructura es usando strcpy
	 * de la libreria string.h
	 */
	strcpy(Cd2.artista, "Old Man");
	Cd2.precio = 15.00;
	Cd2.canciones = 12;

	/* la forma de acceder a los valores de una estructura */
	/* es usando el "." despues de la definicion del dato*/
	printf("\n Cd 1");
	printf("\n Titulo: %s ", Cd1.titulo);
	printf("\n Artista: %s ", Cd1.artista);
	printf("\n Total Canciones: %d ", Cd1.canciones);
	printf("\n Precio Cd: %f ", Cd1.precio);

	printf("\n");
	printf("\n Cd 2");
	printf("\n Titulo: %s ", Cd2.title);
	printf("\n Artista: %s ", Cd2.artista);
	printf("\n Total Canciones: %d ", Cd2.canciones);
	printf("\n Precio Cd: %.2f ", Cd2.precio); /* el .2 que esta entre %f
                                                   * sirve para mostrar unicamente
                                                   * 2 decimales despues del punto*/

	return 0;
}
